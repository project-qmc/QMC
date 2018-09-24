/********************************************************************************
** Form generated from reading UI file 'zqmccontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZQMCCONTROLDIALOG_H
#define UI_ZQMCCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZQMCControlDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZQMC;
    QLabel *labelZQMC_int;
    QPushButton *pushButtonAll;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZQMCControlDialog)
    {
        if (ZQMCControlDialog->objectName().isEmpty())
            ZQMCControlDialog->setObjectName(QStringLiteral("ZQMCControlDialog"));
        ZQMCControlDialog->resize(681, 384);
        ZQMCControlDialog->setMinimumSize(QSize(681, 384));
        gridLayout = new QGridLayout(ZQMCControlDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelQuantity = new QLabel(ZQMCControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZQMCControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZQMC = new QLabel(ZQMCControlDialog);
        labelZQMC->setObjectName(QStringLiteral("labelZQMC"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZQMC);

        labelZQMC_int = new QLabel(ZQMCControlDialog);
        labelZQMC_int->setObjectName(QStringLiteral("labelZQMC_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZQMC_int);

        pushButtonAll = new QPushButton(ZQMCControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButtonAll);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(ZQMCControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(2, QStringLiteral("zQMC Public ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZQMCControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(ZQMCControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZQMCControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZQMCControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZQMCControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZQMCControlDialog)
    {
        ZQMCControlDialog->setWindowTitle(QApplication::translate("ZQMCControlDialog", "Select zQMC to Spend", Q_NULLPTR));
        labelQuantity->setText(QApplication::translate("ZQMCControlDialog", "Quantity", Q_NULLPTR));
        labelQuantity_int->setText(QApplication::translate("ZQMCControlDialog", "0", Q_NULLPTR));
        labelZQMC->setText(QApplication::translate("ZQMCControlDialog", "zQMC", Q_NULLPTR));
        labelZQMC_int->setText(QApplication::translate("ZQMCControlDialog", "0", Q_NULLPTR));
        pushButtonAll->setText(QApplication::translate("ZQMCControlDialog", "Select/Deselect All", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ZQMCControlDialog", "Is Spendable", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZQMCControlDialog: public Ui_ZQMCControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZQMCCONTROLDIALOG_H
