#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include    <QMainWindow>

// #include    <QLabel>
// #include    <QSpinBox>

// #include    <QActionGroup>

class QLabel;
class QSpinBox;
class QActionGroup;


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:

    QLabel    *labInfo;    //状态栏里使用
    QString   filePath="";
    QSpinBox   *spinFontSize;  //字体大小



    void    buildUI(); //程序设计的UI初始化
    void    buildSignalSlots(); //手工关联信号与槽
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setFilepath(QString path){
        filePath = path;
    }




private slots:
    //  自定义槽函数
    void do_fontSize_changed(int fontSize);//改变字体大小的SpinBox的响应




    void on_textEdit_copyAvailable(bool b);

    void on_textEdit_selectionChanged();

    void on_actFont_Bold_triggered(bool checked);

    void on_actFont_Italic_triggered(bool checked);

    void on_actFont_UnderLine_triggered(bool checked);


    void on_actFile_Open_triggered();

    void on_actFile_Save_triggered();
    void on_actClose_triggered();

    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

    void on_takePic_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
