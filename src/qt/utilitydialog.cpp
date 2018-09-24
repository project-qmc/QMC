// Copyright (c) 2011-2014 The Bitcoin developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2017 The PIVX developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "utilitydialog.h"

#include "ui_helpmessagedialog.h"

#include "bitcoingui.h"
#include "clientmodel.h"
#include "guiconstants.h"
#include "intro.h"
#include "guiutil.h"

#include "clientversion.h"
#include "init.h"
#include "util.h"

#include <stdio.h>

#include <QCloseEvent>
#include <QLabel>
#include <QRegExp>
#include <QTextTable>
#include <QTextCursor>
#include <QVBoxLayout>

/** "Help message" or "About" dialog box */
HelpMessageDialog::HelpMessageDialog(QWidget* parent, bool about) : QDialog(parent),
                                                                    ui(new Ui::HelpMessageDialog)
{
    ui->setupUi(this);
    GUIUtil::restoreWindowGeometry("nHelpMessageDialogWindow", this->size(), this);

    QString version = tr("QMC Core") + " " + tr("version") + " " + QString::fromStdString(FormatFullVersion());
/* On x86 add a bit specifier to the version so that users can distinguish between
     * 32 and 64 bit builds. On other architectures, 32/64 bit may be more ambigious.
     */
#if defined(__x86_64__)
    version += " " + tr("(%1-bit)").arg(64);
#elif defined(__i386__)
    version += " " + tr("(%1-bit)").arg(32);
#endif

    if (about) {
        setWindowTitle(tr("About QMC Core"));

        /// HTML-format the license message from the core
        QString licenseInfo = QString::fromStdString(LicenseInfo());
        QString licenseInfoHTML = licenseInfo;

        // Make URLs clickable
        QRegExp uri("<(.*)>", Qt::CaseSensitive, QRegExp::RegExp2);
        uri.setMinimal(true); // use non-greedy matching
        licenseInfoHTML.replace(uri, "<a href=\"\\1\">\\1</a>");
        // Replace newlines with HTML breaks
        licenseInfoHTML.replace("\n\n", "<br><br>");

        ui->aboutMessage->setTextFormat(Qt::RichText);
        ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        text = version + "\n" + licenseInfo;
        ui->aboutMessage->setText(version + "<br><br>" + licenseInfoHTML);
        ui->aboutMessage->setWordWrap(true);
        ui->helpMessage->setVisible(false);
    } else {
        setWindowTitle("ROI and Stats Information");
        QString header = tr("Usage:") + "\n" +
                         "  qmc-qt [" + tr("command-line options") + "]                     " + "\n";
        QTextCursor cursor(ui->helpMessage->document());
	cursor.insertBlock();
/*	cursor.insertText("Node	Collateral");
cursor.insertBlock();
cursor.insertText("1	2,000");
cursor.insertBlock();
cursor.insertText("31	2,400");
cursor.insertBlock();
cursor.insertText("61	2,550");cursor.insertBlock();
cursor.insertText("91	2,750");cursor.insertBlock();
cursor.insertText("121	2,950");cursor.insertBlock();
cursor.insertText("151	3,150");cursor.insertBlock();
cursor.insertText("181	3,350");cursor.insertBlock();
cursor.insertText("211	3,600");cursor.insertBlock();
cursor.insertText("241	3,850");cursor.insertBlock();
cursor.insertText("271	4,150");cursor.insertBlock();
cursor.insertText("301	4,400");cursor.insertBlock();
cursor.insertText("331	4,750");cursor.insertBlock();
cursor.insertText("361	5,050");cursor.insertBlock();
cursor.insertText("391	5,400");cursor.insertBlock();
cursor.insertText("421	5,800");cursor.insertBlock();
cursor.insertText("451	6,200");cursor.insertBlock();
cursor.insertText("481	6,600");cursor.insertBlock();
cursor.insertText("511	7,100");cursor.insertBlock();
*/
cursor.insertText("Node	Collateral	Reward");cursor.insertBlock();
/*cursor.insertText("1	2,000	5.20");cursor.insertBlock();
cursor.insertText("31	2,400	5.64");cursor.insertBlock();
cursor.insertText("61	2,550	7.36");cursor.insertBlock();
cursor.insertText("91	2,750	8.05");cursor.insertBlock();
cursor.insertText("121	2,950	8.45");cursor.insertBlock();
cursor.insertText("151	3,150	8.88");cursor.insertBlock();
cursor.insertText("181	3,350	9.32");cursor.insertBlock();
cursor.insertText("211	3,600	9.78");cursor.insertBlock();
cursor.insertText("241	3,850	10.27");cursor.insertBlock();
cursor.insertText("271	4,150	10.79");cursor.insertBlock();
cursor.insertText("301	4,400	11.33");cursor.insertBlock();
cursor.insertText("331	4,750	11.89");cursor.insertBlock();
cursor.insertText("361	5,050	12.49");cursor.insertBlock();
cursor.insertText("391	5,400	13.11");cursor.insertBlock();
cursor.insertText("421	5,800	13.77");cursor.insertBlock();
cursor.insertText("451	6,200	14.46");cursor.insertBlock();
cursor.insertText("481	6,600	15.18");cursor.insertBlock();
cursor.insertText("511	7,100	15.94");cursor.insertBlock();
cursor.insertText("Masternodes do not earn rewards until 6 hours after start.");cursor.insertBlock();
cursor.insertText("240 confirmation required.");cursor.insertBlock();
cursor.insertText("Coins require 360 confirmations before staking can begin.");cursor.insertBlock();
cursor.insertText("locked coins do not stake.");cursor.insertBlock();*/
cursor.insertText("1	2,000	5.20");cursor.insertBlock();
//cursor.insertText("3	2,000	1.76");cursor.insertBlock();
//cursor.insertText("5	2,000	2.80");cursor.insertBlock();
//cursor.insertText("10	2,000	3.10");cursor.insertBlock();
cursor.insertText("16	2,200	5.20");cursor.insertBlock();
//cursor.insertText("20	2,000	3.64");cursor.insertBlock();
//cursor.insertText("25	2,000	4.30");cursor.insertBlock();
cursor.insertText("31	2,400	5.20");cursor.insertBlock();
cursor.insertText("61	2,550	5.64");cursor.insertBlock();
cursor.insertText("91	2,750	7.36");cursor.insertBlock();
cursor.insertText("121	2,950	8.05");cursor.insertBlock();
cursor.insertText("151	3,150	8.45");cursor.insertBlock();
cursor.insertText("181	3,350	8.88");cursor.insertBlock();
cursor.insertText("211	3,600	9.32");cursor.insertBlock();
cursor.insertText("241	3,850	9.78");cursor.insertBlock();
cursor.insertText("271	4,150	10.27");cursor.insertBlock();
cursor.insertText("301	4,400	10.79");cursor.insertBlock();
cursor.insertText("331	4,750	11.33");cursor.insertBlock();
cursor.insertText("361	5,050	11.89");cursor.insertBlock();
cursor.insertText("391	5,400	12.49");cursor.insertBlock();
cursor.insertText("421	5,800	13.11");cursor.insertBlock();
cursor.insertText("451	6,200	13.77");cursor.insertBlock();
cursor.insertText("481	6,600	14.46");cursor.insertBlock();
cursor.insertText("511	7,100	15.18");cursor.insertBlock();
cursor.insertText("--------------------------");cursor.insertBlock();
cursor.insertText("70% Masternode / 30% POS");cursor.insertBlock();
cursor.insertText("Locked coins do not stake");cursor.insertBlock();
cursor.insertText("15 confirmations required");cursor.insertBlock();
cursor.insertText("Coins need to mature for 2 hours before staking");cursor.insertBlock();
cursor.insertText("Masternodes do not earn rewards until 2 hours after start");cursor.insertBlock();
        cursor.insertBlock();
        cursor.insertBlock();
        cursor.insertBlock();
        cursor.insertBlock();
        cursor.insertBlock();
        cursor.insertBlock();
        cursor.insertBlock();
        cursor.insertBlock();
        cursor.insertBlock();
        cursor.insertBlock();
        cursor.insertBlock();
        cursor.insertBlock();

        //QTextImageFormat imageFormat;
        //imageFormat.setName(":/icons/add.png");
        //cursor.insertImage(imageFormat);
	//QImage pictureImage("splash.png");
	//QString pictureUrl = QString(":/images/splash.png");
	//ui->helpMessage->document()->addResource(QTextDocument::ImageResource, QUrl(pictureUrl), QVariant(pictureImage));

// insert the picture in the document
	//cursor.insertBlock();
	//QTextImageFormat pictureFormat;
	///pictureFormat.setName(pictureUrl);
	//pictureFormat.setWidth(pictureImage.width()); // 150 pixelfor picture.png
	//cursor.insertImage(pictureFormat);
        cursor.insertText(version);
        cursor.insertBlock();
        cursor.insertText(header);
        cursor.insertBlock();

        std::string strUsage = HelpMessage(HMM_BITCOIN_QT);
        strUsage += HelpMessageGroup(tr("UI Options:").toStdString());
        strUsage += HelpMessageOpt("-choosedatadir", strprintf(tr("Choose data directory on startup (default: %u)").toStdString(), DEFAULT_CHOOSE_DATADIR));
        strUsage += HelpMessageOpt("-lang=<lang>", tr("Set language, for example \"de_DE\" (default: system locale)").toStdString());
        strUsage += HelpMessageOpt("-min", tr("Start minimized").toStdString());
        strUsage += HelpMessageOpt("-rootcertificates=<file>", tr("Set SSL root certificates for payment request (default: -system-)").toStdString());
        strUsage += HelpMessageOpt("-splash", strprintf(tr("Show splash screen on startup (default: %u)").toStdString(), DEFAULT_SPLASHSCREEN));
        QString coreOptions = QString::fromStdString(strUsage);
        text = version + "\n" + header + "\n" + coreOptions;

        QTextTableFormat tf;
        tf.setBorderStyle(QTextFrameFormat::BorderStyle_None);
        tf.setCellPadding(2);
        QVector<QTextLength> widths;
        widths << QTextLength(QTextLength::PercentageLength, 35);
        widths << QTextLength(QTextLength::PercentageLength, 65);
        tf.setColumnWidthConstraints(widths);

        QTextCharFormat bold;
        bold.setFontWeight(QFont::Bold);

        Q_FOREACH (const QString &line, coreOptions.split("\n")) {
            if (line.startsWith("  -"))
            {
                cursor.currentTable()->appendRows(1);
                cursor.movePosition(QTextCursor::PreviousCell);
                cursor.movePosition(QTextCursor::NextRow);
                cursor.insertText(line.trimmed());
                cursor.movePosition(QTextCursor::NextCell);
            } else if (line.startsWith("   ")) {
                cursor.insertText(line.trimmed()+' ');
            } else if (line.size() > 0) {
                //Title of a group
                if (cursor.currentTable())
                    cursor.currentTable()->appendRows(1);
                cursor.movePosition(QTextCursor::Down);
                cursor.insertText(line.trimmed(), bold);
                cursor.insertTable(1, 2, tf);
            }
        }

        ui->helpMessage->moveCursor(QTextCursor::Start);
        ui->scrollArea->setVisible(false);
    }
}

