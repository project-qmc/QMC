/********************************************************************************
** Form generated from reading UI file 'masternodelist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERNODELIST_H
#define UI_MASTERNODELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MasternodeList
{
public:
    QVBoxLayout *topLayout;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_note;
    QLabel *updateNote;
    QTableWidget *tableWidgetMyMasternodes;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *startButton;
    QPushButton *startAllButton;
    QPushButton *startMissingButton;
    QPushButton *UpdateButton;
    QLabel *autoupdate_label;
    QLabel *secondsLabel;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *MasternodeList)
    {
        if (MasternodeList->objectName().isEmpty())
            MasternodeList->setObjectName(QStringLiteral("MasternodeList"));
        MasternodeList->resize(725, 457);
        topLayout = new QVBoxLayout(MasternodeList);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(10, 10, 10, 10);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_note = new QHBoxLayout();
        horizontalLayout_note->setObjectName(QStringLiteral("horizontalLayout_note"));
        horizontalLayout_note->setContentsMargins(-1, -1, -1, 0);
        updateNote = new QLabel(MasternodeList);
        updateNote->setObjectName(QStringLiteral("updateNote"));

        horizontalLayout_note->addWidget(updateNote);


        verticalLayout_2->addLayout(horizontalLayout_note);

        tableWidgetMyMasternodes = new QTableWidget(MasternodeList);
        if (tableWidgetMyMasternodes->columnCount() < 8)
            tableWidgetMyMasternodes->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidgetMyMasternodes->setObjectName(QStringLiteral("tableWidgetMyMasternodes"));
        tableWidgetMyMasternodes->setMinimumSize(QSize(695, 0));
        QPalette palette;
        QBrush brush(QColor(51, 51, 51, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(85, 85, 85, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        tableWidgetMyMasternodes->setPalette(palette);
        tableWidgetMyMasternodes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetMyMasternodes->setAlternatingRowColors(true);
        tableWidgetMyMasternodes->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetMyMasternodes->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetMyMasternodes->setSortingEnabled(true);
        tableWidgetMyMasternodes->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(tableWidgetMyMasternodes);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        startButton = new QPushButton(MasternodeList);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setMinimumSize(QSize(100, 30));
        startButton->setMaximumSize(QSize(100, 30));

        horizontalLayout_5->addWidget(startButton);

        startAllButton = new QPushButton(MasternodeList);
        startAllButton->setObjectName(QStringLiteral("startAllButton"));
        startAllButton->setMinimumSize(QSize(100, 30));
        startAllButton->setMaximumSize(QSize(100, 30));

        horizontalLayout_5->addWidget(startAllButton);

        startMissingButton = new QPushButton(MasternodeList);
        startMissingButton->setObjectName(QStringLiteral("startMissingButton"));
        startMissingButton->setMinimumSize(QSize(120, 30));
        startMissingButton->setMaximumSize(QSize(120, 30));

        horizontalLayout_5->addWidget(startMissingButton);

        UpdateButton = new QPushButton(MasternodeList);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));
        UpdateButton->setMinimumSize(QSize(120, 30));
        UpdateButton->setMaximumSize(QSize(120, 30));

        horizontalLayout_5->addWidget(UpdateButton);

        autoupdate_label = new QLabel(MasternodeList);
        autoupdate_label->setObjectName(QStringLiteral("autoupdate_label"));

        horizontalLayout_5->addWidget(autoupdate_label);

        secondsLabel = new QLabel(MasternodeList);
        secondsLabel->setObjectName(QStringLiteral("secondsLabel"));

        horizontalLayout_5->addWidget(secondsLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);


        topLayout->addLayout(gridLayout_2);


        retranslateUi(MasternodeList);

        QMetaObject::connectSlotsByName(MasternodeList);
    } // setupUi

    void retranslateUi(QWidget *MasternodeList)
    {
        MasternodeList->setWindowTitle(QApplication::translate("MasternodeList", "Form", Q_NULLPTR));
        updateNote->setText(QApplication::translate("MasternodeList", "Note: Status of your masternodes in local wallet can potentially be slightly incorrect.<br />Always wait for wallet to sync additional data and then double check from another node<br />if your node should be running but you still see \"MISSING\" in \"Status\" field.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetMyMasternodes->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MasternodeList", "Alias", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetMyMasternodes->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MasternodeList", "Address", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetMyMasternodes->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MasternodeList", "Protocol", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetMyMasternodes->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MasternodeList", "NEW_MN_COLLAT_REQ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetMyMasternodes->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MasternodeList", "Status", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetMyMasternodes->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MasternodeList", "Active", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetMyMasternodes->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MasternodeList", "Last Seen (UTC)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetMyMasternodes->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MasternodeList", "Pubkey", Q_NULLPTR));
        startButton->setText(QApplication::translate("MasternodeList", "S&tart alias", Q_NULLPTR));
        startAllButton->setText(QApplication::translate("MasternodeList", "Start &all", Q_NULLPTR));
        startMissingButton->setText(QApplication::translate("MasternodeList", "Start &MISSING", Q_NULLPTR));
        UpdateButton->setText(QApplication::translate("MasternodeList", "&Update status", Q_NULLPTR));
        autoupdate_label->setText(QApplication::translate("MasternodeList", "Status will be updated automatically in (sec):", Q_NULLPTR));
        secondsLabel->setText(QApplication::translate("MasternodeList", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MasternodeList: public Ui_MasternodeList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERNODELIST_H
