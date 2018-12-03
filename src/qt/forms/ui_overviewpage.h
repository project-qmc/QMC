/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
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
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QWidget *wid1;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_5;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *labelBalanceText;
    QLabel *labelTotalText;
    QLabel *labelSpendable;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelTotalText2;
    QLabel *labelPendingText;
    QLabel *labelUnconfirmed;
    QLabel *labelWatchImmature;
    QLabel *labelWatchonly;
    QLabel *labelBalance;
    QLabel *labelImmatureText;
    QLabel *labelTotal2;
    QLabel *labelWatchTotal;
    QLabel *labelTotal;
    QLabel *labelWatchAvailable;
    QLabel *labelImmature;
    QLabel *labelWatchPending;
    QSpacerItem *horizontalSpacer_8;
    QFrame *lineWatchBalance;
    QFrame *lineSpendableBalance;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_3;
    QWidget *wid2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTransactionsStatus;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_4;
    QListView *listTransactions;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_5;
    QWidget *wid3;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5z;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_5;
    QGridLayout *gridLayout_3;
    QLabel *labelLockedBalanceText;
    QLabel *labelUnLockedBalance;
    QSpacerItem *horizontalSpacer_6;
    QLabel *labelQMCPercent;
    QLabel *labelzQMCPercent;
    QFrame *lineSpendableBalance_3;
    QFrame *lineWatchBalance_3;
    QLabel *labelUnLockedBalanceText;
    QLabel *labelBalanceTextz;
    QLabel *labelTotalz;
    QLabel *labelTotalTextz;
    QSpacerItem *horizontalSpacer_10;
    QLabel *labelzBalancez;
    QLabel *labelzBalanceTextz;
    QLabel *labelBalancez;
    QLabel *label100Percent;
    QLabel *labelLockedBalance;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(960, 854);
        OverviewPage->setMinimumSize(QSize(960, 0));
        OverviewPage->setStyleSheet(QLatin1String("QWidget#OverviewPage\n"
"{\n"
"	background: #4d4d4d;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QFrame[frameShape=\"4\"],\n"
"QFrame[frameShape=\"5\"]\n"
"{\n"
"	background: grey;\n"
"	border: none;\n"
"	max-height: 1px;\n"
"}\n"
"\n"
"QWidget#wid1, QWidget#wid2, QWidget#wid3\n"
"{\n"
"	background: #404040;\n"
"	border: 1px solid transparent;\n"
"	border-radius: 6px;\n"
"	color: #FFFFFFF;\n"
"}\n"
"\n"
"QFrame\n"
"{\n"
"	border: none;\n"
"}\n"
""));
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
        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(OverviewPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        wid1 = new QWidget(frame);
        wid1->setObjectName(QStringLiteral("wid1"));
        verticalLayout_10 = new QVBoxLayout(wid1);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));

        horizontalLayout_4->addLayout(verticalLayout_8);

        label_5 = new QLabel(wid1);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QLabel(wid1);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelWalletStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelWalletStatus->setText(QStringLiteral("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_10->addLayout(horizontalLayout_4);

        label = new QLabel(wid1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_10->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_10->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelBalanceText = new QLabel(wid1);
        labelBalanceText->setObjectName(QStringLiteral("labelBalanceText"));

        gridLayout->addWidget(labelBalanceText, 1, 0, 1, 1);

        labelTotalText = new QLabel(wid1);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));

        gridLayout->addWidget(labelTotalText, 5, 0, 1, 1);

        labelSpendable = new QLabel(wid1);
        labelSpendable->setObjectName(QStringLiteral("labelSpendable"));
        labelSpendable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelSpendable, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 5, 1, 1);

        labelTotalText2 = new QLabel(wid1);
        labelTotalText2->setObjectName(QStringLiteral("labelTotalText2"));

        gridLayout->addWidget(labelTotalText2, 7, 0, 1, 1);

        labelPendingText = new QLabel(wid1);
        labelPendingText->setObjectName(QStringLiteral("labelPendingText"));

        gridLayout->addWidget(labelPendingText, 2, 0, 1, 1);

        labelUnconfirmed = new QLabel(wid1);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setFont(font);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUnconfirmed, 2, 2, 1, 1);

        labelWatchImmature = new QLabel(wid1);
        labelWatchImmature->setObjectName(QStringLiteral("labelWatchImmature"));
        labelWatchImmature->setFont(font);
        labelWatchImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelWatchImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchImmature, 3, 4, 1, 1);

        labelWatchonly = new QLabel(wid1);
        labelWatchonly->setObjectName(QStringLiteral("labelWatchonly"));
        labelWatchonly->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelWatchonly, 0, 4, 1, 1);

        labelBalance = new QLabel(wid1);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        labelBalance->setFont(font);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBalance, 1, 2, 1, 1);

        labelImmatureText = new QLabel(wid1);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));

        gridLayout->addWidget(labelImmatureText, 3, 0, 1, 1);

        labelTotal2 = new QLabel(wid1);
        labelTotal2->setObjectName(QStringLiteral("labelTotal2"));
        labelTotal2->setFont(font);
        labelTotal2->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal2->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelTotal2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelTotal2, 7, 2, 1, 1);

        labelWatchTotal = new QLabel(wid1);
        labelWatchTotal->setObjectName(QStringLiteral("labelWatchTotal"));
        labelWatchTotal->setFont(font);
        labelWatchTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelWatchTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchTotal, 5, 4, 1, 1);

        labelTotal = new QLabel(wid1);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setFont(font);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelTotal, 5, 2, 1, 1);

        labelWatchAvailable = new QLabel(wid1);
        labelWatchAvailable->setObjectName(QStringLiteral("labelWatchAvailable"));
        labelWatchAvailable->setFont(font);
        labelWatchAvailable->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchAvailable->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelWatchAvailable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchAvailable, 1, 4, 1, 1);

        labelImmature = new QLabel(wid1);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font);
        labelImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelImmature, 3, 2, 1, 1);

        labelWatchPending = new QLabel(wid1);
        labelWatchPending->setObjectName(QStringLiteral("labelWatchPending"));
        labelWatchPending->setFont(font);
        labelWatchPending->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchPending->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelWatchPending->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchPending, 2, 4, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 2, 1, 1, 1);

        lineWatchBalance = new QFrame(wid1);
        lineWatchBalance->setObjectName(QStringLiteral("lineWatchBalance"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineWatchBalance->sizePolicy().hasHeightForWidth());
        lineWatchBalance->setSizePolicy(sizePolicy);
        lineWatchBalance->setMinimumSize(QSize(140, 0));
        lineWatchBalance->setFrameShadow(QFrame::Plain);
        lineWatchBalance->setFrameShape(QFrame::HLine);

        gridLayout->addWidget(lineWatchBalance, 4, 4, 1, 1);

        lineSpendableBalance = new QFrame(wid1);
        lineSpendableBalance->setObjectName(QStringLiteral("lineSpendableBalance"));
        lineSpendableBalance->setFrameShadow(QFrame::Plain);
        lineSpendableBalance->setFrameShape(QFrame::HLine);

        gridLayout->addWidget(lineSpendableBalance, 4, 0, 1, 3);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 2, 3, 1, 1);


        verticalLayout_10->addLayout(gridLayout);


        verticalLayout_7->addWidget(wid1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_3);

        wid2 = new QWidget(frame);
        wid2->setObjectName(QStringLiteral("wid2"));
        verticalLayout = new QVBoxLayout(wid2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelTransactionsStatus = new QLabel(wid2);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        labelTransactionsStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelTransactionsStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QStringLiteral("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        label_4 = new QLabel(wid2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        label_2 = new QLabel(wid2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        listTransactions = new QListView(wid2);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        listTransactions->setStyleSheet(QStringLiteral("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_7->addWidget(wid2);


        verticalLayout_4->addLayout(verticalLayout_7);


        verticalLayout_2->addWidget(frame);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frame_3 = new QFrame(OverviewPage);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        wid3 = new QWidget(frame_3);
        wid3->setObjectName(QStringLiteral("wid3"));
        verticalLayout_11 = new QVBoxLayout(wid3);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5z = new QLabel(wid3);
        label_5z->setObjectName(QStringLiteral("label_5z"));
        label_5z->setMaximumSize(QSize(16777215, 16777215));
        label_5z->setFont(font);

        horizontalLayout_5->addWidget(label_5z);


        verticalLayout_11->addLayout(horizontalLayout_5);

        label_3 = new QLabel(wid3);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_11->addWidget(label_3);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_11->addItem(verticalSpacer_5);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(12);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        labelLockedBalanceText = new QLabel(wid3);
        labelLockedBalanceText->setObjectName(QStringLiteral("labelLockedBalanceText"));

        gridLayout_3->addWidget(labelLockedBalanceText, 2, 0, 1, 1);

        labelUnLockedBalance = new QLabel(wid3);
        labelUnLockedBalance->setObjectName(QStringLiteral("labelUnLockedBalance"));
        labelUnLockedBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(labelUnLockedBalance, 3, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 4, 5, 1, 1);

        labelQMCPercent = new QLabel(wid3);
        labelQMCPercent->setObjectName(QStringLiteral("labelQMCPercent"));
        labelQMCPercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(labelQMCPercent, 3, 4, 1, 1);

        labelzQMCPercent = new QLabel(wid3);
        labelzQMCPercent->setObjectName(QStringLiteral("labelzQMCPercent"));
        labelzQMCPercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(labelzQMCPercent, 4, 4, 1, 1);

        lineSpendableBalance_3 = new QFrame(wid3);
        lineSpendableBalance_3->setObjectName(QStringLiteral("lineSpendableBalance_3"));
        lineSpendableBalance_3->setEnabled(true);
        lineSpendableBalance_3->setFrameShadow(QFrame::Plain);
        lineSpendableBalance_3->setFrameShape(QFrame::HLine);

        gridLayout_3->addWidget(lineSpendableBalance_3, 7, 0, 1, 3);

        lineWatchBalance_3 = new QFrame(wid3);
        lineWatchBalance_3->setObjectName(QStringLiteral("lineWatchBalance_3"));
        sizePolicy.setHeightForWidth(lineWatchBalance_3->sizePolicy().hasHeightForWidth());
        lineWatchBalance_3->setSizePolicy(sizePolicy);
        lineWatchBalance_3->setMinimumSize(QSize(140, 0));
        lineWatchBalance_3->setFrameShadow(QFrame::Plain);
        lineWatchBalance_3->setFrameShape(QFrame::HLine);

        gridLayout_3->addWidget(lineWatchBalance_3, 7, 4, 1, 1);

        labelUnLockedBalanceText = new QLabel(wid3);
        labelUnLockedBalanceText->setObjectName(QStringLiteral("labelUnLockedBalanceText"));

        gridLayout_3->addWidget(labelUnLockedBalanceText, 3, 0, 1, 1);

        labelBalanceTextz = new QLabel(wid3);
        labelBalanceTextz->setObjectName(QStringLiteral("labelBalanceTextz"));

        gridLayout_3->addWidget(labelBalanceTextz, 1, 0, 1, 1);

        labelTotalz = new QLabel(wid3);
        labelTotalz->setObjectName(QStringLiteral("labelTotalz"));
        labelTotalz->setFont(font);
        labelTotalz->setCursor(QCursor(Qt::IBeamCursor));
        labelTotalz->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelTotalz->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotalz->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(labelTotalz, 6, 2, 1, 1);

        labelTotalTextz = new QLabel(wid3);
        labelTotalTextz->setObjectName(QStringLiteral("labelTotalTextz"));

        gridLayout_3->addWidget(labelTotalTextz, 6, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_10, 2, 1, 1, 1);

        labelzBalancez = new QLabel(wid3);
        labelzBalancez->setObjectName(QStringLiteral("labelzBalancez"));
        labelzBalancez->setFont(font);
        labelzBalancez->setCursor(QCursor(Qt::IBeamCursor));
        labelzBalancez->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelzBalancez->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelzBalancez->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(labelzBalancez, 4, 2, 1, 1);

        labelzBalanceTextz = new QLabel(wid3);
        labelzBalanceTextz->setObjectName(QStringLiteral("labelzBalanceTextz"));

        gridLayout_3->addWidget(labelzBalanceTextz, 4, 0, 1, 1);

        labelBalancez = new QLabel(wid3);
        labelBalancez->setObjectName(QStringLiteral("labelBalancez"));
        labelBalancez->setFont(font);
        labelBalancez->setCursor(QCursor(Qt::IBeamCursor));
        labelBalancez->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 QMC"));
        labelBalancez->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalancez->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(labelBalancez, 1, 2, 1, 1);

        label100Percent = new QLabel(wid3);
        label100Percent->setObjectName(QStringLiteral("label100Percent"));
        label100Percent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label100Percent, 6, 4, 1, 1);

        labelLockedBalance = new QLabel(wid3);
        labelLockedBalance->setObjectName(QStringLiteral("labelLockedBalance"));
        labelLockedBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(labelLockedBalance, 2, 2, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_11, 2, 3, 1, 1);


        verticalLayout_11->addLayout(gridLayout_3);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_11->addItem(verticalSpacer_6);


        verticalLayout_5->addWidget(wid3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setTextFormat(Qt::RichText);
        label_6->setScaledContents(true);

        verticalLayout_5->addWidget(label_6);


        verticalLayout_3->addWidget(frame_3);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(3, 1);

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
        label->setText(QApplication::translate("OverviewPage", "<hr>", Q_NULLPTR));
        labelBalanceText->setText(QApplication::translate("OverviewPage", "Available:", Q_NULLPTR));
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", Q_NULLPTR));
        labelSpendable->setText(QApplication::translate("OverviewPage", "Spendable:", Q_NULLPTR));
        labelTotalText2->setText(QApplication::translate("OverviewPage", "Required MN Collateral:", Q_NULLPTR));
        labelPendingText->setText(QApplication::translate("OverviewPage", "Pending:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards in watch-only addresses that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelWatchonly->setText(QApplication::translate("OverviewPage", "Watch-only:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTotal2->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchTotal->setToolTip(QApplication::translate("OverviewPage", "Current total balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchAvailable->setToolTip(QApplication::translate("OverviewPage", "Your current balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchPending->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the QMC network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("OverviewPage", "Recent transactions", Q_NULLPTR));
        label_2->setText(QApplication::translate("OverviewPage", "<hr>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_5z->setToolTip(QApplication::translate("OverviewPage", "Combined Balances (including unconfirmed and immature coins)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_5z->setText(QApplication::translate("OverviewPage", "<html><head/><body><p>Combined Balances</p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("OverviewPage", "<hr>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelLockedBalanceText->setToolTip(QApplication::translate("OverviewPage", "Locked QMC or Masternode collaterals. These are excluded from zQMC minting.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelLockedBalanceText->setText(QApplication::translate("OverviewPage", "Locked:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelUnLockedBalance->setToolTip(QApplication::translate("OverviewPage", "Unlocked QMCs. These can be used for zQMC minting.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelUnLockedBalance->setText(QApplication::translate("OverviewPage", "0.000\342\200\211000\342\200\21100 QMC", Q_NULLPTR));
        labelQMCPercent->setText(QApplication::translate("OverviewPage", "0 %", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelzQMCPercent->setToolTip(QApplication::translate("OverviewPage", "Current percentage of zQMC.\n"
"If AutoMint is enabled this percentage will settle around the configured AutoMint percentage (default = 10%)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelzQMCPercent->setText(QApplication::translate("OverviewPage", "0 %", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelUnLockedBalanceText->setToolTip(QApplication::translate("OverviewPage", "Unlocked QMCs. These can be used for zQMC minting.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelUnLockedBalanceText->setText(QApplication::translate("OverviewPage", "Unlocked:", Q_NULLPTR));
        labelBalanceTextz->setText(QApplication::translate("OverviewPage", "QMC:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTotalz->setToolTip(QApplication::translate("OverviewPage", "Total Balance, including unconfirmed and immature coins.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTotalTextz->setText(QApplication::translate("OverviewPage", "Total:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelzBalancez->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelzBalanceTextz->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        labelzBalanceTextz->setText(QApplication::translate("OverviewPage", "zQMC:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelBalancez->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label100Percent->setText(QString());
#ifndef QT_NO_TOOLTIP
        labelLockedBalance->setToolTip(QApplication::translate("OverviewPage", "Locked QMC or Masternode collaterals. These are excluded from zQMC minting.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelLockedBalance->setText(QApplication::translate("OverviewPage", "0.000\342\200\211000\342\200\21100 QMC", Q_NULLPTR));
        label_6->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><img src=':/images/qmc_logo_horizontal'/></p><hr/><p><a href=\"https://www.qmc.network\"><span style=\" font-weight:600; text-decoration: underline; color:#ff9c00;\">Visit the Official Website</span></a><span style=\" font-weight:600;\"><br/></span><a href=\"http://poker.qmc.network\"><span style=\" font-weight:600; text-decoration: underline; color:#ff9c00;\">Play QMC Poker</span></a><span style=\" font-weight:600;\"><br/></span><a href=\"https://wallet.escodex.com/market/ESCODEX.QMC_ESCODEX.BTC\"><span style=\" font-weight:600; text-decoration: underline; color:#ff9c00;\">Buy/Sell QMC with Bitcoin</span></a><span style=\" font-weight:600;\"><br/></span><a href=\"https://chainmapper.com/qmc/\"><span style=\" font-weight:600; text-decoration: underline; color:#ff9c00;\">ChainMapper and information</span></a><span style=\" font-weight:600;\"><br/></span><a href=\"https://mn.gtmcoin.io/master-nodes/edit?coin=147\"><span style=\" font-weight:600; text-decoration: underline; "
                        "color:#ff9c00;\">Share Masternodes</span></a><span style=\" font-weight:600;\"><br/></span><a href=\"https://discord.gg/fvzMCwA\"><span style=\" font-weight:600; text-decoration: underline; color:#ff9c00;\">Join our Discord</span></a><span style=\" font-weight:600;\"><br/></span><a href=\"https://t.me/QMC_Network\"><span style=\" font-weight:600; text-decoration: underline; color:#ff9c00;\">Join us on Telegram</span></a><span style=\" font-weight:600;\"><br/></span><a href=\"https://twitter.com/NetworkQmc\"><span style=\" font-weight:600; text-decoration: underline; color:#ff9c00;\">Follow us on Twitter</span></a><span style=\" font-weight:600;\"><br/></span><a href=\"https://www.vultr.com/?ref=7598003\"><span style=\" font-weight:600; text-decoration: underline; color:#ff9c00;\">Best VPS for MN</span></a></p></body></html>", Q_NULLPTR));
    label_6->setAlignment(Qt::AlignCenter);
    label_6->setOpenExternalLinks(true);
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
