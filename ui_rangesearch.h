/********************************************************************************
** Form generated from reading UI file 'rangesearch.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANGESEARCH_H
#define UI_RANGESEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rangesearch
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpinBox *spinBox;
    QPushButton *find;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_3;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *back;

    void setupUi(QMainWindow *rangesearch)
    {
        if (rangesearch->objectName().isEmpty())
            rangesearch->setObjectName(QStringLiteral("rangesearch"));
        rangesearch->resize(800, 600);
        centralwidget = new QWidget(rangesearch);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        centralwidget->setPalette(palette);
        centralwidget->setAutoFillBackground(true);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(14);
        spinBox->setFont(font);
        spinBox->setMaximum(9999);

        gridLayout->addWidget(spinBox, 1, 0, 1, 2);

        find = new QPushButton(centralwidget);
        find->setObjectName(QStringLiteral("find"));
        QPalette palette1;
        QBrush brush1(QColor(135, 135, 135, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        find->setPalette(palette1);
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        find->setFont(font1);
        find->setAutoFillBackground(true);
        find->setFlat(true);

        gridLayout->addWidget(find, 3, 2, 1, 1);

        spinBox_2 = new QSpinBox(centralwidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setFont(font);
        spinBox_2->setMaximum(9999);

        gridLayout->addWidget(spinBox_2, 1, 4, 1, 1);

        spinBox_4 = new QSpinBox(centralwidget);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setFont(font);
        spinBox_4->setMaximum(9999);

        gridLayout->addWidget(spinBox_4, 2, 4, 1, 1);

        spinBox_3 = new QSpinBox(centralwidget);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setFont(font);
        spinBox_3->setMaximum(9999);

        gridLayout->addWidget(spinBox_3, 2, 0, 1, 2);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush3(QColor(228, 228, 228, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        comboBox->setPalette(palette2);
        comboBox->setFont(font);
        comboBox->setAutoFillBackground(true);
        comboBox->setFrame(true);

        gridLayout->addWidget(comboBox, 0, 0, 1, 5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 4, 1, 1);

        back = new QPushButton(centralwidget);
        back->setObjectName(QStringLiteral("back"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        back->setPalette(palette3);
        back->setFont(font1);
        back->setAutoFillBackground(true);
        back->setFlat(true);

        gridLayout->addWidget(back, 3, 3, 1, 1);

        rangesearch->setCentralWidget(centralwidget);

        retranslateUi(rangesearch);

        QMetaObject::connectSlotsByName(rangesearch);
    } // setupUi

    void retranslateUi(QMainWindow *rangesearch)
    {
        rangesearch->setWindowTitle(QApplication::translate("rangesearch", "MainWindow", nullptr));
        find->setText(QApplication::translate("rangesearch", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        comboBox->setItemText(0, QApplication::translate("rangesearch", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        comboBox->setItemText(1, QApplication::translate("rangesearch", "\320\224\320\260\321\202\320\260 \320\277\320\276\320\272\321\203\320\277\320\272\320\270", nullptr));
        comboBox->setItemText(2, QApplication::translate("rangesearch", "\320\234\320\265\321\202\321\200\320\260\320\266", nullptr));

        back->setText(QApplication::translate("rangesearch", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rangesearch: public Ui_rangesearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANGESEARCH_H
