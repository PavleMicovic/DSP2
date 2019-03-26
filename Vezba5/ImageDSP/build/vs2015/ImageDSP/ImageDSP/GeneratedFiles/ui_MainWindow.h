/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionQuit;
    QAction *actionImportGeometry;
    QAction *actionImportTexture;
    QAction *actionExportGeometry;
    QAction *actionExportTexture;
    QAction *actionTextureName;
    QAction *actionTextureDescription;
    QAction *actionDeleteTexture;
    QAction *actionResetModelCamera;
    QAction *actionResetUVCamera;
    QAction *actionResetAllCameras;
    QAction *actionLanguage;
    QAction *actionTextureItemAlwaysEditor;
    QDockWidget *inputImgViewDock;
    QWidget *inputImgViewDockCentralWidget;
    QVBoxLayout *inputImgViewDockLayout;
    QVBoxLayout *inputImgViewLayout;
    QDockWidget *outputImgViewDock;
    QWidget *outputImgViewDockCentralWidget;
    QVBoxLayout *imgViewDockLayout;
    QVBoxLayout *outputImgViewLayout;
    QDockWidget *progListDock;
    QWidget *progListDockCentralWidget;
    QVBoxLayout *progListDockLayout;
    QListView *progList;
    QDockWidget *paramsListDock;
    QWidget *paramsListDockCentralWidget;
    QVBoxLayout *textureListLayout;
    QVBoxLayout *paramsListLayout;
    QDockWidget *inImgsListDock;
    QWidget *inImgsListDockCentralWidget;
    QVBoxLayout *inImgsListDockLayout;
    QListView *inImgsList;
    QDockWidget *outImgsListDock;
    QWidget *outImgsListDockCentralWidget;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QPushButton *saveOutImg;
    QLineEdit *outImageText;
    QPushButton *browseOutImg;
    QLabel *label;

    void setupUi(QMainWindow *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName(QStringLiteral("mainWindow"));
        mainWindow->resize(1176, 1251);
        actionNew = new QAction(mainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionOpen = new QAction(mainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(mainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSaveAs = new QAction(mainWindow);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        actionQuit = new QAction(mainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionImportGeometry = new QAction(mainWindow);
        actionImportGeometry->setObjectName(QStringLiteral("actionImportGeometry"));
        actionImportTexture = new QAction(mainWindow);
        actionImportTexture->setObjectName(QStringLiteral("actionImportTexture"));
        actionExportGeometry = new QAction(mainWindow);
        actionExportGeometry->setObjectName(QStringLiteral("actionExportGeometry"));
        actionExportTexture = new QAction(mainWindow);
        actionExportTexture->setObjectName(QStringLiteral("actionExportTexture"));
        actionTextureName = new QAction(mainWindow);
        actionTextureName->setObjectName(QStringLiteral("actionTextureName"));
        actionTextureDescription = new QAction(mainWindow);
        actionTextureDescription->setObjectName(QStringLiteral("actionTextureDescription"));
        actionDeleteTexture = new QAction(mainWindow);
        actionDeleteTexture->setObjectName(QStringLiteral("actionDeleteTexture"));
        actionResetModelCamera = new QAction(mainWindow);
        actionResetModelCamera->setObjectName(QStringLiteral("actionResetModelCamera"));
        actionResetUVCamera = new QAction(mainWindow);
        actionResetUVCamera->setObjectName(QStringLiteral("actionResetUVCamera"));
        actionResetAllCameras = new QAction(mainWindow);
        actionResetAllCameras->setObjectName(QStringLiteral("actionResetAllCameras"));
        actionLanguage = new QAction(mainWindow);
        actionLanguage->setObjectName(QStringLiteral("actionLanguage"));
        actionTextureItemAlwaysEditor = new QAction(mainWindow);
        actionTextureItemAlwaysEditor->setObjectName(QStringLiteral("actionTextureItemAlwaysEditor"));
        actionTextureItemAlwaysEditor->setCheckable(true);
        actionTextureItemAlwaysEditor->setChecked(true);
        inputImgViewDock = new QDockWidget(mainWindow);
        inputImgViewDock->setObjectName(QStringLiteral("inputImgViewDock"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inputImgViewDock->sizePolicy().hasHeightForWidth());
        inputImgViewDock->setSizePolicy(sizePolicy);
        inputImgViewDock->setMinimumSize(QSize(500, 500));
        inputImgViewDockCentralWidget = new QWidget();
        inputImgViewDockCentralWidget->setObjectName(QStringLiteral("inputImgViewDockCentralWidget"));
        inputImgViewDockLayout = new QVBoxLayout(inputImgViewDockCentralWidget);
        inputImgViewDockLayout->setObjectName(QStringLiteral("inputImgViewDockLayout"));
        inputImgViewLayout = new QVBoxLayout();
        inputImgViewLayout->setObjectName(QStringLiteral("inputImgViewLayout"));

        inputImgViewDockLayout->addLayout(inputImgViewLayout);

        inputImgViewDock->setWidget(inputImgViewDockCentralWidget);
        mainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), inputImgViewDock);
        outputImgViewDock = new QDockWidget(mainWindow);
        outputImgViewDock->setObjectName(QStringLiteral("outputImgViewDock"));
        sizePolicy.setHeightForWidth(outputImgViewDock->sizePolicy().hasHeightForWidth());
        outputImgViewDock->setSizePolicy(sizePolicy);
        outputImgViewDock->setMinimumSize(QSize(500, 500));
        outputImgViewDockCentralWidget = new QWidget();
        outputImgViewDockCentralWidget->setObjectName(QStringLiteral("outputImgViewDockCentralWidget"));
        imgViewDockLayout = new QVBoxLayout(outputImgViewDockCentralWidget);
        imgViewDockLayout->setObjectName(QStringLiteral("imgViewDockLayout"));
        outputImgViewLayout = new QVBoxLayout();
        outputImgViewLayout->setObjectName(QStringLiteral("outputImgViewLayout"));

        imgViewDockLayout->addLayout(outputImgViewLayout);

        outputImgViewDock->setWidget(outputImgViewDockCentralWidget);
        mainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), outputImgViewDock);
        progListDock = new QDockWidget(mainWindow);
        progListDock->setObjectName(QStringLiteral("progListDock"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progListDock->sizePolicy().hasHeightForWidth());
        progListDock->setSizePolicy(sizePolicy1);
        progListDock->setMinimumSize(QSize(300, 300));
        progListDock->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        progListDockCentralWidget = new QWidget();
        progListDockCentralWidget->setObjectName(QStringLiteral("progListDockCentralWidget"));
        progListDockLayout = new QVBoxLayout(progListDockCentralWidget);
        progListDockLayout->setObjectName(QStringLiteral("progListDockLayout"));
        progList = new QListView(progListDockCentralWidget);
        progList->setObjectName(QStringLiteral("progList"));
        progList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        progList->setProperty("showDropIndicator", QVariant(false));

        progListDockLayout->addWidget(progList);

        progListDock->setWidget(progListDockCentralWidget);
        mainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), progListDock);
        paramsListDock = new QDockWidget(mainWindow);
        paramsListDock->setObjectName(QStringLiteral("paramsListDock"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(paramsListDock->sizePolicy().hasHeightForWidth());
        paramsListDock->setSizePolicy(sizePolicy2);
        paramsListDock->setMinimumSize(QSize(300, 300));
        paramsListDockCentralWidget = new QWidget();
        paramsListDockCentralWidget->setObjectName(QStringLiteral("paramsListDockCentralWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(paramsListDockCentralWidget->sizePolicy().hasHeightForWidth());
        paramsListDockCentralWidget->setSizePolicy(sizePolicy3);
        textureListLayout = new QVBoxLayout(paramsListDockCentralWidget);
        textureListLayout->setObjectName(QStringLiteral("textureListLayout"));
        paramsListLayout = new QVBoxLayout();
        paramsListLayout->setObjectName(QStringLiteral("paramsListLayout"));

        textureListLayout->addLayout(paramsListLayout);

        paramsListDock->setWidget(paramsListDockCentralWidget);
        mainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), paramsListDock);
        inImgsListDock = new QDockWidget(mainWindow);
        inImgsListDock->setObjectName(QStringLiteral("inImgsListDock"));
        sizePolicy2.setHeightForWidth(inImgsListDock->sizePolicy().hasHeightForWidth());
        inImgsListDock->setSizePolicy(sizePolicy2);
        inImgsListDock->setMinimumSize(QSize(300, 300));
        inImgsListDock->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        inImgsListDockCentralWidget = new QWidget();
        inImgsListDockCentralWidget->setObjectName(QStringLiteral("inImgsListDockCentralWidget"));
        inImgsListDockLayout = new QVBoxLayout(inImgsListDockCentralWidget);
        inImgsListDockLayout->setObjectName(QStringLiteral("inImgsListDockLayout"));
        inImgsList = new QListView(inImgsListDockCentralWidget);
        inImgsList->setObjectName(QStringLiteral("inImgsList"));
        inImgsList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        inImgsList->setProperty("showDropIndicator", QVariant(true));

        inImgsListDockLayout->addWidget(inImgsList);

        inImgsListDock->setWidget(inImgsListDockCentralWidget);
        mainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), inImgsListDock);
        outImgsListDock = new QDockWidget(mainWindow);
        outImgsListDock->setObjectName(QStringLiteral("outImgsListDock"));
        outImgsListDockCentralWidget = new QWidget();
        outImgsListDockCentralWidget->setObjectName(QStringLiteral("outImgsListDockCentralWidget"));
        verticalLayout_2 = new QVBoxLayout(outImgsListDockCentralWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        saveOutImg = new QPushButton(outImgsListDockCentralWidget);
        saveOutImg->setObjectName(QStringLiteral("saveOutImg"));

        gridLayout->addWidget(saveOutImg, 1, 1, 1, 1);

        outImageText = new QLineEdit(outImgsListDockCentralWidget);
        outImageText->setObjectName(QStringLiteral("outImageText"));

        gridLayout->addWidget(outImageText, 0, 0, 1, 1);

        browseOutImg = new QPushButton(outImgsListDockCentralWidget);
        browseOutImg->setObjectName(QStringLiteral("browseOutImg"));
        browseOutImg->setFocusPolicy(Qt::ClickFocus);

        gridLayout->addWidget(browseOutImg, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        label = new QLabel(outImgsListDockCentralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);

        verticalLayout_2->addWidget(label);

        outImgsListDock->setWidget(outImgsListDockCentralWidget);
        mainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), outImgsListDock);

        retranslateUi(mainWindow);

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindow)
    {
        mainWindow->setWindowTitle(QApplication::translate("mainWindow", "Image DSP", Q_NULLPTR));
        actionNew->setText(QApplication::translate("mainWindow", "&New", Q_NULLPTR));
        actionNew->setShortcut(QApplication::translate("mainWindow", "Ctrl+N", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("mainWindow", "&Open", Q_NULLPTR));
        actionOpen->setShortcut(QApplication::translate("mainWindow", "Ctrl+O", Q_NULLPTR));
        actionSave->setText(QApplication::translate("mainWindow", "&Save", Q_NULLPTR));
        actionSave->setShortcut(QApplication::translate("mainWindow", "Ctrl+S", Q_NULLPTR));
        actionSaveAs->setText(QApplication::translate("mainWindow", "Save &As", Q_NULLPTR));
        actionSaveAs->setShortcut(QApplication::translate("mainWindow", "Ctrl+Shift+S", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("mainWindow", "&Quit", Q_NULLPTR));
        actionQuit->setShortcut(QApplication::translate("mainWindow", "Ctrl+Q", Q_NULLPTR));
        actionImportGeometry->setText(QApplication::translate("mainWindow", "&Geometry", Q_NULLPTR));
        actionImportGeometry->setShortcut(QApplication::translate("mainWindow", "Ctrl+G", Q_NULLPTR));
        actionImportTexture->setText(QApplication::translate("mainWindow", "&Texture", Q_NULLPTR));
        actionImportTexture->setShortcut(QApplication::translate("mainWindow", "Ctrl+T", Q_NULLPTR));
        actionExportGeometry->setText(QApplication::translate("mainWindow", "&Geometry", Q_NULLPTR));
        actionExportTexture->setText(QApplication::translate("mainWindow", "&Texture", Q_NULLPTR));
        actionTextureName->setText(QApplication::translate("mainWindow", "Texture Name", Q_NULLPTR));
        actionTextureDescription->setText(QApplication::translate("mainWindow", "Texture Description", Q_NULLPTR));
        actionDeleteTexture->setText(QApplication::translate("mainWindow", "D&elete Texture", Q_NULLPTR));
        actionResetModelCamera->setText(QApplication::translate("mainWindow", "Reset &Model Camera", Q_NULLPTR));
        actionResetUVCamera->setText(QApplication::translate("mainWindow", "Reset &UV Camera", Q_NULLPTR));
        actionResetAllCameras->setText(QApplication::translate("mainWindow", "Reset &All Cameras", Q_NULLPTR));
        actionResetAllCameras->setShortcut(QApplication::translate("mainWindow", "Ctrl+R", Q_NULLPTR));
        actionLanguage->setText(QApplication::translate("mainWindow", "&Language", Q_NULLPTR));
        actionTextureItemAlwaysEditor->setText(QApplication::translate("mainWindow", "Texture Item Always Editor", Q_NULLPTR));
        inputImgViewDock->setWindowTitle(QApplication::translate("mainWindow", "Input Image", Q_NULLPTR));
        outputImgViewDock->setWindowTitle(QApplication::translate("mainWindow", "Output Image", Q_NULLPTR));
        progListDock->setWindowTitle(QApplication::translate("mainWindow", "Programs", Q_NULLPTR));
        paramsListDock->setWindowTitle(QApplication::translate("mainWindow", "Parameters", Q_NULLPTR));
        inImgsListDock->setWindowTitle(QApplication::translate("mainWindow", "Input Images", Q_NULLPTR));
        outImgsListDock->setWindowTitle(QApplication::translate("mainWindow", "Output Images", Q_NULLPTR));
        saveOutImg->setText(QApplication::translate("mainWindow", "Save", Q_NULLPTR));
        browseOutImg->setText(QApplication::translate("mainWindow", "Browse...", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
