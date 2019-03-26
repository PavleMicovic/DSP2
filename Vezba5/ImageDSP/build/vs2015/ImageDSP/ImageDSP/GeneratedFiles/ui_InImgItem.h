/********************************************************************************
** Form generated from reading UI file 'InImgItem.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INIMGITEM_H
#define UI_INIMGITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InImgItem
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *thumbnail;
    QVBoxLayout *verticalLayout_2;
    QLabel *name;
    QLabel *fileName;
    QLabel *resolution;

    void setupUi(QWidget *inImgItem)
    {
        if (inImgItem->objectName().isEmpty())
            inImgItem->setObjectName(QStringLiteral("inImgItem"));
        inImgItem->resize(282, 139);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inImgItem->sizePolicy().hasHeightForWidth());
        inImgItem->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(inImgItem);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        thumbnail = new QLabel(inImgItem);
        thumbnail->setObjectName(QStringLiteral("thumbnail"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(thumbnail->sizePolicy().hasHeightForWidth());
        thumbnail->setSizePolicy(sizePolicy1);
        thumbnail->setPixmap(QPixmap(QString::fromUtf8(":/images/ic_music.png")));
        thumbnail->setScaledContents(false);

        horizontalLayout->addWidget(thumbnail);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        name = new QLabel(inImgItem);
        name->setObjectName(QStringLiteral("name"));
        sizePolicy.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(name);

        fileName = new QLabel(inImgItem);
        fileName->setObjectName(QStringLiteral("fileName"));
        sizePolicy.setHeightForWidth(fileName->sizePolicy().hasHeightForWidth());
        fileName->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(fileName);

        resolution = new QLabel(inImgItem);
        resolution->setObjectName(QStringLiteral("resolution"));
        sizePolicy.setHeightForWidth(resolution->sizePolicy().hasHeightForWidth());
        resolution->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(resolution);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(inImgItem);

        QMetaObject::connectSlotsByName(inImgItem);
    } // setupUi

    void retranslateUi(QWidget *inImgItem)
    {
        inImgItem->setWindowTitle(QApplication::translate("InImgItem", "Form", Q_NULLPTR));
        thumbnail->setText(QString());
        name->setText(QApplication::translate("InImgItem", "<html><head/><body><p><span style=\" font-size:26pt;\">%1</span></p></body></html>", Q_NULLPTR));
        fileName->setText(QApplication::translate("InImgItem", "<html><head/><body><p><span style=\" font-size:16pt; font-style:italic;\">%1</span></p></body></html>", Q_NULLPTR));
        resolution->setText(QApplication::translate("InImgItem", "<html><head/><body><p><span style=\" font-weight:600;\">%1</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InImgItem: public Ui_InImgItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INIMGITEM_H
