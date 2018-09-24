/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *topLayout;
    QLabel *labelAlerts;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QLabel *labelUnconfirmed;
    QLabel *labelWatchImmature;
    QLabel *labelImmature;
    QSpacerItem *horizontalSpacer_2;
    QFrame *lineSpendableBalance;
    QFrame *lineWatchBalance;
    QLabel *labelTotalText;
    QLabel *labelTotalText2;
    QLabel *labelTotal2;
    QLabel *labelWatchTotal;
    QLabel *labelWatchPending;
    QLabel *labelSpendable;
    QLabel *labelWatchonly;
    QLabel *labelBalanceText;
    QLabel *labelBalance;
    QLabel *labelImmatureText;
    QLabel *labelTotal;
    QLabel *labelWatchAvailable;
    QLabel *labelPendingText;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTransactionsStatus;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QListView *listTransactions;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5z;
    QGridLayout *gridLayout_3;
    QFrame *lineSpendableBalance_3;
    QFrame *lineWatchBalance_3;
    QLabel *labelTotalz;
    QLabel *labelTotalTextz;
    QLabel *labelBalanceTextz;
    QLabel *labelBalancez;
    QLabel *label100Percent;
    QSpacerItem *horizontalSpacer_6;
    QLabel *labelzQMCPercent;
    QLabel *labelzBalancez;
    QLabel *labelzBalanceTextz;
    QLabel *labelLockedBalance;
    QLabel *labelLockedBalanceText;
    QLabel *labelQMCPercent;
    QLabel *labelUnLockedBalance;
    QLabel *labelUnLockedBalanceText;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(960, 854);
        OverviewPage->setMinimumSize(QSize(960, 0));
        topLayout = new QVBoxLayout(OverviewPage);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        labelAlerts = new QLabel(OverviewPage);
        labelAlerts->setObjectName(QStringLiteral("labelAlerts"));
        labelAlerts->setVisible(false);
        labelAlerts->setStyleSheet(QStringLiteral("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000;"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);

        topLayout->addWidget(labelAlerts);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(OverviewPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QLabel(frame);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelWalletStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelWalletStatus->setText(QStringLiteral("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setFont(font);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUnconfirmed, 2, 1, 1, 1);

        labelWatchImmature = new QLabel(frame);
        labelWatchImmature->setObjectName(QStringLiteral("labelWatchImmature"));
        labelWatchImmature->setFont(font);
        labelWatchImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelWatchImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchImmature, 3, 2, 1, 1);

        labelImmature = new QLabel(frame);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font);
        labelImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelImmature, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        lineSpendableBalance = new QFrame(frame);
        lineSpendableBalance->setObjectName(QStringLiteral("lineSpendableBalance"));
        lineSpendableBalance->setFrameShape(QFrame::HLine);
        lineSpendableBalance->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lineSpendableBalance, 4, 0, 1, 2);

        lineWatchBalance = new QFrame(frame);
        lineWatchBalance->setObjectName(QStringLiteral("lineWatchBalance"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineWatchBalance->sizePolicy().hasHeightForWidth());
        lineWatchBalance->setSizePolicy(sizePolicy);
        lineWatchBalance->setMinimumSize(QSize(140, 0));
        lineWatchBalance->setFrameShape(QFrame::HLine);
        lineWatchBalance->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lineWatchBalance, 4, 2, 1, 1);

        labelTotalText = new QLabel(frame);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));

        gridLayout->addWidget(labelTotalText, 5, 0, 1, 1);

        labelTotalText2 = new QLabel(frame);
        labelTotalText2->setObjectName(QStringLiteral("labelTotalText2"));

        gridLayout->addWidget(labelTotalText2, 7, 0, 1, 1);

        labelTotal2 = new QLabel(frame);
        labelTotal2->setObjectName(QStringLiteral("labelTotal2"));
        labelTotal2->setFont(font);
        labelTotal2->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal2->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelTotal2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelTotal2, 7, 1, 1, 1);

        labelWatchTotal = new QLabel(frame);
        labelWatchTotal->setObjectName(QStringLiteral("labelWatchTotal"));
        labelWatchTotal->setFont(font);
        labelWatchTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelWatchTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchTotal, 5, 2, 1, 1);

        labelWatchPending = new QLabel(frame);
        labelWatchPending->setObjectName(QStringLiteral("labelWatchPending"));
        labelWatchPending->setFont(font);
        labelWatchPending->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchPending->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelWatchPending->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchPending, 2, 2, 1, 1);

        labelSpendable = new QLabel(frame);
        labelSpendable->setObjectName(QStringLiteral("labelSpendable"));
        labelSpendable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelSpendable, 0, 1, 1, 1);

        labelWatchonly = new QLabel(frame);
        labelWatchonly->setObjectName(QStringLiteral("labelWatchonly"));
        labelWatchonly->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelWatchonly, 0, 2, 1, 1);

        labelBalanceText = new QLabel(frame);
        labelBalanceText->setObjectName(QStringLiteral("labelBalanceText"));

        gridLayout->addWidget(labelBalanceText, 1, 0, 1, 1);

        labelBalance = new QLabel(frame);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        labelBalance->setFont(font);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBalance, 1, 1, 1, 1);

        labelImmatureText = new QLabel(frame);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));

        gridLayout->addWidget(labelImmatureText, 3, 0, 1, 1);

        labelTotal = new QLabel(frame);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setFont(font);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelTotal, 5, 1, 1, 1);

        labelWatchAvailable = new QLabel(frame);
        labelWatchAvailable->setObjectName(QStringLiteral("labelWatchAvailable"));
        labelWatchAvailable->setFont(font);
        labelWatchAvailable->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchAvailable->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelWatchAvailable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchAvailable, 1, 2, 1, 1);

        labelPendingText = new QLabel(frame);
        labelPendingText->setObjectName(QStringLiteral("labelPendingText"));

        gridLayout->addWidget(labelPendingText, 2, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelTransactionsStatus = new QLabel(frame_2);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        labelTransactionsStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelTransactionsStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QStringLiteral("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        listTransactions = new QListView(frame_2);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        listTransactions->setStyleSheet(QStringLiteral("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_4->addWidget(frame_2);


        verticalLayout_2->addWidget(frame);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frame_3 = new QFrame(OverviewPage);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5z = new QLabel(frame_3);
        label_5z->setObjectName(QStringLiteral("label_5z"));
        label_5z->setMaximumSize(QSize(16777215, 16777215));
        label_5z->setFont(font);

        horizontalLayout_5->addWidget(label_5z);


        verticalLayout_5->addLayout(horizontalLayout_5);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(12);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lineSpendableBalance_3 = new QFrame(frame_3);
        lineSpendableBalance_3->setObjectName(QStringLiteral("lineSpendableBalance_3"));
        lineSpendableBalance_3->setFrameShape(QFrame::HLine);
        lineSpendableBalance_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(lineSpendableBalance_3, 7, 0, 1, 2);

        lineWatchBalance_3 = new QFrame(frame_3);
        lineWatchBalance_3->setObjectName(QStringLiteral("lineWatchBalance_3"));
        sizePolicy.setHeightForWidth(lineWatchBalance_3->sizePolicy().hasHeightForWidth());
        lineWatchBalance_3->setSizePolicy(sizePolicy);
        lineWatchBalance_3->setMinimumSize(QSize(140, 0));
        lineWatchBalance_3->setFrameShape(QFrame::HLine);
        lineWatchBalance_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(lineWatchBalance_3, 7, 2, 1, 1);

        labelTotalz = new QLabel(frame_3);
        labelTotalz->setObjectName(QStringLiteral("labelTotalz"));
        labelTotalz->setFont(font);
        labelTotalz->setCursor(QCursor(Qt::IBeamCursor));
        labelTotalz->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelTotalz->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotalz->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(labelTotalz, 6, 1, 1, 1);

        labelTotalTextz = new QLabel(frame_3);
        labelTotalTextz->setObjectName(QStringLiteral("labelTotalTextz"));

        gridLayout_3->addWidget(labelTotalTextz, 6, 0, 1, 1);

        labelBalanceTextz = new QLabel(frame_3);
        labelBalanceTextz->setObjectName(QStringLiteral("labelBalanceTextz"));

        gridLayout_3->addWidget(labelBalanceTextz, 1, 0, 1, 1);

        labelBalancez = new QLabel(frame_3);
        labelBalancez->setObjectName(QStringLiteral("labelBalancez"));
        labelBalancez->setFont(font);
        labelBalancez->setCursor(QCursor(Qt::IBeamCursor));
        labelBalancez->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelBalancez->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalancez->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(labelBalancez, 1, 1, 1, 1);

        label100Percent = new QLabel(frame_3);
        label100Percent->setObjectName(QStringLiteral("label100Percent"));
        label100Percent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label100Percent, 6, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 4, 3, 1, 1);

        labelzQMCPercent = new QLabel(frame_3);
        labelzQMCPercent->setObjectName(QStringLiteral("labelzQMCPercent"));
        labelzQMCPercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(labelzQMCPercent, 4, 2, 1, 1);

        labelzBalancez = new QLabel(frame_3);
        labelzBalancez->setObjectName(QStringLiteral("labelzBalancez"));
        labelzBalancez->setFont(font);
        labelzBalancez->setCursor(QCursor(Qt::IBeamCursor));
        labelzBalancez->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelzBalancez->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelzBalancez->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(labelzBalancez, 4, 1, 1, 1);

        labelzBalanceTextz = new QLabel(frame_3);
        labelzBalanceTextz->setObjectName(QStringLiteral("labelzBalanceTextz"));

        gridLayout_3->addWidget(labelzBalanceTextz, 4, 0, 1, 1);

        labelLockedBalance = new QLabel(frame_3);
        labelLockedBalance->setObjectName(QStringLiteral("labelLockedBalance"));
        labelLockedBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(labelLockedBalance, 2, 1, 1, 1);

        labelLockedBalanceText = new QLabel(frame_3);
        labelLockedBalanceText->setObjectName(QStringLiteral("labelLockedBalanceText"));

        gridLayout_3->addWidget(labelLockedBalanceText, 2, 0, 1, 1);

        labelQMCPercent = new QLabel(frame_3);
        labelQMCPercent->setObjectName(QStringLiteral("labelQMCPercent"));
        labelQMCPercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(labelQMCPercent, 3, 2, 1, 1);

        labelUnLockedBalance = new QLabel(frame_3);
        labelUnLockedBalance->setObjectName(QStringLiteral("labelUnLockedBalance"));
        labelUnLockedBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(labelUnLockedBalance, 3, 1, 1, 1);

        labelUnLockedBalanceText = new QLabel(frame_3);
        labelUnLockedBalanceText->setObjectName(QStringLiteral("labelUnLockedBalanceText"));

        gridLayout_3->addWidget(labelUnLockedBalanceText, 3, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        verticalLayout_3->addWidget(frame_3);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        topLayout->addLayout(horizontalLayout);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", Q_NULLPTR));
        label_5->setText(QApplication::translate("OverviewPage", "QMC Balances", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the QMC network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards in watch-only addresses that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", Q_NULLPTR));
        labelTotalText2->setText(QApplication::translate("OverviewPage", "Required MN Collateral:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTotal2->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchTotal->setToolTip(QApplication::translate("OverviewPage", "Current total balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchPending->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelSpendable->setText(QApplication::translate("OverviewPage", "Spendable:", Q_NULLPTR));
        labelWatchonly->setText(QApplication::translate("OverviewPage", "Watch-only:", Q_NULLPTR));
        labelBalanceText->setText(QApplication::translate("OverviewPage", "Available:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchAvailable->setToolTip(QApplication::translate("OverviewPage", "Your current balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelPendingText->setText(QApplication::translate("OverviewPage", "Pending:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the QMC network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("OverviewPage", "Recent transactions", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_5z->setToolTip(QApplication::translate("OverviewPage", "Combined Balances (including unconfirmed and immature coins)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_5z->setText(QApplication::translate("OverviewPage", "<html><head/><body><p>Combined Balances</p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTotalz->setToolTip(QApplication::translate("OverviewPage", "Total Balance, including unconfirmed and immature coins.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTotalTextz->setText(QApplication::translate("OverviewPage", "Total:", Q_NULLPTR));
        labelBalanceTextz->setText(QApplication::translate("OverviewPage", "QMC:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelBalancez->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label100Percent->setText(QString());
#ifndef QT_NO_TOOLTIP
        labelzQMCPercent->setToolTip(QApplication::translate("OverviewPage", "Current percentage of zQMC.\n"
"If AutoMint is enabled this percentage will settle around the configured AutoMint percentage (default = 10%)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelzQMCPercent->setText(QApplication::translate("OverviewPage", "0 %", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelzBalancez->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelzBalanceTextz->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        labelzBalanceTextz->setText(QApplication::translate("OverviewPage", "zQMC:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelLockedBalance->setToolTip(QApplication::translate("OverviewPage", "Locked QMC or Masternode collaterals. These are excluded from zQMC minting.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelLockedBalance->setText(QApplication::translate("OverviewPage", "0.000\342\200\211000\342\200\21100 QMC", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelLockedBalanceText->setToolTip(QApplication::translate("OverviewPage", "Locked QMC or Masternode collaterals. These are excluded from zQMC minting.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelLockedBalanceText->setText(QApplication::translate("OverviewPage", "Locked:", Q_NULLPTR));
        labelQMCPercent->setText(QApplication::translate("OverviewPage", "0 %", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelUnLockedBalance->setToolTip(QApplication::translate("OverviewPage", "Unlocked QMCs. These can be used for zQMC minting.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelUnLockedBalance->setText(QApplication::translate("OverviewPage", "0.000\342\200\211000\342\200\21100 QMC", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelUnLockedBalanceText->setToolTip(QApplication::translate("OverviewPage", "Unlocked QMCs. These can be used for zQMC minting.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelUnLockedBalanceText->setText(QApplication::translate("OverviewPage", "Unlocked:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