HelpMessageDialog::~HelpMessageDialog()
{
    GUIUtil::saveWindowGeometry("nHelpMessageDialogWindow", this);
    delete ui;
}

void HelpMessageDialog::printToConsole()
{
    // On other operating systems, the expected action is to print the message to the console.
    fprintf(stdout, "%s\n", qPrintable(text));
}

void HelpMessageDialog::showOrPrint()
{
#if defined(WIN32)
    // On Windows, show a message box, as there is no stderr/stdout in windowed applications
    exec();
#else
    // On other operating systems, print help text to console
    printToConsole();
#endif
}

void HelpMessageDialog::on_okButton_accepted()
{
    close();
}


/** "Shutdown" window */
ShutdownWindow::ShutdownWindow(QWidget* parent, Qt::WindowFlags f) : QWidget(parent, f)
{
    QVBoxLayout* layout = new QVBoxLayout();
    layout->addWidget(new QLabel(
        tr("QMC Core is shutting down...") + "<br /><br />" +
        tr("Do not shut down the computer until this window disappears.")));
    setLayout(layout);
}

void ShutdownWindow::showShutdownWindow(BitcoinGUI* window)
{
    if (!window)
        return;

    // Show a simple window indicating shutdown status
    QWidget* shutdownWindow = new ShutdownWindow();
    // We don't hold a direct pointer to the shutdown window after creation, so use
    // Qt::WA_DeleteOnClose to make sure that the window will be deleted eventually.
    shutdownWindow->setAttribute(Qt::WA_DeleteOnClose);
    shutdownWindow->setWindowTitle(window->windowTitle());

    // Center shutdown window at where main window was
    const QPoint global = window->mapToGlobal(window->rect().center());
    shutdownWindow->move(global.x() - shutdownWindow->width() / 2, global.y() - shutdownWindow->height() / 2);
    shutdownWindow->show();
}

void ShutdownWindow::closeEvent(QCloseEvent* event)
{
    event->ignore();
}
