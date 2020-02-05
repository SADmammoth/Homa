/********************************************************************************
** Form generated from reading UI file 'fullcard.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FULLCARD_H
#define UI_FULLCARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Card
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *name;
    QLabel *manufac;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QFrame *color;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QWidget *componentwidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *no_comp;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_2;
    QLabel *picture;
    QSpacerItem *horizontalSpacer_9;
    QWidget *widget_5;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLabel *amount;
    QLabel *footage;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_7;
    QWidget *widget2;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *date;
    QLabel *label_4;
    QLabel *store;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget3;
    QGridLayout *gridLayout_4;
    QLabel *text;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *change;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *del;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *back;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_8;

    void setupUi(QMainWindow *Card)
    {
        if (Card->objectName().isEmpty())
            Card->setObjectName(QStringLiteral("Card"));
        Card->resize(3801, 814);
        Card->setToolButtonStyle(Qt::ToolButtonIconOnly);
        centralWidget = new QWidget(Card);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setAutoFillBackground(true);
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(62, 62, 62, -1);
        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget1->sizePolicy().hasHeightForWidth());
        widget1->setSizePolicy(sizePolicy);
        widget1->setMinimumSize(QSize(0, 322));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(228, 228, 228, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        widget1->setPalette(palette);
        widget1->setAutoFillBackground(true);
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(100, 0, 40, 100);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        name = new QLabel(widget1);
        name->setObjectName(QStringLiteral("name"));
        sizePolicy.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy);
        name->setMinimumSize(QSize(0, 60));
        name->setMaximumSize(QSize(16777215, 90));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        name->setPalette(palette1);
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(14);
        name->setFont(font);
        name->setAutoFillBackground(true);
        name->setStyleSheet(QStringLiteral("margin: 20px;"));

        verticalLayout->addWidget(name);

        manufac = new QLabel(widget1);
        manufac->setObjectName(QStringLiteral("manufac"));
        sizePolicy.setHeightForWidth(manufac->sizePolicy().hasHeightForWidth());
        manufac->setSizePolicy(sizePolicy);
        manufac->setMinimumSize(QSize(0, 60));
        manufac->setMaximumSize(QSize(16777215, 90));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        manufac->setPalette(palette2);
        manufac->setFont(font);
        manufac->setAutoFillBackground(true);
        manufac->setStyleSheet(QStringLiteral("margin: 20px;"));

        verticalLayout->addWidget(manufac);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        color = new QFrame(widget1);
        color->setObjectName(QStringLiteral("color"));
        color->setMinimumSize(QSize(260, 260));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        color->setPalette(palette3);
        color->setAutoFillBackground(true);
        color->setFrameShape(QFrame::StyledPanel);
        color->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(color);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(0, 30));
        label_2->setMaximumSize(QSize(16777215, 40));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(11);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        componentwidget = new QWidget(widget1);
        componentwidget->setObjectName(QStringLiteral("componentwidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(componentwidget->sizePolicy().hasHeightForWidth());
        componentwidget->setSizePolicy(sizePolicy2);
        componentwidget->setMinimumSize(QSize(2394, 0));
        componentwidget->setBaseSize(QSize(2394, 0));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        componentwidget->setPalette(palette4);
        componentwidget->setAutoFillBackground(true);
        horizontalLayout_2 = new QHBoxLayout(componentwidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        no_comp = new QLabel(componentwidget);
        no_comp->setObjectName(QStringLiteral("no_comp"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(no_comp->sizePolicy().hasHeightForWidth());
        no_comp->setSizePolicy(sizePolicy3);
        QPalette palette5;
        QBrush brush2(QColor(208, 208, 208, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        no_comp->setPalette(palette5);
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI"));
        font2.setPointSize(20);
        no_comp->setFont(font2);
        no_comp->setFrameShape(QFrame::NoFrame);
        no_comp->setScaledContents(false);
        no_comp->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(no_comp);


        verticalLayout_4->addWidget(componentwidget);

        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 30));
        label->setMaximumSize(QSize(16777215, 40));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 1, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 3, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        picture = new QLabel(widget1);
        picture->setObjectName(QStringLiteral("picture"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(picture->sizePolicy().hasHeightForWidth());
        picture->setSizePolicy(sizePolicy4);
        picture->setMinimumSize(QSize(400, 400));
        picture->setMaximumSize(QSize(400, 400));
        picture->setScaledContents(true);
        picture->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(picture, 1, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 1, 5, 1, 1);

        widget_5 = new QWidget(widget1);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        sizePolicy2.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy2);
        widget_5->setMinimumSize(QSize(300, 100));
        widget_5->setMaximumSize(QSize(300, 16777215));
        widget_5->setBaseSize(QSize(100, 0));
        gridLayout_2 = new QGridLayout(widget_5);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy5);
        label_3->setMinimumSize(QSize(0, 0));
        QFont font3;
        font3.setFamily(QStringLiteral("Segoe UI"));
        font3.setPointSize(9);
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 6, 0, 1, 3);

        amount = new QLabel(widget_5);
        amount->setObjectName(QStringLiteral("amount"));
        sizePolicy1.setHeightForWidth(amount->sizePolicy().hasHeightForWidth());
        amount->setSizePolicy(sizePolicy1);
        amount->setMinimumSize(QSize(0, 0));
        amount->setMaximumSize(QSize(16777215, 16777215));
        amount->setFont(font);
        amount->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(amount, 1, 0, 1, 3);

        footage = new QLabel(widget_5);
        footage->setObjectName(QStringLiteral("footage"));
        sizePolicy1.setHeightForWidth(footage->sizePolicy().hasHeightForWidth());
        footage->setSizePolicy(sizePolicy1);
        footage->setMinimumSize(QSize(0, 0));
        footage->setMaximumSize(QSize(16777215, 16777215));
        footage->setFont(font);
        footage->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(footage, 5, 0, 1, 3);

        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy5.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy5);
        label_5->setMinimumSize(QSize(0, 0));
        label_5->setFont(font3);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 2, 0, 1, 3);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_5, 4, 0, 1, 3);

        verticalSpacer = new QSpacerItem(0, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 7, 0, 1, 3);


        gridLayout->addWidget(widget_5, 1, 4, 1, 1);


        verticalLayout_2->addWidget(widget1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_7);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        sizePolicy.setHeightForWidth(widget2->sizePolicy().hasHeightForWidth());
        widget2->setSizePolicy(sizePolicy);
        widget2->setMinimumSize(QSize(0, 200));
        widget2->setMaximumSize(QSize(16777215, 200));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        widget2->setPalette(palette6);
        widget2->setAutoFillBackground(true);
        gridLayout_3 = new QGridLayout(widget2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        date = new QLabel(widget2);
        date->setObjectName(QStringLiteral("date"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(date->sizePolicy().hasHeightForWidth());
        date->setSizePolicy(sizePolicy6);
        date->setMinimumSize(QSize(0, 90));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush);
        date->setPalette(palette7);
        date->setFont(font);
        date->setAutoFillBackground(true);
        date->setStyleSheet(QStringLiteral("margin: 20px;"));

        gridLayout_3->addWidget(date, 0, 2, 1, 1);

        label_4 = new QLabel(widget2);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(0, 40));
        label_4->setMaximumSize(QSize(16777215, 50));
        label_4->setFont(font1);
        label_4->setAutoFillBackground(false);
        label_4->setStyleSheet(QStringLiteral("padding-left:20px;"));

        gridLayout_3->addWidget(label_4, 1, 0, 1, 1);

        store = new QLabel(widget2);
        store->setObjectName(QStringLiteral("store"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(4);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(store->sizePolicy().hasHeightForWidth());
        store->setSizePolicy(sizePolicy7);
        store->setMinimumSize(QSize(0, 90));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Base, brush);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush);
        store->setPalette(palette8);
        store->setFont(font);
        store->setAutoFillBackground(true);
        store->setStyleSheet(QStringLiteral("padding-left: 20px;"));

        gridLayout_3->addWidget(store, 0, 0, 1, 1);

        label_7 = new QLabel(widget2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(0, 40));
        label_7->setMaximumSize(QSize(16777215, 50));
        label_7->setFont(font1);
        label_7->setAutoFillBackground(false);
        label_7->setStyleSheet(QStringLiteral("padding-left:20px;"));

        gridLayout_3->addWidget(label_7, 1, 2, 1, 1);


        verticalLayout_2->addWidget(widget2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        widget3 = new QWidget(centralWidget);
        widget3->setObjectName(QStringLiteral("widget3"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Base, brush);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        widget3->setPalette(palette9);
        widget3->setAutoFillBackground(true);
        gridLayout_4 = new QGridLayout(widget3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        text = new QLabel(widget3);
        text->setObjectName(QStringLiteral("text"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Base, brush);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush);
        text->setPalette(palette10);
        text->setFont(font);
        text->setAutoFillBackground(true);
        text->setStyleSheet(QStringLiteral("padding: 20px;"));

        gridLayout_4->addWidget(text, 1, 0, 1, 1);

        label_6 = new QLabel(widget3);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(0, 40));
        label_6->setMaximumSize(QSize(16777215, 50));
        label_6->setFont(font1);
        label_6->setStyleSheet(QStringLiteral("padding-left: 20px;"));

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);


        verticalLayout_2->addWidget(widget3);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_9);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_10);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        change = new QPushButton(centralWidget);
        change->setObjectName(QStringLiteral("change"));
        sizePolicy4.setHeightForWidth(change->sizePolicy().hasHeightForWidth());
        change->setSizePolicy(sizePolicy4);
        change->setMinimumSize(QSize(900, 40));
        change->setMaximumSize(QSize(200, 200));
        change->setBaseSize(QSize(200, 200));
        QPalette palette11;
        QBrush brush4(QColor(154, 154, 154, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush5(QColor(135, 135, 135, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        change->setPalette(palette11);
        QFont font4;
        font4.setFamily(QStringLiteral("Segoe UI"));
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setUnderline(true);
        font4.setWeight(75);
        change->setFont(font4);
        change->setCursor(QCursor(Qt::PointingHandCursor));
        change->setAutoFillBackground(true);
        change->setAutoDefault(false);
        change->setFlat(true);

        horizontalLayout_5->addWidget(change);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        del = new QPushButton(centralWidget);
        del->setObjectName(QStringLiteral("del"));
        sizePolicy4.setHeightForWidth(del->sizePolicy().hasHeightForWidth());
        del->setSizePolicy(sizePolicy4);
        del->setMinimumSize(QSize(900, 40));
        del->setBaseSize(QSize(0, 200));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        del->setPalette(palette12);
        del->setFont(font4);
        del->setAutoFillBackground(true);
        del->setAutoDefault(true);
        del->setFlat(true);

        horizontalLayout_5->addWidget(del);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        back = new QPushButton(centralWidget);
        back->setObjectName(QStringLiteral("back"));
        sizePolicy4.setHeightForWidth(back->sizePolicy().hasHeightForWidth());
        back->setSizePolicy(sizePolicy4);
        back->setMinimumSize(QSize(900, 40));
        back->setBaseSize(QSize(0, 200));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        back->setPalette(palette13);
        back->setFont(font4);
        back->setAutoFillBackground(true);
        back->setAutoDefault(true);
        back->setFlat(true);

        horizontalLayout_5->addWidget(back);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalSpacer_8 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_8);

        Card->setCentralWidget(centralWidget);

        retranslateUi(Card);

        change->setDefault(false);
        del->setDefault(true);
        back->setDefault(true);


        QMetaObject::connectSlotsByName(Card);
    } // setupUi

    void retranslateUi(QMainWindow *Card)
    {
        Card->setWindowTitle(QApplication::translate("Card", "MainWindow", nullptr));
        name->setText(QApplication::translate("Card", "TextLabel", nullptr));
        manufac->setText(QApplication::translate("Card", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("Card", "\320\246\320\262\320\265\321\202\320\260", nullptr));
        no_comp->setText(QApplication::translate("Card", "\320\232\320\276\320\274\320\277\320\276\320\275\320\265\320\275\321\202\321\213 \320\275\320\265 \320\261\321\213\320\273\320\270 \321\203\320\272\320\260\320\267\320\260\320\275\321\213", nullptr));
        label->setText(QApplication::translate("Card", "\320\232\320\276\320\274\320\277\320\276\320\275\320\265\320\275\321\202\321\213", nullptr));
        picture->setText(QApplication::translate("Card", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("Card", "\320\234\320\265\321\202\321\200\320\260\320\266", nullptr));
        amount->setText(QApplication::translate("Card", "\320\237\321\203\321\201\321\202\320\276", nullptr));
        footage->setText(QApplication::translate("Card", "\320\237\321\203\321\201\321\202\320\276", nullptr));
        label_5->setText(QApplication::translate("Card", "\320\232\320\276\320\273-\320\262\320\276, \320\263", nullptr));
        date->setText(QApplication::translate("Card", "\320\237\321\203\321\201\321\202\320\276", nullptr));
        label_4->setText(QApplication::translate("Card", "\320\234\320\260\320\263\320\260\320\267\320\270\320\275", nullptr));
        store->setText(QApplication::translate("Card", "\320\237\321\203\321\201\321\202\320\276", nullptr));
        label_7->setText(QApplication::translate("Card", "\320\224\320\260\321\202\320\260", nullptr));
        text->setText(QApplication::translate("Card", "\320\237\321\203\321\201\321\202\320\276", nullptr));
        label_6->setText(QApplication::translate("Card", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        change->setText(QApplication::translate("Card", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        del->setText(QApplication::translate("Card", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        back->setText(QApplication::translate("Card", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Card: public Ui_Card {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FULLCARD_H
