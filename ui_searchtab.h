/********************************************************************************
** Form generated from reading UI file 'searchtab.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHTAB_H
#define UI_SEARCHTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchTab
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *back;
    QPushButton *range;
    QSpacerItem *verticalSpacer_2;
    QPushButton *find;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QWidget *widget_5;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *line2;
    QLineEdit *devider;
    QLineEdit *line1;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *amount;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_2;
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
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_5;

    void setupUi(QMainWindow *SearchTab)
    {
        if (SearchTab->objectName().isEmpty())
            SearchTab->setObjectName(QStringLiteral("SearchTab"));
        SearchTab->resize(3166, 600);
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
        SearchTab->setPalette(palette);
        SearchTab->setAutoFillBackground(true);
        centralwidget = new QWidget(SearchTab);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush2(QColor(240, 240, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        centralwidget->setPalette(palette1);
        centralwidget->setAutoFillBackground(false);
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_8, 1, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_7, 5, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 6, 0, 1, 1);

        back = new QPushButton(centralwidget);
        back->setObjectName(QStringLiteral("back"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(back->sizePolicy().hasHeightForWidth());
        back->setSizePolicy(sizePolicy1);
        back->setMinimumSize(QSize(200, 0));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush3(QColor(135, 135, 135, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        back->setPalette(palette2);
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(14);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        back->setFont(font);
        back->setAutoFillBackground(true);
        back->setFlat(true);

        gridLayout_3->addWidget(back, 6, 1, 1, 1);

        range = new QPushButton(centralwidget);
        range->setObjectName(QStringLiteral("range"));
        sizePolicy1.setHeightForWidth(range->sizePolicy().hasHeightForWidth());
        range->setSizePolicy(sizePolicy1);
        range->setMinimumSize(QSize(200, 0));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        range->setPalette(palette3);
        range->setFont(font);
        range->setAutoFillBackground(true);
        range->setFlat(true);

        gridLayout_3->addWidget(range, 6, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_2, 7, 2, 1, 1);

        find = new QPushButton(centralwidget);
        find->setObjectName(QStringLiteral("find"));
        sizePolicy1.setHeightForWidth(find->sizePolicy().hasHeightForWidth());
        find->setSizePolicy(sizePolicy1);
        find->setMinimumSize(QSize(200, 0));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        find->setPalette(palette4);
        find->setFont(font);
        find->setAutoFillBackground(true);
        find->setFlat(true);

        gridLayout_3->addWidget(find, 6, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 6, 4, 1, 1);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget1->sizePolicy().hasHeightForWidth());
        widget1->setSizePolicy(sizePolicy2);
        widget1->setMinimumSize(QSize(0, 400));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        widget1->setPalette(palette5);
        widget1->setAutoFillBackground(true);
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(100, 0, 40, 100);
        widget_5 = new QWidget(widget1);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy3);
        widget_5->setMinimumSize(QSize(300, 100));
        widget_5->setMaximumSize(QSize(300, 16777215));
        widget_5->setBaseSize(QSize(100, 0));
        gridLayout_2 = new QGridLayout(widget_5);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 6, 0, 1, 3);

        line2 = new QLineEdit(widget_5);
        line2->setObjectName(QStringLiteral("line2"));
        sizePolicy1.setHeightForWidth(line2->sizePolicy().hasHeightForWidth());
        line2->setSizePolicy(sizePolicy1);
        line2->setMinimumSize(QSize(0, 40));
        line2->setMaximumSize(QSize(16777215, 50));
        line2->setBaseSize(QSize(40, 50));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI"));
        font2.setPointSize(14);
        line2->setFont(font2);
        line2->setStyleSheet(QStringLiteral("border: 0px;"));
        line2->setMaxLength(32767);
        line2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(line2, 5, 2, 1, 1);

        devider = new QLineEdit(widget_5);
        devider->setObjectName(QStringLiteral("devider"));
        sizePolicy1.setHeightForWidth(devider->sizePolicy().hasHeightForWidth());
        devider->setSizePolicy(sizePolicy1);
        devider->setMinimumSize(QSize(20, 40));
        devider->setMaximumSize(QSize(20, 50));
        devider->setBaseSize(QSize(20, 50));
        QFont font3;
        font3.setFamily(QStringLiteral("Times New Roman"));
        font3.setPointSize(14);
        devider->setFont(font3);
        devider->setCursor(QCursor(Qt::ArrowCursor));
        devider->setAutoFillBackground(false);
        devider->setStyleSheet(QStringLiteral("border: 0px;"));
        devider->setInputMethodHints(Qt::ImhNone);
        devider->setMaxLength(1);
        devider->setFrame(true);
        devider->setEchoMode(QLineEdit::Normal);
        devider->setAlignment(Qt::AlignCenter);
        devider->setReadOnly(false);

        gridLayout_2->addWidget(devider, 5, 1, 1, 1);

        line1 = new QLineEdit(widget_5);
        line1->setObjectName(QStringLiteral("line1"));
        sizePolicy1.setHeightForWidth(line1->sizePolicy().hasHeightForWidth());
        line1->setSizePolicy(sizePolicy1);
        line1->setMinimumSize(QSize(0, 40));
        line1->setMaximumSize(QSize(16777215, 50));
        line1->setBaseSize(QSize(40, 50));
        line1->setFont(font2);
        line1->setStyleSheet(QStringLiteral("border: 0px;"));
        line1->setMaxLength(32767);
        line1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(line1, 5, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_5, 0, 0, 1, 2);

        amount = new QLineEdit(widget_5);
        amount->setObjectName(QStringLiteral("amount"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(amount->sizePolicy().hasHeightForWidth());
        amount->setSizePolicy(sizePolicy4);
        amount->setMinimumSize(QSize(0, 40));
        amount->setMaximumSize(QSize(16777215, 50));
        amount->setSizeIncrement(QSize(0, 50));
        amount->setBaseSize(QSize(0, 0));
        amount->setFont(font2);
        amount->setStyleSheet(QStringLiteral("border: 0;"));
        amount->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(amount, 1, 0, 1, 3);

        verticalSpacer = new QSpacerItem(0, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 7, 3, 1, 1);

        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 2, 0, 1, 3);

        verticalSpacer_10 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_10, 3, 0, 1, 1);


        gridLayout->addWidget(widget_5, 1, 4, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 2, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nameLine = new QLineEdit(widget1);
        nameLine->setObjectName(QStringLiteral("nameLine"));
        nameLine->setMinimumSize(QSize(1500, 90));
        nameLine->setMaximumSize(QSize(1500, 90));
        nameLine->setFont(font2);
        nameLine->setStyleSheet(QStringLiteral("border: 0px;padding-left: 60px;"));

        verticalLayout->addWidget(nameLine);

        destribLine = new QLineEdit(widget1);
        destribLine->setObjectName(QStringLiteral("destribLine"));
        destribLine->setMinimumSize(QSize(1500, 90));
        destribLine->setMaximumSize(QSize(1500, 90));
        destribLine->setFont(font2);
        destribLine->setStyleSheet(QStringLiteral("border: 0px; padding-left: 60px;"));

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
        sizePolicy1.setHeightForWidth(color->sizePolicy().hasHeightForWidth());
        color->setSizePolicy(sizePolicy1);
        color->setMinimumSize(QSize(260, 260));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush);
        color->setPalette(palette6);
        color->setAutoFillBackground(true);
        color->setFlat(true);

        verticalLayout_3->addWidget(color);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);
        QFont font4;
        font4.setFamily(QStringLiteral("Segoe UI"));
        font4.setPointSize(10);
        label_2->setFont(font4);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        componentwidget = new QWidget(widget1);
        componentwidget->setObjectName(QStringLiteral("componentwidget"));
        sizePolicy3.setHeightForWidth(componentwidget->sizePolicy().hasHeightForWidth());
        componentwidget->setSizePolicy(sizePolicy3);
        componentwidget->setMinimumSize(QSize(2394, 0));
        componentwidget->setBaseSize(QSize(2394, 0));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush);
        componentwidget->setPalette(palette7);
        componentwidget->setAutoFillBackground(true);
        comp_wid_lay = new QHBoxLayout(componentwidget);
        comp_wid_lay->setObjectName(QStringLiteral("comp_wid_lay"));
        addnewcomp = new QPushButton(componentwidget);
        addnewcomp->setObjectName(QStringLiteral("addnewcomp"));
        sizePolicy.setHeightForWidth(addnewcomp->sizePolicy().hasHeightForWidth());
        addnewcomp->setSizePolicy(sizePolicy);
        QPalette palette8;
        QBrush brush5(QColor(208, 208, 208, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        addnewcomp->setPalette(palette8);
        QFont font5;
        font5.setFamily(QStringLiteral("Segoe UI"));
        font5.setPointSize(20);
        addnewcomp->setFont(font5);
        addnewcomp->setFlat(true);

        comp_wid_lay->addWidget(addnewcomp);


        verticalLayout_4->addWidget(componentwidget);

        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font4);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 1, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 5, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 2, 0, 1, 1);


        gridLayout_3->addWidget(widget1, 4, 0, 1, 6);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font6;
        font6.setFamily(QStringLiteral("Segoe UI"));
        font6.setPointSize(22);
        font6.setBold(true);
        font6.setWeight(75);
        label_5->setFont(font6);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_5, 0, 0, 1, 6);

        SearchTab->setCentralWidget(centralwidget);

        retranslateUi(SearchTab);

        addnewcomp->setDefault(true);


        QMetaObject::connectSlotsByName(SearchTab);
    } // setupUi

    void retranslateUi(QMainWindow *SearchTab)
    {
        SearchTab->setWindowTitle(QApplication::translate("SearchTab", "MainWindow", nullptr));
        back->setText(QApplication::translate("SearchTab", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        range->setText(QApplication::translate("SearchTab", "\320\230\321\201\320\272\320\260\321\202\321\214 \320\277\320\276 \320\264\320\270\320\260\320\277\320\260\320\267\320\276\320\275\321\203", nullptr));
        find->setText(QApplication::translate("SearchTab", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        label_3->setText(QApplication::translate("SearchTab", "\320\234\320\265\321\202\321\200\320\260\320\266", nullptr));
        line2->setInputMask(QString());
        devider->setText(QApplication::translate("SearchTab", "/", nullptr));
        devider->setPlaceholderText(QString());
        line1->setInputMask(QString());
        label_4->setText(QApplication::translate("SearchTab", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276, \320\263\321\200\320\260\320\274\320\274", nullptr));
        nameLine->setPlaceholderText(QApplication::translate("SearchTab", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        destribLine->setPlaceholderText(QApplication::translate("SearchTab", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214", nullptr));
        color->setText(QString());
        label_2->setText(QApplication::translate("SearchTab", "\320\246\320\262\320\265\321\202\320\260", nullptr));
        addnewcomp->setText(QApplication::translate("SearchTab", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\276\320\274\320\277\320\276\320\275\320\265\320\275\321\202", nullptr));
        label->setText(QApplication::translate("SearchTab", "\320\232\320\276\320\274\320\277\320\276\320\275\320\265\320\275\321\202\321\213", nullptr));
        label_5->setText(QApplication::translate("SearchTab", "\320\237\320\276\320\270\321\201\320\272 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchTab: public Ui_SearchTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHTAB_H
