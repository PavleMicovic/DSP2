/********************************************************************************
** Form generated from reading UI file 'ParamItem.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMITEM_H
#define UI_PARAMITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParamItem
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *MinLabel;
    QLabel *label_3;
    QLabel *MaxLabel;
    QSlider *paramSlider;
    QLabel *label;
    QLabel *paramName;
    QLineEdit *CurrentValueEdit;

    void setupUi(QWidget *ParamItem)
    {
        if (ParamItem->objectName().isEmpty())
            ParamItem->setObjectName(QStringLiteral("ParamItem"));
        ParamItem->resize(478, 129);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ParamItem->sizePolicy().hasHeightForWidth());
        ParamItem->setSizePolicy(sizePolicy);
        ParamItem->setMouseTracking(true);
        verticalLayout = new QVBoxLayout(ParamItem);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        MinLabel = new QLabel(ParamItem);
        MinLabel->setObjectName(QStringLiteral("MinLabel"));
        MinLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(MinLabel);

        label_3 = new QLabel(ParamItem);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        MaxLabel = new QLabel(ParamItem);
        MaxLabel->setObjectName(QStringLiteral("MaxLabel"));
        MaxLabel->setLayoutDirection(Qt::LeftToRight);
        MaxLabel->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        horizontalLayout->addWidget(MaxLabel);


        gridLayout_2->addLayout(horizontalLayout, 2, 1, 1, 1);

        paramSlider = new QSlider(ParamItem);
        paramSlider->setObjectName(QStringLiteral("paramSlider"));
        paramSlider->setMaximum(1000);
        paramSlider->setPageStep(100);
        paramSlider->setTracking(false);
        paramSlider->setOrientation(Qt::Horizontal);
        paramSlider->setTickPosition(QSlider::TicksBelow);
        paramSlider->setTickInterval(100);

        gridLayout_2->addWidget(paramSlider, 1, 1, 1, 1);

        label = new QLabel(ParamItem);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        paramName = new QLabel(ParamItem);
        paramName->setObjectName(QStringLiteral("paramName"));

        gridLayout_2->addWidget(paramName, 0, 0, 1, 1);

        CurrentValueEdit = new QLineEdit(ParamItem);
        CurrentValueEdit->setObjectName(QStringLiteral("CurrentValueEdit"));
        CurrentValueEdit->setMaxLength(100);

        gridLayout_2->addWidget(CurrentValueEdit, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        retranslateUi(ParamItem);

        QMetaObject::connectSlotsByName(ParamItem);
    } // setupUi

    void retranslateUi(QWidget *ParamItem)
    {
        ParamItem->setWindowTitle(QApplication::translate("ParamItem", "Form", Q_NULLPTR));
        MinLabel->setText(QApplication::translate("ParamItem", "0.0", Q_NULLPTR));
        label_3->setText(QString());
        MaxLabel->setText(QApplication::translate("ParamItem", "1.0", Q_NULLPTR));
        label->setText(QString());
        paramName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ParamItem: public Ui_ParamItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMITEM_H
