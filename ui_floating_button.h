/********************************************************************************
** Form generated from reading UI file 'floating_button.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOATING_BUTTON_H
#define UI_FLOATING_BUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_floating_button
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QSpacerItem *verticalSpacer_2;
    QPushButton *name;
    QSpacerItem *verticalSpacer_3;
    QPushButton *manuf;
    QSpacerItem *verticalSpacer_4;
    QPushButton *date;
    QSpacerItem *verticalSpacer_5;
    QPushButton *count;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *floating_button)
    {
        if (floating_button->objectName().isEmpty())
            floating_button->setObjectName(QStringLiteral("floating_button"));
        floating_button->setEnabled(true);
        floating_button->resize(320, 380);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(floating_button->sizePolicy().hasHeightForWidth());
        floating_button->setSizePolicy(sizePolicy);
        floating_button->setAutoFillBackground(true);
        widget = new QWidget(floating_button);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setEnabled(true);
        widget->setGeometry(QRect(0, 0, 320, 380));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        widget->setPalette(palette);
        widget->setAutoFillBackground(true);
        widget->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(9);
        textBrowser->setFont(font);
        textBrowser->setAutoFillBackground(false);
        textBrowser->setStyleSheet(QStringLiteral("border:0;"));
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setAcceptRichText(true);
        textBrowser->setOpenLinks(false);

        verticalLayout->addWidget(textBrowser);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        name = new QPushButton(widget);
        name->setObjectName(QStringLiteral("name"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(11);
        name->setFont(font1);
        name->setAutoFillBackground(true);
        name->setFlat(true);

        verticalLayout->addWidget(name);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        manuf = new QPushButton(widget);
        manuf->setObjectName(QStringLiteral("manuf"));
        manuf->setFont(font1);
        manuf->setAutoFillBackground(true);
        manuf->setFlat(true);

        verticalLayout->addWidget(manuf);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        date = new QPushButton(widget);
        date->setObjectName(QStringLiteral("date"));
        date->setFont(font1);
        date->setAutoFillBackground(true);
        date->setFlat(true);

        verticalLayout->addWidget(date);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        count = new QPushButton(widget);
        count->setObjectName(QStringLiteral("count"));
        count->setFont(font1);
        count->setAutoFillBackground(true);
        count->setFlat(true);

        verticalLayout->addWidget(count);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(floating_button);

        QMetaObject::connectSlotsByName(floating_button);
    } // setupUi

    void retranslateUi(QWidget *floating_button)
    {
        floating_button->setWindowTitle(QApplication::translate("floating_button", "Form", nullptr));
        textBrowser->setHtml(QApplication::translate("floating_button", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:96;\">\320\237\320\276\321\200\321\217\320\264\320\276\320\272 \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217</span></p></body></html>", nullptr));
        name->setText(QApplication::translate("floating_button", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        manuf->setText(QApplication::translate("floating_button", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\320\265\320\273\321\214", nullptr));
        date->setText(QApplication::translate("floating_button", "\320\224\320\260\321\202\320\260 \320\277\320\276\320\272\321\203\320\277\320\272\320\270", nullptr));
        count->setText(QApplication::translate("floating_button", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class floating_button: public Ui_floating_button {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOATING_BUTTON_H
