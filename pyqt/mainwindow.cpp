#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QProcess>
#include <QLabel>
#include <QSpinBox>
#include <QActionGroup>
#include <QMessageBox>
#include "cameradialog.h"


//初始化界面
void MainWindow::buildUI()
{


    labInfo=new QLabel(this);  //用于显示字体名称的标签
    labInfo->setText("开始使用");
    ui->statusBar->addPermanentWidget(labInfo); //添加到状态栏


//创建字体大小spinbox
    spinFontSize = new QSpinBox(this);  //文字大小SpinBox
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    spinFontSize->setValue(ui->textEdit->font().pointSize());
    spinFontSize->setMinimumWidth(50);
    ui->mainToolBar->addWidget(spinFontSize); //SpinBox添加到工具栏
    //设定图表显示风格
    ui->mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);


    ui->mainToolBar->addSeparator(); //工具栏上增加分隔条
    ui->mainToolBar->addAction(ui->actClose);



}
//建立信号与槽联系
void MainWindow::buildSignalSlots()
{
    connect(spinFontSize,SIGNAL(valueChanged(int)),
            this,SLOT(do_fontSize_changed(int)));

    // connect(comboFontName,&QFontComboBox::currentFontChanged,
    //         this, &MainWindow::do_fontSelected);




}


//构造函数
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    buildUI();  //动态创建界面组件
    buildSignalSlots(); //为2个动态创建的组件手动关联信号与槽


    this->setCentralWidget(ui->textEdit);   //textEdit填充满工作区
}

MainWindow::~MainWindow()
{
    delete ui;
}

//字体大小 spinbox
void MainWindow::do_fontSize_changed(int fontSize)
{

    QTextCharFormat fmt=ui->textEdit->currentCharFormat();
    fmt.setFontPointSize(fontSize); //设置字体大小
    ui->textEdit->mergeCurrentCharFormat(fmt);
}


//选中字体时，使能
void MainWindow::on_textEdit_copyAvailable(bool b)
{
    ui->actEdit_Cut->setEnabled(b);
    ui->actEdit_Copy->setEnabled(b);
    ui->actEdit_Paste->setEnabled(ui->textEdit->canPaste());
}

//粗体
void MainWindow::on_actFont_Bold_triggered(bool checked)
{//粗体
    QTextCharFormat fmt=ui->textEdit->currentCharFormat();
    if(checked)
        fmt.setFontWeight(QFont::Bold);
    else
        fmt.setFontWeight(QFont::Normal);
    ui->textEdit->mergeCurrentCharFormat(fmt);
}

//斜体
void MainWindow::on_actFont_Italic_triggered(bool checked)
{//斜体
    QTextCharFormat fmt=ui->textEdit->currentCharFormat();
    fmt.setFontItalic(checked);
    ui->textEdit->mergeCurrentCharFormat(fmt);
}


//下划线
void MainWindow::on_actFont_UnderLine_triggered(bool checked)
{//下划线
    QTextCharFormat fmt=ui->textEdit->currentCharFormat();
    fmt.setFontUnderline(checked);
    ui->textEdit->mergeCurrentCharFormat(fmt);
}



//selectionChanged()信号,更新3种字体样式的checked状态
void MainWindow::on_textEdit_selectionChanged()
{
    QTextCharFormat fmt=ui->textEdit->currentCharFormat();
    ui->actFont_Bold->setChecked(fmt.font().bold());    //粗体
    ui->actFont_Italic->setChecked(fmt.fontItalic());   //斜体
    ui->actFont_UnderLine->setChecked(fmt.fontUnderline()); //下划线
}



//打开
void MainWindow::on_actFile_Open_triggered()
{

}

//保存文件
void MainWindow::on_actFile_Save_triggered()
{
    QString filePath = QFileDialog::getSaveFileName(this, tr("Save File"), QDir::currentPath(), tr("Text Files (*.txt);;All Files (*)"));
    if (filePath.isEmpty())
        return;

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this, tr("Error"), tr("Could not open file for writing"));
        return;
    }

    QTextStream out(&file);
    out << ui->textEdit->toPlainText();
    file.close();

}

//点击关闭时
void MainWindow::on_actClose_triggered()
{
    if (ui->textEdit->document()->isModified()) {
        QMessageBox::StandardButton resBtn = QMessageBox::question(this, "确认", "文本已被修改，是否保存修改？",
                                                                   QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                                                   QMessageBox::Yes);
        if (resBtn == QMessageBox::Yes) {
            on_actFile_Save_triggered();


        } else if (resBtn == QMessageBox::Cancel) {

        }else{

        }
    }
    close();
}

//重写关闭事件



//选择本机照片
void MainWindow::on_toolButton_clicked()
{
    filePath = QFileDialog::getOpenFileName(this, "Open Image File", "", "Images (*.png *.jpg *.jpeg)");
    if (!filePath.isEmpty()) {
        QPixmap pixmap(filePath);
        if (!pixmap.isNull()) {
            ui->label->setPixmap(pixmap.scaled(ui->label->size(), Qt::KeepAspectRatio));
        }
    }
}


//开始识别
void MainWindow::on_toolButton_2_clicked()
{
    QProcess process;
    QString pythonScriptPath = "F:\\python项目\\venv\\练习.py"; // 替换为你的Python脚本路径
    QStringList arguments; // 如果有参数，可以在这里添加参数
    arguments.append(filePath);

    // 启动Python解释器并执行脚本
    process.start("python", QStringList() << pythonScriptPath << arguments);
    //process.start("python", pythonScriptPath);

    process.waitForFinished(-1); // 等待进程结束
    QString output = process.readAllStandardOutput(); // 获取输出结果
    if(output.isEmpty()){
        ui->textEdit->setPlainText("error"); // 将输出结果显示在TextEdit控件中
    }
    else{
        ui->textEdit->setPlainText(output); // 将输出结果显示在TextEdit控件中
    }
}


//开始拍照
void MainWindow::on_takePic_clicked()
{
    CameraDialog *dialog = new CameraDialog(this);

    ;
    if(dialog->exec() == QDialog :: Accepted ){
        QPixmap pixmap(filePath);
        ui->label->setPixmap(pixmap.scaled(ui->label->size(), Qt::KeepAspectRatio));

    }
    delete dialog;

}

