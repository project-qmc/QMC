// Copyright (c) 2011-2013 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_PROPOSALRECORD_H
#define BITCOIN_QT_PROPOSALRECORD_H

#include "amount.h"
#include "uint256.h"

#include <QList>
#include <QString>

class CWallet;

class ProposalRecord
{
public:
    ProposalRecord():
            hash(""), url(""), name(""), yesVotes(0), noVotes(0)
    {
    }

    ProposalRecord(QString hash,
                QString url, QString name,
                const CAmount& noVotes, const CAmount& yesVotes):
            hash(hash), url(url), name(name),
            yesVotes(yesVotes), noVotes(noVotes)
    {
    }

    QString hash;
    CAmount start_epoch;
    CAmount end_epoch;
    QString url;
    QString name;
    CAmount yesVotes;
    CAmount noVotes;
    CAmount abstainVotes;
    CAmount amount;
    CAmount percentage;
};

#endif // BITCOIN_QT_PROPOSALRECORD_H

