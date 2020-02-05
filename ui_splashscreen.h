/********************************************************************************
** Form generated from reading UI file 'splashscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLASHSCREEN_H
#define UI_SPLASHSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_splashscreen
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QLabel *gif;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *ver;

    void setupUi(QMainWindow *splashscreen)
    {
        if (splashscreen->objectName().isEmpty())
            splashscreen->setObjectName(QStringLiteral("splashscreen"));
        splashscreen->resize(800, 1060);
        centralwidget = new QWidget(splashscreen);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gif = new QLabel(centralwidget);
        gif->setObjectName(QStringLiteral("gif"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gif->sizePolicy().hasHeightForWidth());
        gif->setSizePolicy(sizePolicy);
        gif->setMinimumSize(QSize(500, 500));

        gridLayout_2->addWidget(gif, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 0, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 2, 1, 1);

        ver = new QLabel(centralwidget);
        ver->setObjectName(QStringLiteral("ver"));

        gridLayout_2->addWidget(ver, 3, 2, 1, 1);

        splashscreen->setCentralWidget(centralwidget);

        retranslateUi(splashscreen);

        QMetaObject::connectSlotsByName(splashscreen);
    } // setupUi

    void retranslateUi(QMainWindow *splashscreen)
    {
        splashscreen->setWindowTitle(QApplication::translate("splashscreen", "MainWindow", nullptr));
        gif->setText(QApplication::translate("splashscreen", "TextLabel", nullptr));
        ver->setText(QApplication::translate("splashscreen", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class splashscreen: public Ui_splashscreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASHSCREEN_H
