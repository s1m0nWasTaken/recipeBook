/********************************************************************************
** Form generated from reading UI file 'popup.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUP_H
#define UI_POPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>

QT_BEGIN_NAMESPACE

class Ui_popUp
{
public:
    QGridLayout *gridLayout;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox;

    void setupUi(QDialog *popUp)
    {
        if (popUp->objectName().isEmpty())
            popUp->setObjectName("popUp");
        popUp->resize(410, 156);
        gridLayout = new QGridLayout(popUp);
        gridLayout->setObjectName("gridLayout");
        checkBox_4 = new QCheckBox(popUp);
        checkBox_4->setObjectName("checkBox_4");

        gridLayout->addWidget(checkBox_4, 1, 0, 1, 1);

        checkBox_3 = new QCheckBox(popUp);
        checkBox_3->setObjectName("checkBox_3");

        gridLayout->addWidget(checkBox_3, 0, 0, 1, 1);

        checkBox_6 = new QCheckBox(popUp);
        checkBox_6->setObjectName("checkBox_6");

        gridLayout->addWidget(checkBox_6, 1, 1, 1, 1);

        checkBox_2 = new QCheckBox(popUp);
        checkBox_2->setObjectName("checkBox_2");

        gridLayout->addWidget(checkBox_2, 2, 0, 1, 1);

        checkBox_5 = new QCheckBox(popUp);
        checkBox_5->setObjectName("checkBox_5");

        gridLayout->addWidget(checkBox_5, 0, 1, 1, 1);

        checkBox = new QCheckBox(popUp);
        checkBox->setObjectName("checkBox");

        gridLayout->addWidget(checkBox, 2, 1, 1, 1);


        retranslateUi(popUp);

        QMetaObject::connectSlotsByName(popUp);
    } // setupUi

    void retranslateUi(QDialog *popUp)
    {
        popUp->setWindowTitle(QCoreApplication::translate("popUp", "Dialog", nullptr));
        checkBox_4->setText(QCoreApplication::translate("popUp", "CheckBox", nullptr));
        checkBox_3->setText(QCoreApplication::translate("popUp", "CheckBox", nullptr));
        checkBox_6->setText(QCoreApplication::translate("popUp", "CheckBox", nullptr));
        checkBox_2->setText(QCoreApplication::translate("popUp", "CheckBox", nullptr));
        checkBox_5->setText(QCoreApplication::translate("popUp", "CheckBox", nullptr));
        checkBox->setText(QCoreApplication::translate("popUp", "CheckBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class popUp: public Ui_popUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUP_H
