/********************************************************************************
** Form generated from reading UI file 'color_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOR_DIALOG_H
#define UI_COLOR_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_color_dialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *green;
    QPushButton *blue;
    QPushButton *yellow;
    QPushButton *red;
    QHBoxLayout *horizontalLayout;
    QPushButton *black;

    void setupUi(QWidget *color_dialog)
    {
        if (color_dialog->objectName().isEmpty())
            color_dialog->setObjectName(QStringLiteral("color_dialog"));
        color_dialog->resize(359, 221);
        color_dialog->setMinimumSize(QSize(0, 0));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        color_dialog->setPalette(palette);
        color_dialog->setAutoFillBackground(true);
        gridLayout = new QGridLayout(color_dialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        green = new QPushButton(color_dialog);
        green->setObjectName(QStringLiteral("green"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(green->sizePolicy().hasHeightForWidth());
        green->setSizePolicy(sizePolicy);
        green->setMinimumSize(QSize(100, 100));
        QPalette palette1;
        QBrush brush1(QColor(0, 255, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        green->setPalette(palette1);
        green->setAutoFillBackground(true);
        green->setStyleSheet(QStringLiteral(""));
        green->setCheckable(false);
        green->setAutoDefault(false);
        green->setFlat(true);

        gridLayout->addWidget(green, 0, 0, 1, 1);

        blue = new QPushButton(color_dialog);
        blue->setObjectName(QStringLiteral("blue"));
        sizePolicy.setHeightForWidth(blue->sizePolicy().hasHeightForWidth());
        blue->setSizePolicy(sizePolicy);
        blue->setMinimumSize(QSize(100, 100));
        QPalette palette2;
        QBrush brush2(QColor(0, 0, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        blue->setPalette(palette2);
        blue->setAutoFillBackground(true);
        blue->setStyleSheet(QStringLiteral(""));
        blue->setCheckable(false);
        blue->setAutoDefault(false);
        blue->setFlat(true);

        gridLayout->addWidget(blue, 1, 1, 1, 1);

        yellow = new QPushButton(color_dialog);
        yellow->setObjectName(QStringLiteral("yellow"));
        sizePolicy.setHeightForWidth(yellow->sizePolicy().hasHeightForWidth());
        yellow->setSizePolicy(sizePolicy);
        yellow->setMinimumSize(QSize(100, 100));
        QPalette palette3;
        QBrush brush3(QColor(255, 255, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        yellow->setPalette(palette3);
        yellow->setAutoFillBackground(true);
        yellow->setStyleSheet(QStringLiteral(""));
        yellow->setCheckable(false);
        yellow->setAutoDefault(false);
        yellow->setFlat(true);

        gridLayout->addWidget(yellow, 1, 0, 1, 1);

        red = new QPushButton(color_dialog);
        red->setObjectName(QStringLiteral("red"));
        sizePolicy.setHeightForWidth(red->sizePolicy().hasHeightForWidth());
        red->setSizePolicy(sizePolicy);
        red->setMinimumSize(QSize(100, 100));
        QPalette palette4;
        QBrush brush4(QColor(255, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        red->setPalette(palette4);
        red->setAutoFillBackground(true);
        red->setStyleSheet(QStringLiteral(""));
        red->setCheckable(false);
        red->setAutoDefault(false);
        red->setFlat(true);

        gridLayout->addWidget(red, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        black = new QPushButton(color_dialog);
        black->setObjectName(QStringLiteral("black"));
        sizePolicy.setHeightForWidth(black->sizePolicy().hasHeightForWidth());
        black->setSizePolicy(sizePolicy);
        black->setMinimumSize(QSize(100, 100));
        QPalette palette5;
        QBrush brush5(QColor(145, 145, 145, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        black->setPalette(palette5);
        black->setAutoFillBackground(true);
        black->setStyleSheet(QStringLiteral(""));
        black->setCheckable(false);
        black->setAutoDefault(false);
        black->setFlat(true);

        horizontalLayout->addWidget(black);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);


        retranslateUi(color_dialog);

        green->setDefault(false);
        blue->setDefault(false);
        yellow->setDefault(false);
        red->setDefault(false);
        black->setDefault(false);


        QMetaObject::connectSlotsByName(color_dialog);
    } // setupUi

    void retranslateUi(QWidget *color_dialog)
    {
        color_dialog->setWindowTitle(QApplication::translate("color_dialog", "Form", nullptr));
        green->setText(QString());
        blue->setText(QString());
        yellow->setText(QString());
        red->setText(QString());
        black->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class color_dialog: public Ui_color_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOR_DIALOG_H
