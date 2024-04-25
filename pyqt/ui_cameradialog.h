/********************************************************************************
** Form generated from reading UI file 'cameradialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERADIALOG_H
#define UI_CAMERADIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btnStart;
    QToolButton *btnStop;
    QToolButton *btnCapture;
    QToolButton *btnSave;
    QToolButton *btnQuit;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_3;
    QLabel *label;
    QVideoWidget *videoWidget;
    QGroupBox *groupBox_4;
    QLabel *label_2;
    QLabel *pixLabel;

    void setupUi(QDialog *CameraDialog)
    {
        if (CameraDialog->objectName().isEmpty())
            CameraDialog->setObjectName("CameraDialog");
        CameraDialog->resize(755, 556);
        layoutWidget = new QWidget(CameraDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 621, 431));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName("groupBox");
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 10, 601, 81));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnStart = new QToolButton(layoutWidget1);
        btnStart->setObjectName("btnStart");
        btnStart->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnStart->sizePolicy().hasHeightForWidth());
        btnStart->setSizePolicy(sizePolicy);
        QFont font;
        font.setKerning(true);
        btnStart->setFont(font);
        btnStart->setStyleSheet(QString::fromUtf8("border: none; color: black;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/video_chat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnStart->setIcon(icon);
        btnStart->setIconSize(QSize(30, 40));
        btnStart->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(btnStart);

        btnStop = new QToolButton(layoutWidget1);
        btnStop->setObjectName("btnStop");
        btnStop->setEnabled(true);
        sizePolicy.setHeightForWidth(btnStop->sizePolicy().hasHeightForWidth());
        btnStop->setSizePolicy(sizePolicy);
        btnStop->setFont(font);
        btnStop->setStyleSheet(QString::fromUtf8("border: none; color: black;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("images/remove_user.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnStop->setIcon(icon1);
        btnStop->setIconSize(QSize(30, 40));
        btnStop->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(btnStop);

        btnCapture = new QToolButton(layoutWidget1);
        btnCapture->setObjectName("btnCapture");
        btnCapture->setEnabled(false);
        sizePolicy.setHeightForWidth(btnCapture->sizePolicy().hasHeightForWidth());
        btnCapture->setSizePolicy(sizePolicy);
        btnCapture->setFont(font);
        btnCapture->setStyleSheet(QString::fromUtf8("border: none; color: black;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("images/picture.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnCapture->setIcon(icon2);
        btnCapture->setIconSize(QSize(30, 40));
        btnCapture->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(btnCapture);

        btnSave = new QToolButton(layoutWidget1);
        btnSave->setObjectName("btnSave");
        btnSave->setEnabled(false);
        sizePolicy.setHeightForWidth(btnSave->sizePolicy().hasHeightForWidth());
        btnSave->setSizePolicy(sizePolicy);
        btnSave->setFont(font);
        btnSave->setStyleSheet(QString::fromUtf8("border: none; color: black;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("images/file_pictures.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnSave->setIcon(icon3);
        btnSave->setIconSize(QSize(30, 40));
        btnSave->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(btnSave);

        btnQuit = new QToolButton(layoutWidget1);
        btnQuit->setObjectName("btnQuit");
        sizePolicy.setHeightForWidth(btnQuit->sizePolicy().hasHeightForWidth());
        btnQuit->setSizePolicy(sizePolicy);
        btnQuit->setFont(font);
        btnQuit->setStyleSheet(QString::fromUtf8("border: none; color: black;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("images/exit_24.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnQuit->setIcon(icon4);
        btnQuit->setIconSize(QSize(30, 40));
        btnQuit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(btnQuit);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName("groupBox_2");
        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 10, 601, 341));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(layoutWidget2);
        groupBox_3->setObjectName("groupBox_3");
        label = new QLabel(groupBox_3);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 69, 19));
        videoWidget = new QVideoWidget(groupBox_3);
        videoWidget->setObjectName("videoWidget");
        videoWidget->setEnabled(true);
        videoWidget->setGeometry(QRect(20, 40, 261, 251));

        horizontalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(layoutWidget2);
        groupBox_4->setObjectName("groupBox_4");
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 69, 19));
        pixLabel = new QLabel(groupBox_4);
        pixLabel->setObjectName("pixLabel");
        pixLabel->setGeometry(QRect(20, 50, 251, 250));

        horizontalLayout->addWidget(groupBox_4);


        verticalLayout_2->addWidget(groupBox_2);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 7);

        retranslateUi(CameraDialog);

        QMetaObject::connectSlotsByName(CameraDialog);
    } // setupUi

    void retranslateUi(QDialog *CameraDialog)
    {
        CameraDialog->setWindowTitle(QCoreApplication::translate("CameraDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        btnStart->setText(QCoreApplication::translate("CameraDialog", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", nullptr));
        btnStop->setText(QCoreApplication::translate("CameraDialog", "\345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", nullptr));
        btnCapture->setText(QCoreApplication::translate("CameraDialog", "\346\213\215\347\205\247", nullptr));
        btnSave->setText(QCoreApplication::translate("CameraDialog", "\347\241\256\350\256\244", nullptr));
        btnQuit->setText(QCoreApplication::translate("CameraDialog", "\351\200\200\345\207\272", nullptr));
        groupBox_2->setTitle(QString());
        groupBox_3->setTitle(QString());
        label->setText(QCoreApplication::translate("CameraDialog", "\346\221\204\345\203\217\345\244\264\351\242\204\350\247\210", nullptr));
        groupBox_4->setTitle(QString());
        label_2->setText(QCoreApplication::translate("CameraDialog", "\346\213\215\346\221\204\347\232\204\347\205\247\347\211\207", nullptr));
        pixLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CameraDialog: public Ui_CameraDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERADIALOG_H
