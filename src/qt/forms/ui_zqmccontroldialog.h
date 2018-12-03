/********************************************************************************
** Form generated from reading UI file 'zqmccontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZQMCControlDialog
{
public:
    QGridLayout *gridLayout;
    QWidget *wid1;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZQMC;
    QLabel *labelZQMC_int;
    QPushButton *pushButtonAll;
    QWidget *wid2;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZQMCControlDialog)
    {
        if (ZQMCControlDialog->objectName().isEmpty())
            ZQMCControlDialog->setObjectName(QStringLiteral("ZQMCControlDialog"));
        ZQMCControlDialog->resize(681, 384);
        ZQMCControlDialog->setMinimumSize(QSize(681, 384));
        ZQMCControlDialog->setStyleSheet(QLatin1String("QWidget#wid1, QWidget#wid2\n"
"{\n"
"	background: #404040;\n"
"	border: 1px solid transparent;\n"
"	border-radius: 6px;\n"
"	color: #FFFFFFF;\n"
"}"));
        gridLayout = new QGridLayout(ZQMCControlDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        wid1 = new QWidget(ZQMCControlDialog);
        wid1->setObjectName(QStringLiteral("wid1"));
        formLayout = new QFormLayout(wid1);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelQuantity = new QLabel(wid1);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(wid1);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZQMC = new QLabel(wid1);
        labelZQMC->setObjectName(QStringLiteral("labelZQMC"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZQMC);

        labelZQMC_int = new QLabel(wid1);
        labelZQMC_int->setObjectName(QStringLiteral("labelZQMC_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZQMC_int);

        pushButtonAll = new QPushButton(wid1);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));
        pushButtonAll->setMinimumSize(QSize(160, 30));
        pushButtonAll->setMaximumSize(QSize(160, 30));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButtonAll);


        gridLayout->addWidget(wid1, 0, 0, 1, 1);

        wid2 = new QWidget(ZQMCControlDialog);
        wid2->setObjectName(QStringLiteral("wid2"));
        verticalLayout = new QVBoxLayout(wid2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(wid2);
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

        buttonBox = new QDialogButtonBox(wid2);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addWidget(wid2, 1, 0, 1, 1);


        retranslateUi(ZQMCControlDialog);

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
