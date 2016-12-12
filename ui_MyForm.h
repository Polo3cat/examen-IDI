/********************************************************************************
** Form generated from reading UI file 'MyForm.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFORM_H
#define UI_MYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MyGLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QHBoxLayout *horizontalLayout;
    MyGLWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QSlider *verticalSlider;
    QPushButton *pushButton_3;
    QPushButton *pushButton;

    void setupUi(QWidget *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QStringLiteral("MyForm"));
        MyForm->resize(672, 652);
        horizontalLayout = new QHBoxLayout(MyForm);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget = new MyGLWidget(MyForm);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(widget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_2 = new QPushButton(MyForm);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(MyForm);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(MyForm);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        verticalSlider = new QSlider(MyForm);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setMouseTracking(false);
        verticalSlider->setLayoutDirection(Qt::LeftToRight);
        verticalSlider->setMinimum(1);
        verticalSlider->setMaximum(180);
        verticalSlider->setSingleStep(1);
        verticalSlider->setPageStep(1);
        verticalSlider->setValue(1);
        verticalSlider->setTracking(true);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setInvertedAppearance(false);
        verticalSlider->setTickPosition(QSlider::NoTicks);

        verticalLayout->addWidget(verticalSlider, 0, Qt::AlignHCenter);

        pushButton_3 = new QPushButton(MyForm);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(MyForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(pushButton, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(MyForm);
        QObject::connect(pushButton_2, SIGNAL(clicked()), widget, SLOT(canviarModel()));
        QObject::connect(pushButton, SIGNAL(clicked()), MyForm, SLOT(close()));
        QObject::connect(verticalSlider, SIGNAL(valueChanged(int)), widget, SLOT(canviarFov(int)));
        QObject::connect(widget, SIGNAL(fovCanviat(int)), verticalSlider, SLOT(setValue(int)));
        QObject::connect(pushButton_3, SIGNAL(clicked()), widget, SLOT(resetFov()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), widget, SLOT(resetView()));

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QWidget *MyForm)
    {
        MyForm->setWindowTitle(QApplication::translate("MyForm", "Form", 0));
        pushButton_2->setText(QApplication::translate("MyForm", "Canviar Model", 0));
        pushButton_4->setText(QApplication::translate("MyForm", "Canviar Parella", 0));
        pushButton_5->setText(QApplication::translate("MyForm", "Reset View", 0));
        pushButton_3->setText(QApplication::translate("MyForm", "Reset FOV", 0));
        pushButton->setText(QApplication::translate("MyForm", "&Sortir", 0));
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
