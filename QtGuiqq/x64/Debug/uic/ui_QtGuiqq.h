/********************************************************************************
** Form generated from reading UI file 'QtGuiqq.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIQQ_H
#define UI_QTGUIQQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiqqClass
{
public:

    void setupUi(QWidget *QtGuiqqClass)
    {
        if (QtGuiqqClass->objectName().isEmpty())
            QtGuiqqClass->setObjectName(QString::fromUtf8("QtGuiqqClass"));
        QtGuiqqClass->resize(600, 400);

        retranslateUi(QtGuiqqClass);

        QMetaObject::connectSlotsByName(QtGuiqqClass);
    } // setupUi

    void retranslateUi(QWidget *QtGuiqqClass)
    {
        QtGuiqqClass->setWindowTitle(QApplication::translate("QtGuiqqClass", "QtGuiqq", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiqqClass: public Ui_QtGuiqqClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIQQ_H
