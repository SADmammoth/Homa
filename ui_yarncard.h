/********************************************************************************
** Form generated from reading UI file 'yarncard.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YARNCARD_H
#define UI_YARNCARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Card
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *picture;
    QGridLayout *gridLayout;
    QWidget *compon;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_5;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_6;
    QLabel *footage;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QLabel *amount;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_5;
    QLabel *name;
    QLabel *manufac;
    QFrame *color;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Card)
    {
        if (Card->objectName().isEmpty())
            Card->setObjectName(QStringLiteral("Card"));
        Card->resize(931, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(6);
        sizePolicy.setVerticalStretch(5);
        sizePolicy.setHeightForWidth(Card->sizePolicy().hasHeightForWidth());
        Card->setSizePolicy(sizePolicy);
        Card->setMinimumSize(QSize(0, 400));
        Card->setMaximumSize(QSize(1000, 400));
        Card->setSizeIncrement(QSize(6, 5));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Card->setPalette(palette);
        Card->setAutoFillBackground(true);
        Card->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(Card);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(Card);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setStyleSheet(QStringLiteral("padding: 10px 0 10px 20px;"));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/Group 108.png")));
        label_2->setScaledContents(false);

        horizontalLayout->addWidget(label_2);

        picture = new QLabel(Card);
        picture->setObjectName(QStringLiteral("picture"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(picture->sizePolicy().hasHeightForWidth());
        picture->setSizePolicy(sizePolicy2);
        picture->setMinimumSize(QSize(400, 400));
        picture->setMaximumSize(QSize(400, 400));
        picture->setAutoFillBackground(true);
        picture->setScaledContents(true);
        picture->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(picture);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        compon = new QWidget(Card);
        compon->setObjectName(QStringLiteral("compon"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(7);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(compon->sizePolicy().hasHeightForWidth());
        compon->setSizePolicy(sizePolicy3);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(242, 242, 242, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        compon->setPalette(palette1);
        compon->setAutoFillBackground(false);
        compon->setStyleSheet(QStringLiteral("padding: 100px;"));

        gridLayout->addWidget(compon, 4, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 6, 1);

        widget_5 = new QWidget(Card);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(2);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy4);
        widget_5->setMinimumSize(QSize(0, 100));
        widget_5->setMaximumSize(QSize(1000, 16777215));
        widget_5->setBaseSize(QSize(100, 0));
        gridLayout_2 = new QGridLayout(widget_5);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_6 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_6, 8, 0, 1, 1);

        footage = new QLabel(widget_5);
        footage->setObjectName(QStringLiteral("footage"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(footage->sizePolicy().hasHeightForWidth());
        footage->setSizePolicy(sizePolicy5);
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(10);
        footage->setFont(font);
        footage->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(footage, 5, 0, 2, 1);

        verticalSpacer_4 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_4, 1, 0, 1, 2);

        label_3 = new QLabel(widget_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(8);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 7, 0, 1, 1);

        verticalSpacer = new QSpacerItem(0, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 3, 1, 1);

        amount = new QLabel(widget_5);
        amount->setObjectName(QStringLiteral("amount"));
        amount->setFont(font);
        amount->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(amount, 2, 0, 1, 1);

        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);


        gridLayout->addWidget(widget_5, 0, 3, 6, 1);

        verticalSpacer_5 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 5, 0, 1, 2);

        name = new QLabel(Card);
        name->setObjectName(QStringLiteral("name"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(7);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy6);
        name->setMinimumSize(QSize(300, 50));
        name->setMaximumSize(QSize(16777215, 20));
        name->setSizeIncrement(QSize(0, 0));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI"));
        font2.setPointSize(12);
        name->setFont(font2);
        name->setStyleSheet(QStringLiteral("padding-left: 20px;"));

        gridLayout->addWidget(name, 1, 0, 1, 2);

        manufac = new QLabel(Card);
        manufac->setObjectName(QStringLiteral("manufac"));
        sizePolicy6.setHeightForWidth(manufac->sizePolicy().hasHeightForWidth());
        manufac->setSizePolicy(sizePolicy6);
        manufac->setMinimumSize(QSize(300, 50));
        manufac->setMaximumSize(QSize(16777215, 20));
        manufac->setSizeIncrement(QSize(0, 0));
        QPalette palette2;
        QBrush brush2(QColor(112, 112, 112, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(174, 174, 174, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        manufac->setPalette(palette2);
        manufac->setFont(font2);
        manufac->setStyleSheet(QStringLiteral("padding-left: 20px;"));

        gridLayout->addWidget(manufac, 2, 0, 1, 2);

        color = new QFrame(Card);
        color->setObjectName(QStringLiteral("color"));
        color->setMinimumSize(QSize(0, 20));
        color->setAutoFillBackground(true);
        color->setFrameShape(QFrame::StyledPanel);
        color->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(color, 6, 0, 1, 5);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 3, 0, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(100, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 6, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(Card);

        QMetaObject::connectSlotsByName(Card);
    } // setupUi

    void retranslateUi(QWidget *Card)
    {
        Card->setWindowTitle(QApplication::translate("Card", "Form", nullptr));
        label_2->setText(QString());
        picture->setText(QString());
        footage->setText(QApplication::translate("Card", "\320\277\321\203\321\201\321\202\320\276", nullptr));
        label_3->setText(QApplication::translate("Card", "\320\234\320\265\321\202\321\200\320\260\320\266", nullptr));
        amount->setText(QApplication::translate("Card", "\320\277\321\203\321\201\321\202\320\276", nullptr));
        label_4->setText(QApplication::translate("Card", "\320\232\320\276\320\273-\320\262\320\276, \320\263", nullptr));
        name->setText(QApplication::translate("Card", "TextLabel", nullptr));
        manufac->setText(QApplication::translate("Card", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Card: public Ui_Card {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YARNCARD_H
