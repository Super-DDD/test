#ifndef CAMERADIALOG_H
#define CAMERADIALOG_H



#include <QDialog>
#include    <QtMultimedia>

namespace Ui {
class CameraDialog;
}

class CameraDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CameraDialog(QWidget *parent = nullptr);
    ~CameraDialog();

private :
    QCamera *camera;
    QMediaCaptureSession  *session;      //抓取管理器
    QImageCapture   *imageCapture;      //抓图器
    QImage scaledImage ; //图片数据
    QCameraDevice  defaultCameraDevice;




private slots:
    void on_btnOpen_clicked();

    void on_btnStart_clicked();

    void on_btnStop_clicked();

    void on_btnCapture_clicked();

    void on_btnQuit_clicked();

    void do_image_captured(int id, const QImage &preview);



    void on_btnSave_clicked();

private:
    Ui::CameraDialog *ui;
};

#endif // CAMERADIALOG_H
