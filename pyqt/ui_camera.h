/********************************************************************************
** Form generated from reading UI file 'camera.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_camera
{
public:
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnTake;
    QPushButton *btnRedo;
    QPushButton *btnYes;
    QPushButton *btnCancel;
    QGroupBox *groupBox_2;

    void setupUi(QWidget *camera)
    {
        if (camera->objectName().isEmpty())
            camera->setObjectName("camera");
        camera->resize(524, 354);
        groupBox = new QGroupBox(camera);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 240, 441, 91));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        btnTake = new QPushButton(groupBox);
        btnTake->setObjectName("btnTake");

        horizontalLayout->addWidget(btnTake);

        btnRedo = new QPushButton(groupBox);
        btnRedo->setObjectName("btnRedo");

        horizontalLayout->addWidget(btnRedo);

        btnYes = new QPushButton(groupBox);
        btnYes->setObjectName("btnYes");

        horizontalLayout->addWidget(btnYes);

        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName("btnCancel");

        horizontalLayout->addWidget(btnCancel);

        groupBox_2 = new QGroupBox(camera);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(40, 20, 451, 201));

        retranslateUi(camera);

        QMetaObject::connectSlotsByName(camera);
    } // setupUi

    void retranslateUi(QWidget *camera)
    {
        camera->setWindowTitle(QCoreApplication::translate("camera", "Form", nullptr));
        groupBox->setTitle(QString());
        btnTake->setText(QCoreApplication::translate("camera", "\346\213\215\347\205\247", nullptr));
        btnRedo->setText(QCoreApplication::translate("camera", "\351\207\215\346\213\215", nullptr));
        btnYes->setText(QCoreApplication::translate("camera", "\347\241\256\345\256\232", nullptr));
        btnCancel->setText(QCoreApplication::translate("camera", "\345\217\226\346\266\210", nullptr));
        groupBox_2->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class camera: public Ui_camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
