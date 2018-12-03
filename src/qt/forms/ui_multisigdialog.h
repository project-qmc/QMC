/********************************************************************************
** Form generated from reading UI file 'multisigdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTISIGDIALOG_H
#define UI_MULTISIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultisigDialog
{
public:
    QVBoxLayout *verticalLayout_8;
    QTabWidget *multisigTabWidget;
    QWidget *addMultisigTab;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *enterMLayout;
    QSpinBox *enterMSpinbox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *enterMLabel;
    QHBoxLayout *addressLabelLayout;
    QLabel *addressLableLabel;
    QSpacerItem *horizontalSpacer;
    QLineEdit *multisigAddressLabel;
    QHBoxLayout *addAddressLayout;
    QPushButton *addAddressButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *addAddressLabel;
    QSpacerItem *addAddressSpacer_2;
    QScrollArea *addAddressScrollArea;
    QWidget *addAddressWidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *addressList;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *addMultisigLayout;
    QPushButton *addMultisigButton;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QTextEdit *addMultisigStatus;
    QLabel *label_2;
    QHBoxLayout *importLayout;
    QPushButton *importAddressButton;
    QLineEdit *importRedeem;
    QWidget *createTransactionTab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *createTxLayout;
    QHBoxLayout *addTxInputLayout;
    QLabel *addTxInputLabel;
    QPushButton *pushButtonCoinControl;
    QFormLayout *formLayout_2;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelAmount;
    QLabel *labelAmount_int;
    QPushButton *addInputButton;
    QScrollArea *txInputsScrollArea;
    QWidget *txInputsWidget;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *inputsList;
    QSpacerItem *txInputsSpacer;
    QHBoxLayout *addDestinationLayout;
    QLabel *addDestinationLabel;
    QPushButton *addDestinationButton;
    QSpacerItem *addDestinationHorizontalSpacer;
    QScrollArea *destionationsScrollArea;
    QWidget *destinationsScrollAreaContents;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *destinationsList;
    QSpacerItem *destinationsSpacer;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *createButton;
    QLabel *createButtonLabel;
    QTextEdit *createButtonStatus;
    QHBoxLayout *horizontalLayout_3;
    QWidget *signMultisigTransaction;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *transactionHexLayout;
    QLabel *transactionHexLabel;
    QLineEdit *transactionHex;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *signButton;
    QPushButton *commitButton;
    QHBoxLayout *addPrivKeyLayout;
    QPushButton *addPrivKeyButton;
    QLabel *addPrivKeyLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *signButtonStatusLabel;
    QTextEdit *signButtonStatus;
    QScrollArea *keyScrollArea;
    QWidget *keyScrollAreaContents;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *keyList;
    QSpacerItem *keySpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *MultisigDialog)
    {
        if (MultisigDialog->objectName().isEmpty())
            MultisigDialog->setObjectName(QStringLiteral("MultisigDialog"));
        MultisigDialog->resize(801, 504);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MultisigDialog->sizePolicy().hasHeightForWidth());
        MultisigDialog->setSizePolicy(sizePolicy);
        verticalLayout_8 = new QVBoxLayout(MultisigDialog);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        multisigTabWidget = new QTabWidget(MultisigDialog);
        multisigTabWidget->setObjectName(QStringLiteral("multisigTabWidget"));
        multisigTabWidget->setStyleSheet(QLatin1String("QScrollArea{border: 1px solid #5b4c7c;}\n"
"QFrame{background-color:#f2f0f0;}\n"
"QLabel{background-color:#ffffff;}\n"
"QFrame > QLabel{background-color:#f2f0f0;}"));
        addMultisigTab = new QWidget();
        addMultisigTab->setObjectName(QStringLiteral("addMultisigTab"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addMultisigTab->sizePolicy().hasHeightForWidth());
        addMultisigTab->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(addMultisigTab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        enterMLayout = new QHBoxLayout();
        enterMLayout->setObjectName(QStringLiteral("enterMLayout"));
        enterMSpinbox = new QSpinBox(addMultisigTab);
        enterMSpinbox->setObjectName(QStringLiteral("enterMSpinbox"));
        sizePolicy.setHeightForWidth(enterMSpinbox->sizePolicy().hasHeightForWidth());
        enterMSpinbox->setSizePolicy(sizePolicy);
        enterMSpinbox->setMinimumSize(QSize(120, 30));
        enterMSpinbox->setMaximumSize(QSize(120, 30));
        enterMSpinbox->setMinimum(1);
        enterMSpinbox->setMaximum(16);
        enterMSpinbox->setValue(1);

        enterMLayout->addWidget(enterMSpinbox);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        enterMLayout->addItem(horizontalSpacer_2);

        enterMLabel = new QLabel(addMultisigTab);
        enterMLabel->setObjectName(QStringLiteral("enterMLabel"));
        enterMLabel->setMinimumSize(QSize(0, 30));
        enterMLabel->setMaximumSize(QSize(16777215, 30));

        enterMLayout->addWidget(enterMLabel);


        verticalLayout->addLayout(enterMLayout);

        addressLabelLayout = new QHBoxLayout();
        addressLabelLayout->setObjectName(QStringLiteral("addressLabelLayout"));
        addressLableLabel = new QLabel(addMultisigTab);
        addressLableLabel->setObjectName(QStringLiteral("addressLableLabel"));

        addressLabelLayout->addWidget(addressLableLabel);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        addressLabelLayout->addItem(horizontalSpacer);

        multisigAddressLabel = new QLineEdit(addMultisigTab);
        multisigAddressLabel->setObjectName(QStringLiteral("multisigAddressLabel"));
        multisigAddressLabel->setMinimumSize(QSize(0, 30));
        multisigAddressLabel->setMaximumSize(QSize(16777215, 30));

        addressLabelLayout->addWidget(multisigAddressLabel);


        verticalLayout->addLayout(addressLabelLayout);

        addAddressLayout = new QHBoxLayout();
        addAddressLayout->setObjectName(QStringLiteral("addAddressLayout"));
        addAddressButton = new QPushButton(addMultisigTab);
        addAddressButton->setObjectName(QStringLiteral("addAddressButton"));
        addAddressButton->setMinimumSize(QSize(160, 30));
        addAddressButton->setMaximumSize(QSize(160, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/add"), QSize(), QIcon::Normal, QIcon::Off);
        addAddressButton->setIcon(icon);
        addAddressButton->setAutoDefault(false);

        addAddressLayout->addWidget(addAddressButton);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        addAddressLayout->addItem(horizontalSpacer_3);

        addAddressLabel = new QLabel(addMultisigTab);
        addAddressLabel->setObjectName(QStringLiteral("addAddressLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(addAddressLabel->sizePolicy().hasHeightForWidth());
        addAddressLabel->setSizePolicy(sizePolicy2);

        addAddressLayout->addWidget(addAddressLabel);

        addAddressSpacer_2 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        addAddressLayout->addItem(addAddressSpacer_2);


        verticalLayout->addLayout(addAddressLayout);

        addAddressScrollArea = new QScrollArea(addMultisigTab);
        addAddressScrollArea->setObjectName(QStringLiteral("addAddressScrollArea"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(addAddressScrollArea->sizePolicy().hasHeightForWidth());
        addAddressScrollArea->setSizePolicy(sizePolicy3);
        addAddressScrollArea->setWidgetResizable(true);
        addAddressWidget = new QWidget();
        addAddressWidget->setObjectName(QStringLiteral("addAddressWidget"));
        addAddressWidget->setGeometry(QRect(0, 0, 759, 147));
        verticalLayout_5 = new QVBoxLayout(addAddressWidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        addressList = new QVBoxLayout();
        addressList->setObjectName(QStringLiteral("addressList"));

        verticalLayout_5->addLayout(addressList);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        addAddressScrollArea->setWidget(addAddressWidget);

        verticalLayout->addWidget(addAddressScrollArea);

        addMultisigLayout = new QHBoxLayout();
        addMultisigLayout->setObjectName(QStringLiteral("addMultisigLayout"));
        addMultisigButton = new QPushButton(addMultisigTab);
        addMultisigButton->setObjectName(QStringLiteral("addMultisigButton"));
        sizePolicy2.setHeightForWidth(addMultisigButton->sizePolicy().hasHeightForWidth());
        addMultisigButton->setSizePolicy(sizePolicy2);
        addMultisigButton->setMinimumSize(QSize(100, 30));
        addMultisigButton->setMaximumSize(QSize(100, 30));
        addMultisigButton->setToolTipDuration(-3);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/filesave"), QSize(), QIcon::Normal, QIcon::Off);
        addMultisigButton->setIcon(icon1);
        addMultisigButton->setAutoDefault(false);

        addMultisigLayout->addWidget(addMultisigButton);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        addMultisigLayout->addItem(horizontalSpacer_4);

        label = new QLabel(addMultisigTab);
        label->setObjectName(QStringLiteral("label"));

        addMultisigLayout->addWidget(label);

        addMultisigStatus = new QTextEdit(addMultisigTab);
        addMultisigStatus->setObjectName(QStringLiteral("addMultisigStatus"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(addMultisigStatus->sizePolicy().hasHeightForWidth());
        addMultisigStatus->setSizePolicy(sizePolicy4);
        addMultisigStatus->setMaximumSize(QSize(16777215, 75));
        addMultisigStatus->setReadOnly(true);
        addMultisigStatus->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        addMultisigLayout->addWidget(addMultisigStatus);


        verticalLayout->addLayout(addMultisigLayout);

        label_2 = new QLabel(addMultisigTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy5);
        label_2->setScaledContents(false);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        importLayout = new QHBoxLayout();
        importLayout->setObjectName(QStringLiteral("importLayout"));
        importAddressButton = new QPushButton(addMultisigTab);
        importAddressButton->setObjectName(QStringLiteral("importAddressButton"));
        sizePolicy.setHeightForWidth(importAddressButton->sizePolicy().hasHeightForWidth());
        importAddressButton->setSizePolicy(sizePolicy);
        importAddressButton->setMinimumSize(QSize(160, 30));
        importAddressButton->setMaximumSize(QSize(160, 30));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/receiving_addresses"), QSize(), QIcon::Normal, QIcon::Off);
        importAddressButton->setIcon(icon2);

        importLayout->addWidget(importAddressButton);

        importRedeem = new QLineEdit(addMultisigTab);
        importRedeem->setObjectName(QStringLiteral("importRedeem"));
        sizePolicy2.setHeightForWidth(importRedeem->sizePolicy().hasHeightForWidth());
        importRedeem->setSizePolicy(sizePolicy2);
        importRedeem->setMinimumSize(QSize(0, 30));
        importRedeem->setMaximumSize(QSize(16777215, 30));

        importLayout->addWidget(importRedeem);


        verticalLayout->addLayout(importLayout);

        multisigTabWidget->addTab(addMultisigTab, QString());
        createTransactionTab = new QWidget();
        createTransactionTab->setObjectName(QStringLiteral("createTransactionTab"));
        verticalLayout_3 = new QVBoxLayout(createTransactionTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        createTxLayout = new QVBoxLayout();
        createTxLayout->setObjectName(QStringLiteral("createTxLayout"));
        addTxInputLayout = new QHBoxLayout();
        addTxInputLayout->setObjectName(QStringLiteral("addTxInputLayout"));
        addTxInputLabel = new QLabel(createTransactionTab);
        addTxInputLabel->setObjectName(QStringLiteral("addTxInputLabel"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(addTxInputLabel->sizePolicy().hasHeightForWidth());
        addTxInputLabel->setSizePolicy(sizePolicy6);

        addTxInputLayout->addWidget(addTxInputLabel);

        pushButtonCoinControl = new QPushButton(createTransactionTab);
        pushButtonCoinControl->setObjectName(QStringLiteral("pushButtonCoinControl"));
        sizePolicy2.setHeightForWidth(pushButtonCoinControl->sizePolicy().hasHeightForWidth());
        pushButtonCoinControl->setSizePolicy(sizePolicy2);
        pushButtonCoinControl->setMinimumSize(QSize(160, 30));
        pushButtonCoinControl->setMaximumSize(QSize(160, 30));

        addTxInputLayout->addWidget(pushButtonCoinControl);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(-1, -1, 10, -1);
        labelQuantity = new QLabel(createTransactionTab);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(createTransactionTab);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelAmount = new QLabel(createTransactionTab);
        labelAmount->setObjectName(QStringLiteral("labelAmount"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, labelAmount);

        labelAmount_int = new QLabel(createTransactionTab);
        labelAmount_int->setObjectName(QStringLiteral("labelAmount_int"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, labelAmount_int);


        addTxInputLayout->addLayout(formLayout_2);

        addInputButton = new QPushButton(createTransactionTab);
        addInputButton->setObjectName(QStringLiteral("addInputButton"));
        sizePolicy2.setHeightForWidth(addInputButton->sizePolicy().hasHeightForWidth());
        addInputButton->setSizePolicy(sizePolicy2);
        addInputButton->setMinimumSize(QSize(160, 30));
        addInputButton->setMaximumSize(QSize(160, 30));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/css/default"), QSize(), QIcon::Normal, QIcon::Off);
        addInputButton->setIcon(icon3);

        addTxInputLayout->addWidget(addInputButton);


        createTxLayout->addLayout(addTxInputLayout);

        txInputsScrollArea = new QScrollArea(createTransactionTab);
        txInputsScrollArea->setObjectName(QStringLiteral("txInputsScrollArea"));
        sizePolicy3.setHeightForWidth(txInputsScrollArea->sizePolicy().hasHeightForWidth());
        txInputsScrollArea->setSizePolicy(sizePolicy3);
        txInputsScrollArea->setWidgetResizable(true);
        txInputsWidget = new QWidget();
        txInputsWidget->setObjectName(QStringLiteral("txInputsWidget"));
        txInputsWidget->setGeometry(QRect(0, 0, 747, 68));
        verticalLayout_7 = new QVBoxLayout(txInputsWidget);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        inputsList = new QVBoxLayout();
        inputsList->setObjectName(QStringLiteral("inputsList"));

        verticalLayout_7->addLayout(inputsList);

        txInputsSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(txInputsSpacer);

        txInputsScrollArea->setWidget(txInputsWidget);

        createTxLayout->addWidget(txInputsScrollArea);

        addDestinationLayout = new QHBoxLayout();
        addDestinationLayout->setObjectName(QStringLiteral("addDestinationLayout"));
        addDestinationLabel = new QLabel(createTransactionTab);
        addDestinationLabel->setObjectName(QStringLiteral("addDestinationLabel"));

        addDestinationLayout->addWidget(addDestinationLabel);

        addDestinationButton = new QPushButton(createTransactionTab);
        addDestinationButton->setObjectName(QStringLiteral("addDestinationButton"));
        sizePolicy.setHeightForWidth(addDestinationButton->sizePolicy().hasHeightForWidth());
        addDestinationButton->setSizePolicy(sizePolicy);
        addDestinationButton->setMinimumSize(QSize(0, 30));
        addDestinationButton->setMaximumSize(QSize(150, 30));
        addDestinationButton->setIcon(icon);

        addDestinationLayout->addWidget(addDestinationButton);

        addDestinationHorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        addDestinationLayout->addItem(addDestinationHorizontalSpacer);


        createTxLayout->addLayout(addDestinationLayout);

        destionationsScrollArea = new QScrollArea(createTransactionTab);
        destionationsScrollArea->setObjectName(QStringLiteral("destionationsScrollArea"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(destionationsScrollArea->sizePolicy().hasHeightForWidth());
        destionationsScrollArea->setSizePolicy(sizePolicy7);
        destionationsScrollArea->setWidgetResizable(true);
        destinationsScrollAreaContents = new QWidget();
        destinationsScrollAreaContents->setObjectName(QStringLiteral("destinationsScrollAreaContents"));
        destinationsScrollAreaContents->setGeometry(QRect(0, 0, 747, 68));
        verticalLayout_11 = new QVBoxLayout(destinationsScrollAreaContents);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        destinationsList = new QVBoxLayout();
        destinationsList->setObjectName(QStringLiteral("destinationsList"));

        verticalLayout_11->addLayout(destinationsList);

        destinationsSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(destinationsSpacer);

        destionationsScrollArea->setWidget(destinationsScrollAreaContents);

        createTxLayout->addWidget(destionationsScrollArea);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        createButton = new QPushButton(createTransactionTab);
        createButton->setObjectName(QStringLiteral("createButton"));
        sizePolicy.setHeightForWidth(createButton->sizePolicy().hasHeightForWidth());
        createButton->setSizePolicy(sizePolicy);
        createButton->setMinimumSize(QSize(150, 30));
        createButton->setMaximumSize(QSize(150, 30));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/export"), QSize(), QIcon::Normal, QIcon::Off);
        createButton->setIcon(icon4);
        createButton->setAutoDefault(false);

        horizontalLayout_4->addWidget(createButton);

        createButtonLabel = new QLabel(createTransactionTab);
        createButtonLabel->setObjectName(QStringLiteral("createButtonLabel"));
        sizePolicy6.setHeightForWidth(createButtonLabel->sizePolicy().hasHeightForWidth());
        createButtonLabel->setSizePolicy(sizePolicy6);
        createButtonLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(createButtonLabel);

        createButtonStatus = new QTextEdit(createTransactionTab);
        createButtonStatus->setObjectName(QStringLiteral("createButtonStatus"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(createButtonStatus->sizePolicy().hasHeightForWidth());
        createButtonStatus->setSizePolicy(sizePolicy8);
        createButtonStatus->setMaximumSize(QSize(16777215, 16777215));
        createButtonStatus->setReadOnly(true);

        horizontalLayout_4->addWidget(createButtonStatus);


        createTxLayout->addLayout(horizontalLayout_4);


        horizontalLayout_2->addLayout(createTxLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));

        horizontalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(horizontalLayout_2);

        multisigTabWidget->addTab(createTransactionTab, QString());
        signMultisigTransaction = new QWidget();
        signMultisigTransaction->setObjectName(QStringLiteral("signMultisigTransaction"));
        signMultisigTransaction->setStyleSheet(QLatin1String("txScrollArea:{\n"
"	border: 1px solid #5b4c7c;\n"
"}\n"
"keyScrollArea:{\n"
"	border: 1px solid #5b4c7c;\n"
"}\n"
"txScrollArea:{\n"
"	border: 1px solid #5b4c7c;\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(signMultisigTransaction);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        transactionHexLayout = new QHBoxLayout();
        transactionHexLayout->setObjectName(QStringLiteral("transactionHexLayout"));
        transactionHexLabel = new QLabel(signMultisigTransaction);
        transactionHexLabel->setObjectName(QStringLiteral("transactionHexLabel"));

        transactionHexLayout->addWidget(transactionHexLabel);

        transactionHex = new QLineEdit(signMultisigTransaction);
        transactionHex->setObjectName(QStringLiteral("transactionHex"));
        transactionHex->setMinimumSize(QSize(0, 30));
        transactionHex->setMaximumSize(QSize(16777215, 30));

        transactionHexLayout->addWidget(transactionHex);


        verticalLayout_4->addLayout(transactionHexLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        signButton = new QPushButton(signMultisigTransaction);
        signButton->setObjectName(QStringLiteral("signButton"));
        sizePolicy2.setHeightForWidth(signButton->sizePolicy().hasHeightForWidth());
        signButton->setSizePolicy(sizePolicy2);
        signButton->setMinimumSize(QSize(150, 30));
        signButton->setMaximumSize(QSize(150, 30));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/edit"), QSize(), QIcon::Normal, QIcon::Off);
        signButton->setIcon(icon5);
        signButton->setAutoDefault(false);

        horizontalLayout_7->addWidget(signButton);

        commitButton = new QPushButton(signMultisigTransaction);
        commitButton->setObjectName(QStringLiteral("commitButton"));
        commitButton->setEnabled(false);
        sizePolicy2.setHeightForWidth(commitButton->sizePolicy().hasHeightForWidth());
        commitButton->setSizePolicy(sizePolicy2);
        commitButton->setMinimumSize(QSize(0, 30));
        commitButton->setMaximumSize(QSize(150, 30));
        commitButton->setAutoFillBackground(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/send"), QSize(), QIcon::Normal, QIcon::Off);
        commitButton->setIcon(icon6);
        commitButton->setAutoDefault(true);

        horizontalLayout_7->addWidget(commitButton);

        addPrivKeyLayout = new QHBoxLayout();
        addPrivKeyLayout->setObjectName(QStringLiteral("addPrivKeyLayout"));
        addPrivKeyButton = new QPushButton(signMultisigTransaction);
        addPrivKeyButton->setObjectName(QStringLiteral("addPrivKeyButton"));
        sizePolicy.setHeightForWidth(addPrivKeyButton->sizePolicy().hasHeightForWidth());
        addPrivKeyButton->setSizePolicy(sizePolicy);
        addPrivKeyButton->setMinimumSize(QSize(0, 30));
        addPrivKeyButton->setMaximumSize(QSize(150, 30));
        addPrivKeyButton->setIcon(icon);

        addPrivKeyLayout->addWidget(addPrivKeyButton);

        addPrivKeyLabel = new QLabel(signMultisigTransaction);
        addPrivKeyLabel->setObjectName(QStringLiteral("addPrivKeyLabel"));

        addPrivKeyLayout->addWidget(addPrivKeyLabel);


        horizontalLayout_7->addLayout(addPrivKeyLayout);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        signButtonStatusLabel = new QLabel(signMultisigTransaction);
        signButtonStatusLabel->setObjectName(QStringLiteral("signButtonStatusLabel"));

        horizontalLayout_5->addWidget(signButtonStatusLabel);

        signButtonStatus = new QTextEdit(signMultisigTransaction);
        signButtonStatus->setObjectName(QStringLiteral("signButtonStatus"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(signButtonStatus->sizePolicy().hasHeightForWidth());
        signButtonStatus->setSizePolicy(sizePolicy9);
        signButtonStatus->setMaximumSize(QSize(16777215, 16777215));
        signButtonStatus->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        signButtonStatus->setReadOnly(true);
        signButtonStatus->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_5->addWidget(signButtonStatus);


        verticalLayout_2->addLayout(horizontalLayout_5);

        keyScrollArea = new QScrollArea(signMultisigTransaction);
        keyScrollArea->setObjectName(QStringLiteral("keyScrollArea"));
        sizePolicy7.setHeightForWidth(keyScrollArea->sizePolicy().hasHeightForWidth());
        keyScrollArea->setSizePolicy(sizePolicy7);
        keyScrollArea->setWidgetResizable(true);
        keyScrollAreaContents = new QWidget();
        keyScrollAreaContents->setObjectName(QStringLiteral("keyScrollAreaContents"));
        keyScrollAreaContents->setGeometry(QRect(0, 0, 755, 68));
        verticalLayout_9 = new QVBoxLayout(keyScrollAreaContents);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        keyList = new QVBoxLayout();
        keyList->setObjectName(QStringLiteral("keyList"));

        verticalLayout_9->addLayout(keyList);

        keySpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(keySpacer);

        keyScrollArea->setWidget(keyScrollAreaContents);

        verticalLayout_2->addWidget(keyScrollArea);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        multisigTabWidget->addTab(signMultisigTransaction, QString());

        verticalLayout_8->addWidget(multisigTabWidget);


        retranslateUi(MultisigDialog);

        multisigTabWidget->setCurrentIndex(0);
        createButton->setDefault(true);
        signButton->setDefault(true);


        QMetaObject::connectSlotsByName(MultisigDialog);
    } // setupUi

    void retranslateUi(QDialog *MultisigDialog)
    {
        MultisigDialog->setWindowTitle(QApplication::translate("MultisigDialog", "Multisignature Address Interactions", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        enterMSpinbox->setToolTip(QApplication::translate("MultisigDialog", "How many people must sign to verify a transaction", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        enterMLabel->setText(QApplication::translate("MultisigDialog", "Enter the minimum number of signatures required to sign transactions", Q_NULLPTR));
        addressLableLabel->setText(QApplication::translate("MultisigDialog", "Address Label:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addAddressButton->setToolTip(QApplication::translate("MultisigDialog", "Add another address that could sign to verify a transaction from the multisig address.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addAddressButton->setText(QApplication::translate("MultisigDialog", "&Add Address / Key", Q_NULLPTR));
        addAddressLabel->setText(QApplication::translate("MultisigDialog", "Local addresses or public keys that can sign:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addMultisigButton->setToolTip(QApplication::translate("MultisigDialog", "Create a new multisig address", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addMultisigButton->setText(QApplication::translate("MultisigDialog", "C&reate", Q_NULLPTR));
        label->setText(QApplication::translate("MultisigDialog", "Status:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MultisigDialog", "Use below to quickly import an address by its redeem. Don't forget to add a label before clicking import!\n"
"Keep in mind, the wallet will rescan the blockchain to find transactions containing the new address.\n"
"Please be patient after clicking import.", Q_NULLPTR));
        importAddressButton->setText(QApplication::translate("MultisigDialog", "&Import Redeem", Q_NULLPTR));
        multisigTabWidget->setTabText(multisigTabWidget->indexOf(addMultisigTab), QApplication::translate("MultisigDialog", "Create MultiSignature &Address", Q_NULLPTR));
        addTxInputLabel->setText(QApplication::translate("MultisigDialog", "Inputs:", Q_NULLPTR));
        pushButtonCoinControl->setText(QApplication::translate("MultisigDialog", "Coin Control", Q_NULLPTR));
        labelQuantity->setText(QApplication::translate("MultisigDialog", "Quantity Selected:", Q_NULLPTR));
        labelQuantity_int->setText(QApplication::translate("MultisigDialog", "0", Q_NULLPTR));
        labelAmount->setText(QApplication::translate("MultisigDialog", "Amount:", Q_NULLPTR));
        labelAmount_int->setText(QApplication::translate("MultisigDialog", "0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addInputButton->setToolTip(QApplication::translate("MultisigDialog", "Add an input to fund the outputs", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addInputButton->setText(QApplication::translate("MultisigDialog", "Add a Raw Input", Q_NULLPTR));
        addDestinationLabel->setText(QApplication::translate("MultisigDialog", "Address / Amount:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addDestinationButton->setToolTip(QApplication::translate("MultisigDialog", "Add destinations to send QMC to", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addDestinationButton->setText(QApplication::translate("MultisigDialog", "Add &Destination", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        createButton->setToolTip(QApplication::translate("MultisigDialog", "Create a transaction object using the given inputs to the given outputs", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        createButton->setText(QApplication::translate("MultisigDialog", "Cr&eate", Q_NULLPTR));
        createButtonLabel->setText(QApplication::translate("MultisigDialog", "Status:", Q_NULLPTR));
        createButtonStatus->setHtml(QApplication::translate("MultisigDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'FreeSerif Italic'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Noto Sans'; font-size:9pt;\"><br /></p></body></html>", Q_NULLPTR));
        multisigTabWidget->setTabText(multisigTabWidget->indexOf(createTransactionTab), QApplication::translate("MultisigDialog", "&Create MultiSignature Tx", Q_NULLPTR));
        transactionHexLabel->setText(QApplication::translate("MultisigDialog", "Transaction Hex:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        transactionHex->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        signButton->setToolTip(QApplication::translate("MultisigDialog", "Sign the transaction from this wallet or from provided private keys", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        signButton->setText(QApplication::translate("MultisigDialog", "S&ign", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        commitButton->setToolTip(QApplication::translate("MultisigDialog", "<html><head/><body><p>DISABLED until transaction has been signed enough times.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        commitButton->setText(QApplication::translate("MultisigDialog", "Co&mmit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addPrivKeyButton->setToolTip(QApplication::translate("MultisigDialog", "Add private keys to sign the transaction with", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addPrivKeyButton->setText(QApplication::translate("MultisigDialog", "Add Private &Key", Q_NULLPTR));
        addPrivKeyLabel->setText(QApplication::translate("MultisigDialog", "Sign with only private keys (Not Recommened)", Q_NULLPTR));
        signButtonStatusLabel->setText(QApplication::translate("MultisigDialog", "Status:", Q_NULLPTR));
        multisigTabWidget->setTabText(multisigTabWidget->indexOf(signMultisigTransaction), QApplication::translate("MultisigDialog", "&Sign MultiSignature Tx", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MultisigDialog: public Ui_MultisigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTISIGDIALOG_H
