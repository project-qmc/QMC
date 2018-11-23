// Copyright (c) 2014-2016 The Dash developers
// Copyright (c) 2016-2017 The PIVX developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SPORK_H
#define SPORK_H

#include "base58.h"
#include "key.h"
#include "main.h"
#include "net.h"
#include "sync.h"
#include "util.h"

#include "obfuscation.h"
#include "protocol.h"
#include <boost/lexical_cast.hpp>

using namespace std;
using namespace boost;

/*
    Don't ever reuse these IDs for other sporks
    - This would result in old clients getting confused about which spork is for what

    Sporks 11,12, and 16 to be removed with 1st zerocoin release
*/
#define SPORK_START 10001
#define SPORK_END 10037

#define SPORK_2_SWIFTTX 10001
#define SPORK_3_SWIFTTX_BLOCK_FILTERING 10002
#define SPORK_5_MAX_VALUE 10004
#define SPORK_7_MASTERNODE_SCANNING 10006
#define SPORK_8_MASTERNODE_PAYMENT_ENFORCEMENT 10007
#define SPORK_9_MASTERNODE_BUDGET_ENFORCEMENT 10008
#define SPORK_10_MASTERNODE_PAY_UPDATED_NODES 10009
#define SPORK_11_LOCK_INVALID_UTXO 10010
//#define SPORK_12_RECONSIDER_BLOCKS 10011
#define SPORK_13_ENABLE_SUPERBLOCKS 10012
#define SPORK_14_NEW_PROTOCOL_ENFORCEMENT 10013
#define SPORK_15_NEW_PROTOCOL_ENFORCEMENT_2 10014
#define SPORK_16_ZEROCOIN_MAINTENANCE_MODE 10015
#define SPORK_17_CURRENT_MN_COLLATERAL 10016
#define SPORK_18_LAST_2000_COLLAT_BLOCK 10017
#define SPORK_19_LAST_2400_COLLAT_BLOCK 10018
#define SPORK_20_LAST_2550_COLLAT_BLOCK 10019
#define SPORK_21_LAST_2750_COLLAT_BLOCK 10020
#define SPORK_22_LAST_2950_COLLAT_BLOCK 10021
#define SPORK_23_LAST_3150_COLLAT_BLOCK 10022
#define SPORK_24_LAST_3350_COLLAT_BLOCK 10023
#define SPORK_25_LAST_3600_COLLAT_BLOCK 10024
#define SPORK_26_LAST_3850_COLLAT_BLOCK 10025
#define SPORK_27_LAST_4150_COLLAT_BLOCK 10026
#define SPORK_28_LAST_4400_COLLAT_BLOCK 10027
#define SPORK_29_LAST_4750_COLLAT_BLOCK 10028
#define SPORK_30_LAST_5050_COLLAT_BLOCK 10029
#define SPORK_31_LAST_5400_COLLAT_BLOCK 10030
#define SPORK_32_LAST_5800_COLLAT_BLOCK 10031
#define SPORK_33_LAST_6200_COLLAT_BLOCK 10032
#define SPORK_34_LAST_6600_COLLAT_BLOCK 10033
#define SPORK_35_MOVE_REWARDS 10034
#define SPORK_36_LAST_2200_COLLAT_BLOCK 10035
#define SPORK_37_DI_CONTROL 10036
#define SPORK_38_DI_VALUE 10037

