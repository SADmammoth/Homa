/********************************************************************************
** Form generated from reading UI file 'component.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPONENT_H
#define UI_COMPONENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_component
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *name;
    QLineEdit *value;
    QPushButton *choose;

    void setupUi(QWidget *component)
    {
        if (component->objectName().isEmpty())
            component->setObjectName(QStringLiteral("component"));
        component->resize(400, 200);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(component->sizePolicy().hasHeightForWidth());
        component->setSizePolicy(sizePolicy);
        component->setMinimumSize(QSize(400, 200));
        component->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(component);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        name = new QLineEdit(component);
        name->setObjectName(QStringLiteral("name"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy1);
        QPalette palette;
        QBrush brush(QColor(194, 194, 194, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QBrush brush2(QColor(240, 240, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        name->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        name->setFont(font);
        name->setAutoFillBackground(true);
        name->setStyleSheet(QStringLiteral(""));
        name->setFrame(false);
        name->setAlignment(Qt::AlignCenter);
        name->setClearButtonEnabled(false);

        verticalLayout->addWidget(name);

        value = new QLineEdit(component);
        value->setObjectName(QStringLiteral("value"));
        sizePolicy1.setHeightForWidth(value->sizePolicy().hasHeightForWidth());
        value->setSizePolicy(sizePolicy1);
        QPalette palette1;
        QBrush brush3(QColor(228, 228, 228, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        value->setPalette(palette1);
        value->setAutoFillBackground(true);
        value->setStyleSheet(QStringLiteral(""));
        value->setFrame(false);
        value->setAlignment(Qt::AlignCenter);
        value->setClearButtonEnabled(false);

        verticalLayout->addWidget(value);

        choose = new QPushButton(component);
        choose->setObjectName(QStringLiteral("choose"));
        choose->setMinimumSize(QSize(0, 100));

        verticalLayout->addWidget(choose);


        retranslateUi(component);

        QMetaObject::connectSlotsByName(component);
    } // setupUi

    void retranslateUi(QWidget *component)
    {
        component->setWindowTitle(QApplication::translate("component", "Form", nullptr));
        choose->setText(QApplication::translate("component", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class component: public Ui_component {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENT_H
