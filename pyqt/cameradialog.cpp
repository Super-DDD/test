#include "cameradialog.h"
#include "ui_cameradialog.h"
#include <QCamera>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QFileDialog>
#include <QMessageBox>
#include  <QtMultimedia>
#include <QStandardPaths>
#include <QDir>
#include <QFile>
#include <QDateTime>
#include "mainwindow.h"



CameraDialog::CameraDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CameraDialog)
{
    ui->setupUi(this);




    //寻找默认摄像头
    defaultCameraDevice= QMediaDevices::defaultVideoInput();
    if (defaultCameraDevice.isNull())
    {
        QMessageBox::critical(this,"提示","没有发现摄像头");
        return;
    }
    ui->btnStart->setEnabled(true);

    //2. 创建抓取管理器session和各个设备
    session = new QMediaCaptureSession(this);       //抓取管理器
    session->setVideoOutput(ui->videoWidget);  //设置视频输出组件，用于视频预览

    //创建摄像头对象
    camera = new QCamera(this);        //摄像头
    camera->setCameraDevice(defaultCameraDevice);
    session->setCamera(camera);        //为session设置摄像头



    //创建抓图器

    imageCapture = new QImageCapture(this);     //抓图器
    imageCapture->setResolution(250, 200);

    session->setImageCapture(imageCapture);

    imageCapture->setQuality(QImageCapture::VeryHighQuality);


 //   session->setImageCapture(imageCapture);     //为session设置抓图器




    //建立信号与槽链接

    connect(imageCapture,SIGNAL(imageCaptured(int,const QImage &)) ,
            this,SLOT(do_image_captured(int,const QImage &)) );

    // connect(imageCapture,SIGNAL(imageCaptured(QImage)),
    //         this,SLOT(do_image_captured(QImage)));

    // connect(imageCapture,&QImageCapture::imageCaptured,
    //         this,&CameraDialog::do_image_captured);

}





CameraDialog::~CameraDialog()
{
    delete ui;
}

//waste
void CameraDialog::on_btnOpen_clicked()
{

}

//点击开始摄像头
void CameraDialog::on_btnStart_clicked()
{
    camera->start();
    ui->videoWidget->setEnabled(true);
    ui->btnCapture->setEnabled(true);

}

//点击关闭摄像头
void CameraDialog::on_btnStop_clicked()
{
    camera->stop();
    ui->videoWidget->setEnabled(false);
    ui->btnCapture->setEnabled(false);


}

//点击拍照按钮
void CameraDialog::on_btnCapture_clicked()
{


    imageCapture->capture();


}

//捕获图片具体实现，与imagecapture的capture信号绑定
void CameraDialog::do_image_captured(int id ,const QImage &preview){
    // *scaledImage = preview.scaledToWidth(ui->videoWidget->width()-30);
    // ui->pixLabel->setPixmap(QPixmap::fromImage(preview));
    Q_UNUSED(id);
    scaledImage= preview.scaled(ui->videoWidget->size());
    ui->btnSave->setEnabled(true);
    ui->pixLabel->setPixmap(QPixmap::fromImage(preview));


}
//退出
void CameraDialog::on_btnQuit_clicked()
{
    camera->stop();


    this->close();
}

//保存图片到项目debug文件夹下固定文件夹tmpimage中
void CameraDialog::on_btnSave_clicked()
{
    QString savePath = QCoreApplication::applicationDirPath();
    QDir dir(savePath);
    if (!dir.exists("tmpImage")) {
        dir.mkpath("tmpImage"); // 如果目录不存在，则创建目录
    }
    // 构造保存路径，假设文件名为当前时间戳
    QString fileName = QString::number(QDateTime::currentMSecsSinceEpoch()) + ".png";
    QString filePath = QDir(savePath).filePath("tmpImage/" + fileName);
    qDebug() << filePath ;

    // 保存图片
    bool success = scaledImage.save(filePath, "PNG");
    if (success) {
        QMessageBox::information(this, "保存成功", "文件已成功保存。");
        MainWindow *parent=(MainWindow *)parentWidget();
        parent->setFilepath( filePath);
        this->accept();


    } else {
        QMessageBox::critical(this, "保存失败", "保存文件时发生错误，请重试。");

    }




}

