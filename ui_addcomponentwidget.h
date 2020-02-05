/********************************************************************************
** Form generated from reading UI file 'addcomponentwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOMPONENTWIDGET_H
#define UI_ADDCOMPONENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddComponentWidget
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *Save;
    QPushButton *Cancel;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QPushButton *AddButton;

    void setupUi(QWidget *AddComponentWidget)
    {
        if (AddComponentWidget->objectName().isEmpty())
            AddComponentWidget->setObjectName(QStringLiteral("AddComponentWidget"));
        AddComponentWidget->resize(2414, 480);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddComponentWidget->sizePolicy().hasHeightForWidth());
        AddComponentWidget->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(105, 105, 105, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        AddComponentWidget->setPalette(palette);
        AddComponentWidget->setAutoFillBackground(true);
        AddComponentWidget->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(AddComponentWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(1110, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        Save = new QPushButton(AddComponentWidget);
        Save->setObjectName(QStringLiteral("Save"));

        gridLayout_2->addWidget(Save, 1, 1, 1, 1);

        Cancel = new QPushButton(AddComponentWidget);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setFlat(true);

        gridLayout_2->addWidget(Cancel, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(20);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        AddButton = new QPushButton(AddComponentWidget);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(AddButton->sizePolicy().hasHeightForWidth());
        AddButton->setSizePolicy(sizePolicy1);
        AddButton->setMinimumSize(QSize(400, 200));
        AddButton->setAutoFillBackground(true);
        AddButton->setFlat(true);

        gridLayout->addWidget(AddButton, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 4);


        retranslateUi(AddComponentWidget);

        AddButton->setDefault(true);


        QMetaObject::connectSlotsByName(AddComponentWidget);
    } // setupUi

    void retranslateUi(QWidget *AddComponentWidget)
    {
        AddComponentWidget->setWindowTitle(QApplication::translate("AddComponentWidget", "Form", nullptr));
        Save->setText(QApplication::translate("AddComponentWidget", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        Cancel->setText(QApplication::translate("AddComponentWidget", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        AddButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddComponentWidget: public Ui_AddComponentWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOMPONENTWIDGET_H
