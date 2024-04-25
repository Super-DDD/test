/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actEdit_Cut;
    QAction *actEdit_Copy;
    QAction *actEdit_Paste;
    QAction *actFont_Bold;
    QAction *actFont_Italic;
    QAction *actFont_UnderLine;
    QAction *actClose;
    QAction *actEdit_Clear;
    QAction *actEdit_Undo;
    QAction *actEdit_Redo;
    QAction *actEdit_SelectAll;
    QAction *actFile_Save;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu_E;
    QMenu *menu_F;
    QMenu *menu;
    QMenu *menu_F_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton;
    QPushButton *takePic;
    QToolButton *toolButton_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(742, 473);
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        actEdit_Cut = new QAction(MainWindow);
        actEdit_Cut->setObjectName("actEdit_Cut");
        actEdit_Cut->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/images/200.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Cut->setIcon(icon);
        actEdit_Copy = new QAction(MainWindow);
        actEdit_Copy->setObjectName("actEdit_Copy");
        actEdit_Copy->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/images/202.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Copy->setIcon(icon1);
        actEdit_Paste = new QAction(MainWindow);
        actEdit_Paste->setObjectName("actEdit_Paste");
        actEdit_Paste->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/images/204.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Paste->setIcon(icon2);
        actFont_Bold = new QAction(MainWindow);
        actFont_Bold->setObjectName("actFont_Bold");
        actFont_Bold->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/images/500.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFont_Bold->setIcon(icon3);
        actFont_Italic = new QAction(MainWindow);
        actFont_Italic->setObjectName("actFont_Italic");
        actFont_Italic->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/images/502.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFont_Italic->setIcon(icon4);
        actFont_UnderLine = new QAction(MainWindow);
        actFont_UnderLine->setObjectName("actFont_UnderLine");
        actFont_UnderLine->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/images/504.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFont_UnderLine->setIcon(icon5);
        actClose = new QAction(MainWindow);
        actClose->setObjectName("actClose");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon6);
        actEdit_Clear = new QAction(MainWindow);
        actEdit_Clear->setObjectName("actEdit_Clear");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/images/212.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Clear->setIcon(icon7);
        actEdit_Undo = new QAction(MainWindow);
        actEdit_Undo->setObjectName("actEdit_Undo");
        actEdit_Undo->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/images/206.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Undo->setIcon(icon8);
        actEdit_Redo = new QAction(MainWindow);
        actEdit_Redo->setObjectName("actEdit_Redo");
        actEdit_Redo->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/images/208.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Redo->setIcon(icon9);
        actEdit_SelectAll = new QAction(MainWindow);
        actEdit_SelectAll->setObjectName("actEdit_SelectAll");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/images/100.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_SelectAll->setIcon(icon10);
        actFile_Save = new QAction(MainWindow);
        actFile_Save->setObjectName("actFile_Save");
        actFile_Save->setEnabled(false);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/images/104.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_Save->setIcon(icon11);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        textEdit = new QPlainTextEdit(centralWidget);
        textEdit->setObjectName("textEdit");
        QFont font1;
        font1.setPointSize(11);
        textEdit->setFont(font1);

        horizontalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 742, 21));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName("menu_E");
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName("menu_F");
        menu = new QMenu(menu_F);
        menu->setObjectName("menu");
        menu_F_2 = new QMenu(menuBar);
        menu_F_2->setObjectName("menu_F_2");
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        statusBar->setSizeGripEnabled(true);
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName("dockWidget");
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(dockWidgetContents);
        label->setObjectName("label");
        label->setTextFormat(Qt::PlainText);
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/images/CN.jpg")));
        label->setScaledContents(true);

        verticalLayout->addWidget(label);

        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName("groupBox");
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName("toolButton");

        horizontalLayout_2->addWidget(toolButton);

        takePic = new QPushButton(groupBox);
        takePic->setObjectName("takePic");

        horizontalLayout_2->addWidget(takePic);

        toolButton_2 = new QToolButton(groupBox);
        toolButton_2->setObjectName("toolButton_2");

        horizontalLayout_2->addWidget(toolButton_2);


        verticalLayout->addWidget(groupBox);

        verticalLayout->setStretch(0, 9);
        verticalLayout->setStretch(1, 1);
        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);

        menuBar->addAction(menu_F_2->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu_F->menuAction());
        menu_E->addAction(actEdit_Cut);
        menu_E->addAction(actEdit_Copy);
        menu_E->addAction(actEdit_Paste);
        menu_E->addSeparator();
        menu_E->addAction(actEdit_Undo);
        menu_E->addAction(actEdit_Redo);
        menu_E->addSeparator();
        menu_E->addAction(actEdit_SelectAll);
        menu_E->addAction(actEdit_Clear);
        menu_F->addAction(actFont_Bold);
        menu_F->addAction(actFont_Italic);
        menu_F->addAction(actFont_UnderLine);
        menu_F->addSeparator();
        menu_F->addAction(menu->menuAction());
        menu_F_2->addAction(actFile_Save);
        menu_F_2->addSeparator();
        menu_F_2->addAction(actClose);
        mainToolBar->addAction(actFile_Save);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actEdit_Cut);
        mainToolBar->addAction(actEdit_Copy);
        mainToolBar->addAction(actEdit_Paste);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actEdit_Undo);
        mainToolBar->addAction(actEdit_Redo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actFont_Bold);
        mainToolBar->addAction(actFont_Italic);
        mainToolBar->addAction(actFont_UnderLine);
        mainToolBar->addSeparator();
        mainToolBar->addSeparator();
        mainToolBar->addAction(actEdit_SelectAll);

        retranslateUi(MainWindow);
        QObject::connect(actEdit_Cut, &QAction::triggered, textEdit, qOverload<>(&QPlainTextEdit::cut));
        QObject::connect(actEdit_Copy, &QAction::triggered, textEdit, qOverload<>(&QPlainTextEdit::copy));
        QObject::connect(actEdit_Paste, &QAction::triggered, textEdit, qOverload<>(&QPlainTextEdit::paste));
        QObject::connect(actEdit_Clear, &QAction::triggered, textEdit, qOverload<>(&QPlainTextEdit::clear));
        QObject::connect(actEdit_Undo, &QAction::triggered, textEdit, qOverload<>(&QPlainTextEdit::undo));
        QObject::connect(actEdit_Redo, &QAction::triggered, textEdit, qOverload<>(&QPlainTextEdit::redo));
        QObject::connect(textEdit, &QPlainTextEdit::undoAvailable, actEdit_Undo, &QAction::setEnabled);
        QObject::connect(textEdit, &QPlainTextEdit::redoAvailable, actEdit_Redo, &QAction::setEnabled);
        QObject::connect(actEdit_SelectAll, &QAction::triggered, textEdit, qOverload<>(&QPlainTextEdit::selectAll));
        QObject::connect(textEdit, &QPlainTextEdit::modificationChanged, actFile_Save, &QAction::setEnabled);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QAction\357\274\214QMainWindow\357\274\214QPlainTextEdit", nullptr));
        actEdit_Cut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(tooltip)
        actEdit_Cut->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207\345\210\260\347\262\230\350\264\264\346\235\277", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actEdit_Cut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actEdit_Copy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(tooltip)
        actEdit_Copy->setToolTip(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266\345\210\260\347\262\230\350\264\264\346\235\277", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actEdit_Copy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actEdit_Paste->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(tooltip)
        actEdit_Paste->setToolTip(QCoreApplication::translate("MainWindow", "\344\273\216\347\262\230\350\264\264\346\235\277\347\262\230\350\264\264", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actEdit_Paste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actFont_Bold->setText(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actFont_Bold->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actFont_Italic->setText(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actFont_Italic->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actFont_UnderLine->setText(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#if QT_CONFIG(tooltip)
        actFont_UnderLine->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        actClose->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#if QT_CONFIG(tooltip)
        actClose->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\234\254\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        actEdit_Clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
#if QT_CONFIG(tooltip)
        actEdit_Clear->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actEdit_Undo->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200", nullptr));
#if QT_CONFIG(tooltip)
        actEdit_Undo->setToolTip(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200\344\270\212\346\254\241\347\274\226\350\276\221\346\223\215\344\275\234", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actEdit_Undo->setStatusTip(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200\344\270\212\346\254\241\347\274\226\350\276\221\346\223\215\344\275\234", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actEdit_Undo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actEdit_Redo->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\201\232", nullptr));
#if QT_CONFIG(tooltip)
        actEdit_Redo->setToolTip(QCoreApplication::translate("MainWindow", "\351\207\215\345\201\232\344\270\212\346\254\241\346\223\215\344\275\234", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actEdit_Redo->setStatusTip(QCoreApplication::translate("MainWindow", "\351\207\215\345\201\232\344\270\212\346\254\241\346\223\215\344\275\234", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actEdit_Redo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actEdit_SelectAll->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        actEdit_SelectAll->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actEdit_SelectAll->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actFile_Save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        actFile_Save->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\344\277\256\346\224\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actFile_Save->setStatusTip(QCoreApplication::translate("MainWindow", "\346\262\241\346\234\211\345\256\236\351\231\205\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actFile_Save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        textEdit->setPlainText(QCoreApplication::translate("MainWindow", "\350\257\267\347\202\271\345\207\273\346\267\273\345\212\240\345\233\276\347\211\207\357\274\214\345\274\200\345\247\213\350\257\206\345\210\253\343\200\202", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", nullptr));
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217(&M)", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\347\225\214\351\235\242\350\257\255\350\250\200", nullptr));
        menu_F_2->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        label->setText(QString());
        groupBox->setTitle(QString());
        toolButton->setText(QCoreApplication::translate("MainWindow", "\346\234\254\346\234\272\345\233\276\347\211\207", nullptr));
        takePic->setText(QCoreApplication::translate("MainWindow", "\346\213\215\347\205\247", nullptr));
        toolButton_2->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\350\257\206\345\210\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
