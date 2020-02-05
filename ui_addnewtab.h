/********************************************************************************
** Form generated from reading UI file 'addnewtab.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWTAB_H
#define UI_ADDNEWTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddTab
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *header;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *nameLine;
    QLineEdit *destribLine;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QPushButton *color;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QWidget *componentwidget;
    QHBoxLayout *comp_wid_lay;
    QPushButton *addnewcomp;
    QPushButton *AddButton;
    QLabel *label;
    QWidget *picturewidget;
    QPushButton *open;
    QWidget *widget_5;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLineEdit *devider;
    QLabel *label_3;
    QLineEdit *line1;
    QLineEdit *line2;
    QSpacerItem *verticalSpacer_10;
    QLineEdit *amount;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_7;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *store;
    QSpacerItem *horizontalSpacer_3;
    QDateEdit *dateEdit;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *Desc;
    QSpacerItem *verticalSpacer_11;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *menu;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *delete_button;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *next;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_8;

    void setupUi(QMainWindow *AddTab)
    {
        if (AddTab->objectName().isEmpty())
            AddTab->setObjectName(QStringLiteral("AddTab"));
        AddTab->resize(3801, 916);
        AddTab->setToolButtonStyle(Qt::ToolButtonIconOnly);
        centralWidget = new QWidget(AddTab);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setAutoFillBackground(true);
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        header = new QLabel(centralWidget);
        header->setObjectName(QStringLiteral("header"));
        header->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        header->setFont(font);
        header->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(header);

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
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nameLine = new QLineEdit(widget1);
        nameLine->setObjectName(QStringLiteral("nameLine"));
        nameLine->setMinimumSize(QSize(1500, 90));
        nameLine->setMaximumSize(QSize(1500, 90));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(14);
        nameLine->setFont(font1);
        nameLine->setAutoFillBackground(true);
        nameLine->setStyleSheet(QStringLiteral("padding-left: 60px;"));
        nameLine->setMaxLength(12);
        nameLine->setFrame(false);

        verticalLayout->addWidget(nameLine);

        destribLine = new QLineEdit(widget1);
        destribLine->setObjectName(QStringLiteral("destribLine"));
        destribLine->setMinimumSize(QSize(1500, 90));
        destribLine->setMaximumSize(QSize(1500, 90));
        destribLine->setFont(font1);
        destribLine->setAutoFillBackground(true);
        destribLine->setStyleSheet(QStringLiteral("padding-left: 60px;"));
        destribLine->setMaxLength(12);
        destribLine->setFrame(false);

        verticalLayout->addWidget(destribLine);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        color = new QPushButton(widget1);
        color->setObjectName(QStringLiteral("color"));
        color->setMinimumSize(QSize(260, 260));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        color->setPalette(palette1);
        color->setAutoFillBackground(true);
        color->setFlat(true);

        verticalLayout_3->addWidget(color);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI"));
        font2.setPointSize(10);
        label_2->setFont(font2);
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
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        componentwidget->setPalette(palette2);
        componentwidget->setAutoFillBackground(true);
        comp_wid_lay = new QHBoxLayout(componentwidget);
        comp_wid_lay->setObjectName(QStringLiteral("comp_wid_lay"));
        addnewcomp = new QPushButton(componentwidget);
        addnewcomp->setObjectName(QStringLiteral("addnewcomp"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(addnewcomp->sizePolicy().hasHeightForWidth());
        addnewcomp->setSizePolicy(sizePolicy3);
        QPalette palette3;
        QBrush brush2(QColor(208, 208, 208, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        addnewcomp->setPalette(palette3);
        QFont font3;
        font3.setFamily(QStringLiteral("Segoe UI"));
        font3.setPointSize(20);
        addnewcomp->setFont(font3);
        addnewcomp->setFlat(true);

        comp_wid_lay->addWidget(addnewcomp);

        AddButton = new QPushButton(componentwidget);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(AddButton->sizePolicy().hasHeightForWidth());
        AddButton->setSizePolicy(sizePolicy4);
        AddButton->setMinimumSize(QSize(400, 200));
        AddButton->setFont(font1);
        AddButton->setAutoFillBackground(true);
        AddButton->setFlat(true);

        comp_wid_lay->addWidget(AddButton);


        verticalLayout_4->addWidget(componentwidget);

        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 1, 2, 1, 1);

        picturewidget = new QWidget(widget1);
        picturewidget->setObjectName(QStringLiteral("picturewidget"));
        sizePolicy3.setHeightForWidth(picturewidget->sizePolicy().hasHeightForWidth());
        picturewidget->setSizePolicy(sizePolicy3);
        picturewidget->setMinimumSize(QSize(500, 500));
        picturewidget->setMaximumSize(QSize(600, 600));
        QPalette palette4;
        QBrush brush4(QColor(240, 240, 240, 0));
        brush4.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        picturewidget->setPalette(palette4);
        open = new QPushButton(picturewidget);
        open->setObjectName(QStringLiteral("open"));
        open->setGeometry(QRect(10, 10, 80, 18));
        sizePolicy3.setHeightForWidth(open->sizePolicy().hasHeightForWidth());
        open->setSizePolicy(sizePolicy3);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush5(QColor(228, 228, 228, 0));
        brush5.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        open->setPalette(palette5);
        open->setAutoFillBackground(true);
        open->setAutoDefault(true);
        open->setFlat(true);

        gridLayout->addWidget(picturewidget, 1, 0, 1, 1);

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
        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font4;
        font4.setFamily(QStringLiteral("Segoe UI"));
        label_4->setFont(font4);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 2, 0, 1, 3);

        devider = new QLineEdit(widget_5);
        devider->setObjectName(QStringLiteral("devider"));
        sizePolicy4.setHeightForWidth(devider->sizePolicy().hasHeightForWidth());
        devider->setSizePolicy(sizePolicy4);
        devider->setMinimumSize(QSize(20, 40));
        devider->setMaximumSize(QSize(20, 50));
        devider->setBaseSize(QSize(20, 50));
        QFont font5;
        font5.setFamily(QStringLiteral("Times New Roman"));
        font5.setPointSize(14);
        devider->setFont(font5);
        devider->setCursor(QCursor(Qt::ArrowCursor));
        devider->setAutoFillBackground(false);
        devider->setStyleSheet(QStringLiteral("border: 0px;"));
        devider->setInputMethodHints(Qt::ImhNone);
        devider->setMaxLength(1);
        devider->setFrame(true);
        devider->setEchoMode(QLineEdit::Normal);
        devider->setAlignment(Qt::AlignCenter);
        devider->setReadOnly(true);

        gridLayout_2->addWidget(devider, 5, 1, 1, 1);

        label_3 = new QLabel(widget_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font4);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 6, 0, 1, 3);

        line1 = new QLineEdit(widget_5);
        line1->setObjectName(QStringLiteral("line1"));
        sizePolicy4.setHeightForWidth(line1->sizePolicy().hasHeightForWidth());
        line1->setSizePolicy(sizePolicy4);
        line1->setMinimumSize(QSize(0, 40));
        line1->setMaximumSize(QSize(16777215, 50));
        line1->setBaseSize(QSize(40, 50));
        line1->setFont(font1);
        line1->setStyleSheet(QStringLiteral("border: 0px;"));
        line1->setMaxLength(32767);
        line1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(line1, 5, 0, 1, 1);

        line2 = new QLineEdit(widget_5);
        line2->setObjectName(QStringLiteral("line2"));
        sizePolicy4.setHeightForWidth(line2->sizePolicy().hasHeightForWidth());
        line2->setSizePolicy(sizePolicy4);
        line2->setMinimumSize(QSize(0, 40));
        line2->setMaximumSize(QSize(16777215, 50));
        line2->setBaseSize(QSize(40, 50));
        line2->setFont(font1);
        line2->setStyleSheet(QStringLiteral("border: 0px;"));
        line2->setMaxLength(32767);
        line2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(line2, 5, 2, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_10, 3, 0, 1, 1);

        amount = new QLineEdit(widget_5);
        amount->setObjectName(QStringLiteral("amount"));
        sizePolicy1.setHeightForWidth(amount->sizePolicy().hasHeightForWidth());
        amount->setSizePolicy(sizePolicy1);
        amount->setMinimumSize(QSize(0, 40));
        amount->setMaximumSize(QSize(16777215, 50));
        amount->setSizeIncrement(QSize(0, 50));
        amount->setBaseSize(QSize(0, 0));
        amount->setFont(font1);
        amount->setStyleSheet(QStringLiteral("border: 0;"));
        amount->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(amount, 1, 0, 1, 3);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_5, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(0, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 7, 3, 1, 1);


        gridLayout->addWidget(widget_5, 1, 4, 1, 1);


        verticalLayout_2->addWidget(widget1);

        verticalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_7);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        sizePolicy.setHeightForWidth(widget2->sizePolicy().hasHeightForWidth());
        widget2->setSizePolicy(sizePolicy);
        widget2->setMinimumSize(QSize(0, 150));
        widget2->setMaximumSize(QSize(16777215, 150));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        widget2->setPalette(palette6);
        widget2->setAutoFillBackground(true);
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        store = new QLineEdit(widget2);
        store->setObjectName(QStringLiteral("store"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(4);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(store->sizePolicy().hasHeightForWidth());
        store->setSizePolicy(sizePolicy5);
        store->setFont(font1);
        store->setStyleSheet(QStringLiteral("padding-left: 20px;border: 0px;"));

        horizontalLayout_3->addWidget(store);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        dateEdit = new QDateEdit(widget2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy6);
        dateEdit->setFont(font1);
        dateEdit->setStyleSheet(QStringLiteral("padding-left: 20px; border: 0px;"));
        dateEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateEdit->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        dateEdit->setCurrentSection(QDateTimeEdit::DaySection);
        dateEdit->setCalendarPopup(true);
        dateEdit->setCurrentSectionIndex(0);

        horizontalLayout_3->addWidget(dateEdit);


        verticalLayout_2->addWidget(widget2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        widget3 = new QWidget(centralWidget);
        widget3->setObjectName(QStringLiteral("widget3"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(widget3->sizePolicy().hasHeightForWidth());
        widget3->setSizePolicy(sizePolicy7);
        widget3->setMinimumSize(QSize(0, 0));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        widget3->setPalette(palette7);
        widget3->setAutoFillBackground(true);
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Desc = new QTextEdit(widget3);
        Desc->setObjectName(QStringLiteral("Desc"));
        QPalette palette8;
        QBrush brush6(QColor(135, 135, 135, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        Desc->setPalette(palette8);
        Desc->setFont(font1);
        Desc->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        Desc->setStyleSheet(QStringLiteral("border: 0px; indent 20;"));
        Desc->setLineWrapColumnOrWidth(0);

        horizontalLayout_4->addWidget(Desc);


        verticalLayout_2->addWidget(widget3);

        verticalSpacer_11 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_11);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        menu = new QPushButton(centralWidget);
        menu->setObjectName(QStringLiteral("menu"));
        sizePolicy4.setHeightForWidth(menu->sizePolicy().hasHeightForWidth());
        menu->setSizePolicy(sizePolicy4);
        menu->setMinimumSize(QSize(900, 40));
        menu->setMaximumSize(QSize(200, 200));
        menu->setBaseSize(QSize(200, 200));
        QPalette palette9;
        QBrush brush7(QColor(154, 154, 154, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        menu->setPalette(palette9);
        QFont font6;
        font6.setFamily(QStringLiteral("Segoe UI"));
        font6.setPointSize(14);
        font6.setBold(true);
        font6.setUnderline(true);
        font6.setWeight(75);
        menu->setFont(font6);
        menu->setCursor(QCursor(Qt::PointingHandCursor));
        menu->setAutoFillBackground(true);
        menu->setAutoDefault(false);
        menu->setFlat(true);

        horizontalLayout_5->addWidget(menu);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        delete_button = new QPushButton(centralWidget);
        delete_button->setObjectName(QStringLiteral("delete_button"));
        sizePolicy4.setHeightForWidth(delete_button->sizePolicy().hasHeightForWidth());
        delete_button->setSizePolicy(sizePolicy4);
        delete_button->setMinimumSize(QSize(900, 40));
        delete_button->setBaseSize(QSize(0, 200));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        delete_button->setPalette(palette10);
        delete_button->setFont(font6);
        delete_button->setAutoFillBackground(true);
        delete_button->setAutoDefault(true);
        delete_button->setFlat(true);

        horizontalLayout_5->addWidget(delete_button);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        next = new QPushButton(centralWidget);
        next->setObjectName(QStringLiteral("next"));
        sizePolicy4.setHeightForWidth(next->sizePolicy().hasHeightForWidth());
        next->setSizePolicy(sizePolicy4);
        next->setMinimumSize(QSize(900, 40));
        next->setMaximumSize(QSize(200, 200));
        next->setBaseSize(QSize(200, 200));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        next->setPalette(palette11);
        next->setFont(font6);
        next->setCursor(QCursor(Qt::PointingHandCursor));
        next->setAutoFillBackground(true);
        next->setAutoDefault(false);
        next->setFlat(true);

        horizontalLayout_5->addWidget(next);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalSpacer_8 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_8);

        AddTab->setCentralWidget(centralWidget);

        retranslateUi(AddTab);

        addnewcomp->setDefault(true);
        open->setDefault(true);
        menu->setDefault(false);
        delete_button->setDefault(true);
        next->setDefault(false);


        QMetaObject::connectSlotsByName(AddTab);
    } // setupUi

    void retranslateUi(QMainWindow *AddTab)
    {
        AddTab->setWindowTitle(QApplication::translate("AddTab", "MainWindow", nullptr));
        header->setText(QApplication::translate("AddTab", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\275\320\276\320\262\320\276\320\263\320\276 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260", nullptr));
        nameLine->setPlaceholderText(QApplication::translate("AddTab", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265*", nullptr));
        destribLine->setPlaceholderText(QApplication::translate("AddTab", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214*", nullptr));
        color->setText(QString());
        label_2->setText(QApplication::translate("AddTab", "\320\246\320\262\320\265\321\202\320\260", nullptr));
        addnewcomp->setText(QApplication::translate("AddTab", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\276\320\274\320\277\320\276\320\275\320\265\320\275\321\202", nullptr));
        AddButton->setText(QApplication::translate("AddTab", "\320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label->setText(QApplication::translate("AddTab", "\320\232\320\276\320\274\320\277\320\276\320\275\320\265\320\275\321\202\321\213", nullptr));
        open->setText(QString());
        label_4->setText(QApplication::translate("AddTab", "\320\232\320\276\320\273-\320\262\320\276, \320\263", nullptr));
        devider->setText(QApplication::translate("AddTab", "/", nullptr));
        devider->setPlaceholderText(QString());
        label_3->setText(QApplication::translate("AddTab", "\320\234\320\265\321\202\321\200\320\260\320\266", nullptr));
        line1->setInputMask(QString());
        line2->setInputMask(QString());
        store->setPlaceholderText(QApplication::translate("AddTab", "\320\234\320\260\320\263\320\260\320\267\320\270\320\275", nullptr));
        Desc->setDocumentTitle(QApplication::translate("AddTab", "Description", nullptr));
        Desc->setPlaceholderText(QApplication::translate("AddTab", "\320\237\321\200\320\270\320\274\320\265\321\207\320\260\320\275\320\270\321\217", nullptr));
        menu->setText(QApplication::translate("AddTab", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270 \320\262\321\213\320\271\321\202\320\270", nullptr));
        delete_button->setText(QApplication::translate("AddTab", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \320\270 \320\262\321\213\320\271\321\202\320\270", nullptr));
        next->setText(QApplication::translate("AddTab", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\265\321\211\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTab: public Ui_AddTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWTAB_H
