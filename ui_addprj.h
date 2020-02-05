/********************************************************************************
** Form generated from reading UI file 'addprj.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRJ_H
#define UI_ADDPRJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPrj
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *mainlayout;
    QGridLayout *layout1;
    QPushButton *pic;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *name;
    QTextBrowser *desc;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QWidget *yarnwid;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addyarn;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *layout3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *button_box;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *back;
    QPushButton *del;
    QSpacerItem *horizontalSpacer;

    void setupUi(QMainWindow *AddPrj)
    {
        if (AddPrj->objectName().isEmpty())
            AddPrj->setObjectName(QStringLiteral("AddPrj"));
        AddPrj->resize(732, 1235);
        centralwidget = new QWidget(AddPrj);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mainlayout = new QVBoxLayout();
        mainlayout->setObjectName(QStringLiteral("mainlayout"));
        layout1 = new QGridLayout();
        layout1->setSpacing(20);
        layout1->setObjectName(QStringLiteral("layout1"));
        layout1->setContentsMargins(20, 20, 20, 20);
        pic = new QPushButton(centralwidget);
        pic->setObjectName(QStringLiteral("pic"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pic->sizePolicy().hasHeightForWidth());
        pic->setSizePolicy(sizePolicy1);
        pic->setMinimumSize(QSize(600, 600));
        pic->setAutoFillBackground(true);
        pic->setFlat(true);

        layout1->addWidget(pic, 0, 0, 6, 1);


        mainlayout->addLayout(layout1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainlayout->addItem(verticalSpacer_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainlayout->addItem(verticalSpacer_5);

        name = new QLineEdit(centralwidget);
        name->setObjectName(QStringLiteral("name"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy2);
        name->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(20);
        name->setFont(font);
        name->setAutoFillBackground(false);
        name->setStyleSheet(QStringLiteral("border: 0px;"));

        mainlayout->addWidget(name);

        desc = new QTextBrowser(centralwidget);
        desc->setObjectName(QStringLiteral("desc"));
        sizePolicy.setHeightForWidth(desc->sizePolicy().hasHeightForWidth());
        desc->setSizePolicy(sizePolicy);
        desc->setMinimumSize(QSize(0, 40));
        desc->setFont(font);
        desc->setAutoFillBackground(false);
        desc->setStyleSheet(QStringLiteral(""));
        desc->setFrameShape(QFrame::NoFrame);
        desc->setReadOnly(false);

        mainlayout->addWidget(desc);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainlayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        yarnwid = new QWidget(centralwidget);
        yarnwid->setObjectName(QStringLiteral("yarnwid"));
        yarnwid->setAutoFillBackground(true);
        yarnwid->setStyleSheet(QStringLiteral("boder: 0px;"));
        horizontalLayout_2 = new QHBoxLayout(yarnwid);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addyarn = new QPushButton(yarnwid);
        addyarn->setObjectName(QStringLiteral("addyarn"));
        addyarn->setMinimumSize(QSize(0, 400));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        addyarn->setPalette(palette);
        addyarn->setFont(font);
        addyarn->setAutoFillBackground(false);
        addyarn->setStyleSheet(QStringLiteral("border: 0px;"));

        horizontalLayout_2->addWidget(addyarn);


        horizontalLayout->addWidget(yarnwid);


        mainlayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainlayout->addItem(verticalSpacer_2);

        layout3 = new QGridLayout();
        layout3->setObjectName(QStringLiteral("layout3"));

        mainlayout->addLayout(layout3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainlayout->addItem(verticalSpacer_3);

        button_box = new QHBoxLayout();
        button_box->setObjectName(QStringLiteral("button_box"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        button_box->addItem(horizontalSpacer_2);

        back = new QPushButton(centralwidget);
        back->setObjectName(QStringLiteral("back"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(135, 135, 135, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        back->setPalette(palette1);
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        back->setFont(font1);
        back->setAutoFillBackground(true);
        back->setFlat(true);

        button_box->addWidget(back);

        del = new QPushButton(centralwidget);
        del->setObjectName(QStringLiteral("del"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        del->setPalette(palette2);
        del->setFont(font1);
        del->setAutoFillBackground(true);
        del->setFlat(true);

        button_box->addWidget(del);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        button_box->addItem(horizontalSpacer);


        mainlayout->addLayout(button_box);


        verticalLayout->addLayout(mainlayout);

        AddPrj->setCentralWidget(centralwidget);

        retranslateUi(AddPrj);

        QMetaObject::connectSlotsByName(AddPrj);
    } // setupUi

    void retranslateUi(QMainWindow *AddPrj)
    {
        AddPrj->setWindowTitle(QApplication::translate("AddPrj", "MainWindow", nullptr));
        pic->setText(QString());
        name->setPlaceholderText(QApplication::translate("AddPrj", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        desc->setPlaceholderText(QApplication::translate("AddPrj", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        addyarn->setText(QApplication::translate("AddPrj", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\321\217\320\266\321\203", nullptr));
        back->setText(QApplication::translate("AddPrj", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
        del->setText(QApplication::translate("AddPrj", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPrj: public Ui_AddPrj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRJ_H