#define SPORK_2_SWIFTTX_DEFAULT 978307200                         //2001-1-1
#define SPORK_3_SWIFTTX_BLOCK_FILTERING_DEFAULT 1424217600        //2015-2-18
#define SPORK_5_MAX_VALUE_DEFAULT 1000                            //1000 QMC
#define SPORK_7_MASTERNODE_SCANNING_DEFAULT 978307200             //2001-1-1
#define SPORK_8_MASTERNODE_PAYMENT_ENFORCEMENT_DEFAULT 4070908800 //OFF
#define SPORK_9_MASTERNODE_BUDGET_ENFORCEMENT_DEFAULT 4070908800  //OFF
#define SPORK_10_MASTERNODE_PAY_UPDATED_NODES_DEFAULT 4070908800  //OFF
#define SPORK_11_LOCK_INVALID_UTXO_DEFAULT 4070908800             //OFF - NOTE: this is block height not time!
#define SPORK_13_ENABLE_SUPERBLOCKS_DEFAULT 978307200            //2001-1-1
#define SPORK_14_NEW_PROTOCOL_ENFORCEMENT_DEFAULT 4070908800      //OFF
#define SPORK_15_NEW_PROTOCOL_ENFORCEMENT_2_DEFAULT 4070908800    //OFF
#define SPORK_16_ZEROCOIN_MAINTENANCE_MODE_DEFAULT 4070908800     //OFF
#define SPORK_17_CURRENT_MN_COLLATERAL_DEFAULT 2000               // CAmount * COIN
#define SPORK_18_LAST_2000_COLLAT_BLOCK_DEFAULT 959999            // These are nHeight
#define SPORK_19_LAST_2400_COLLAT_BLOCK_DEFAULT 959999
#define SPORK_20_LAST_2550_COLLAT_BLOCK_DEFAULT 959999
#define SPORK_21_LAST_2750_COLLAT_BLOCK_DEFAULT 959999
#define SPORK_22_LAST_2950_COLLAT_BLOCK_DEFAULT 959999
#define SPORK_23_LAST_3150_COLLAT_BLOCK_DEFAULT 959999
#define SPORK_24_LAST_3350_COLLAT_BLOCK_DEFAULT 959999
#define SPORK_25_LAST_3600_COLLAT_BLOCK_DEFAULT 959999
#define SPORK_26_LAST_3850_COLLAT_BLOCK_DEFAULT 959999
#define SPORK_27_LAST_4150_COLLAT_BLOCK_DEFAULT 959999
#define SPORK_28_LAST_4400_COLLAT_BLOCK_DEFAULT 959999
#define SPORK_29_LAST_4750_COLLAT_BLOCK_DEFAULT 959999
#define SPORK_30_LAST_5050_COLLAT_BLOCK_DEFAULT 959999
#define SPORK_31_LAST_5400_COLLAT_BLOCK_DEFAULT 959999
#define SPORK_32_LAST_5800_COLLAT_BLOCK_DEFAULT 959999
#define SPORK_33_LAST_6200_COLLAT_BLOCK_DEFAULT 959999
#define SPORK_34_LAST_6600_COLLAT_BLOCK_DEFAULT 959999
#define SPORK_35_MOVE_REWARDS_DEFAULT 4200
#define SPORK_36_LAST_2200_COLLAT_BLOCK_DEFAULT 959999
#define SPORK_37_DI_CONTROL_DEFAULT 0                       // False by default
#define SPORK_38_DI_VALUE_DEFAULT 0                         // CAmount / COIN

class CSporkMessage;
class CSporkManager;

extern std::map<uint256, CSporkMessage> mapSporks;
extern std::map<int, CSporkMessage> mapSporksActive;
extern CSporkManager sporkManager;

void LoadSporksFromDB();
void ProcessSpork(CNode* pfrom, std::string& strCommand, CDataStream& vRecv);
int64_t GetSporkValue(int nSporkID);
bool IsSporkActive(int nSporkID);
void ReprocessBlocks(int nBlocks);

//
// Spork Class
// Keeps track of all of the network spork settings
//

class CSporkMessage
{
public:
    std::vector<unsigned char> vchSig;
    int nSporkID;
    int64_t nValue;
    int64_t nTimeSigned;

    uint256 GetHash()
    {
        uint256 n = XEVAN(BEGIN(nSporkID), END(nTimeSigned));
        return n;
    }

    ADD_SERIALIZE_METHODS;

    template <typename Stream, typename Operation>
    inline void SerializationOp(Stream& s, Operation ser_action, int nType, int nVersion)
    {
        READWRITE(nSporkID);
        READWRITE(nValue);
        READWRITE(nTimeSigned);
        READWRITE(vchSig);
    }
};


class CSporkManager
{
private:
    std::vector<unsigned char> vchSig;
    std::string strMasterPrivKey;

public:
    CSporkManager()
    {
    }

    std::string GetSporkNameByID(int id);
    int GetSporkIDByName(std::string strName);
    bool UpdateSpork(int nSporkID, int64_t nValue);
    bool SetPrivKey(std::string strPrivKey);
    bool CheckSignature(CSporkMessage& spork);
    bool Sign(CSporkMessage& spork);
    void Relay(CSporkMessage& msg);
};

#endif
