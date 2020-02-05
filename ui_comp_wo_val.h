/********************************************************************************
** Form generated from reading UI file 'comp_wo_val.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMP_WO_VAL_H
#define UI_COMP_WO_VAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_comp_wo_val
{
public:
    QLineEdit *name;

    void setupUi(QWidget *comp_wo_val)
    {
        if (comp_wo_val->objectName().isEmpty())
            comp_wo_val->setObjectName(QStringLiteral("comp_wo_val"));
        comp_wo_val->resize(400, 200);
        name = new QLineEdit(comp_wo_val);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(0, 0, 400, 200));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy);
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

        retranslateUi(comp_wo_val);

        QMetaObject::connectSlotsByName(comp_wo_val);
    } // setupUi

    void retranslateUi(QWidget *comp_wo_val)
    {
        comp_wo_val->setWindowTitle(QApplication::translate("comp_wo_val", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class comp_wo_val: public Ui_comp_wo_val {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMP_WO_VAL_H
