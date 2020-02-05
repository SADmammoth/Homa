/********************************************************************************
** Form generated from reading UI file 'project.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECT_H
#define UI_PROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Project
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *desc;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *pic;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *name;

    void setupUi(QWidget *Project)
    {
        if (Project->objectName().isEmpty())
            Project->setObjectName(QStringLiteral("Project"));
        Project->resize(1168, 1884);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Project->sizePolicy().hasHeightForWidth());
        Project->setSizePolicy(sizePolicy);
        Project->setMinimumSize(QSize(1168, 1884));
        Project->setSizeIncrement(QSize(0, 0));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Project->setPalette(palette);
        Project->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(Project);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        desc = new QLabel(Project);
        desc->setObjectName(QStringLiteral("desc"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(20);
        desc->setFont(font);
        desc->setAutoFillBackground(false);
        desc->setStyleSheet(QStringLiteral("padding-left: 20px;"));
        desc->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        gridLayout->addWidget(desc, 4, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pic = new QLabel(Project);
        pic->setObjectName(QStringLiteral("pic"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pic->sizePolicy().hasHeightForWidth());
        pic->setSizePolicy(sizePolicy1);
        pic->setMinimumSize(QSize(600, 600));

        gridLayout->addWidget(pic, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        scrollArea = new QScrollArea(Project);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1150, 292));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 6, 0, 1, 3);

        name = new QLabel(Project);
        name->setObjectName(QStringLiteral("name"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        name->setPalette(palette1);
        name->setFont(font);
        name->setAutoFillBackground(true);
        name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(name, 2, 0, 1, 3);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Project);

        QMetaObject::connectSlotsByName(Project);
    } // setupUi

    void retranslateUi(QWidget *Project)
    {
        Project->setWindowTitle(QApplication::translate("Project", "Form", nullptr));
        desc->setText(QApplication::translate("Project", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        pic->setText(QApplication::translate("Project", "TextLabel", nullptr));
        label->setText(QApplication::translate("Project", "\320\237\321\200\321\217\320\266\320\260 \320\275\320\265 \320\262\321\213\320\261\321\200\320\260\320\275\320\260", nullptr));
        name->setText(QApplication::translate("Project", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Project: public Ui_Project {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECT_H
