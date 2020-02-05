/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *menuWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_6;
    QGraphicsView *logo;
    QSpacerItem *verticalSpacer_8;
    QPushButton *AddNewButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *ShowAllButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *SearchButton;
    QSpacerItem *verticalSpacer_4;
    QPushButton *ProjectsButton;
    QSpacerItem *verticalSpacer_5;
    QPushButton *ExitButton;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(586, 1788);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setAutoFillBackground(true);
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        menuWidget = new QWidget(centralWidget);
        menuWidget->setObjectName(QStringLiteral("menuWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(menuWidget->sizePolicy().hasHeightForWidth());
        menuWidget->setSizePolicy(sizePolicy);
        menuWidget->setMinimumSize(QSize(50, 0));
        menuWidget->setMaximumSize(QSize(16777215, 16777215));
        menuWidget->setAutoFillBackground(true);
        menuWidget->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(menuWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(19, 0, 19, 0);
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        logo = new QGraphicsView(menuWidget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy1);
        logo->setMinimumSize(QSize(604, 400));
        logo->setStyleSheet(QStringLiteral("border: 0px"));
        logo->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        logo->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        logo->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        logo->setInteractive(false);
        logo->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        logo->setViewportUpdateMode(QGraphicsView::NoViewportUpdate);

        verticalLayout->addWidget(logo);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);

        AddNewButton = new QPushButton(menuWidget);
        AddNewButton->setObjectName(QStringLiteral("AddNewButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(2);
        sizePolicy2.setHeightForWidth(AddNewButton->sizePolicy().hasHeightForWidth());
        AddNewButton->setSizePolicy(sizePolicy2);
        AddNewButton->setMinimumSize(QSize(0, 216));
        QPalette palette;
        QBrush brush(QColor(77, 77, 77, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(199, 199, 199, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Active, QPalette::Link, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush1);
        AddNewButton->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(28);
        AddNewButton->setFont(font);
        AddNewButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(AddNewButton);

        verticalSpacer_2 = new QSpacerItem(40, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        ShowAllButton = new QPushButton(menuWidget);
        ShowAllButton->setObjectName(QStringLiteral("ShowAllButton"));
        sizePolicy2.setHeightForWidth(ShowAllButton->sizePolicy().hasHeightForWidth());
        ShowAllButton->setSizePolicy(sizePolicy2);
        ShowAllButton->setMinimumSize(QSize(0, 216));
        ShowAllButton->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::Link, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Link, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Link, brush1);
        ShowAllButton->setPalette(palette1);
        ShowAllButton->setFont(font);
        ShowAllButton->setCursor(QCursor(Qt::PointingHandCursor));
        ShowAllButton->setAutoFillBackground(false);
        ShowAllButton->setStyleSheet(QStringLiteral("border: 0; background-color: #4D4D4D; border-radius: 108"));
        ShowAllButton->setAutoDefault(false);
        ShowAllButton->setFlat(false);

        verticalLayout->addWidget(ShowAllButton);

        verticalSpacer_3 = new QSpacerItem(40, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        SearchButton = new QPushButton(menuWidget);
        SearchButton->setObjectName(QStringLiteral("SearchButton"));
        sizePolicy2.setHeightForWidth(SearchButton->sizePolicy().hasHeightForWidth());
        SearchButton->setSizePolicy(sizePolicy2);
        SearchButton->setMinimumSize(QSize(0, 216));
        SearchButton->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Active, QPalette::Link, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Link, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Link, brush1);
        SearchButton->setPalette(palette2);
        SearchButton->setFont(font);
        SearchButton->setCursor(QCursor(Qt::PointingHandCursor));
        SearchButton->setAutoFillBackground(false);
        SearchButton->setStyleSheet(QStringLiteral("border: 0; background-color: #4D4D4D; border-radius: 108"));
        SearchButton->setAutoDefault(false);
        SearchButton->setFlat(false);

        verticalLayout->addWidget(SearchButton);

        verticalSpacer_4 = new QSpacerItem(40, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        ProjectsButton = new QPushButton(menuWidget);
        ProjectsButton->setObjectName(QStringLiteral("ProjectsButton"));
        sizePolicy2.setHeightForWidth(ProjectsButton->sizePolicy().hasHeightForWidth());
        ProjectsButton->setSizePolicy(sizePolicy2);
        ProjectsButton->setMinimumSize(QSize(0, 216));
        ProjectsButton->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Active, QPalette::Link, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Link, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Link, brush1);
        ProjectsButton->setPalette(palette3);
        ProjectsButton->setFont(font);
        ProjectsButton->setCursor(QCursor(Qt::PointingHandCursor));
        ProjectsButton->setAutoFillBackground(false);
        ProjectsButton->setStyleSheet(QStringLiteral("border: 0; background-color: #4D4D4D; border-radius: 108"));
        ProjectsButton->setAutoDefault(false);
        ProjectsButton->setFlat(false);

        verticalLayout->addWidget(ProjectsButton);

        verticalSpacer_5 = new QSpacerItem(40, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        ExitButton = new QPushButton(menuWidget);
        ExitButton->setObjectName(QStringLiteral("ExitButton"));
        sizePolicy2.setHeightForWidth(ExitButton->sizePolicy().hasHeightForWidth());
        ExitButton->setSizePolicy(sizePolicy2);
        ExitButton->setMinimumSize(QSize(0, 216));
        ExitButton->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette4;
        QBrush brush3(QColor(0, 0, 0, 0));
        brush3.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush4(QColor(170, 255, 0, 0));
        brush4.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Link, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        QBrush brush5(QColor(0, 0, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Inactive, QPalette::Link, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Link, brush5);
        ExitButton->setPalette(palette4);
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(28);
        font1.setUnderline(true);
        ExitButton->setFont(font1);
        ExitButton->setCursor(QCursor(Qt::PointingHandCursor));
        ExitButton->setAutoFillBackground(false);
        ExitButton->setStyleSheet(QStringLiteral("b"));
        ExitButton->setAutoDefault(false);
        ExitButton->setFlat(true);

        verticalLayout->addWidget(ExitButton);

        verticalSpacer_7 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_7);


        horizontalLayout->addWidget(menuWidget);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        ShowAllButton->setDefault(false);
        SearchButton->setDefault(false);
        ProjectsButton->setDefault(false);
        ExitButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        AddNewButton->setStyleSheet(QApplication::translate("MainWindow", "border: 0; background-color: #4D4D4D; border-radius: 108", nullptr));
        AddNewButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\321\217\320\266\321\203", nullptr));
        ShowAllButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\262\321\201\320\265", nullptr));
        SearchButton->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        ProjectsButton->setText(QApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216 \320\277\321\200\320\276\320\265\320\272\321\202\320\276\320\262", nullptr));
        ExitButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
