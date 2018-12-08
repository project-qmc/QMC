// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The Bitcoin developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2017 The PIVX developers
// Copyright (c) 2018 The QMC developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "libzerocoin/Params.h"
#include "chainparams.h"
#include "random.h"
#include "util.h"
#include "utilstrencodings.h"

#include <assert.h>

#include <boost/assign/list_of.hpp>

using namespace std;
using namespace boost::assign;

struct SeedSpec6 {
    uint8_t addr[16];
    uint16_t port;
};

#include "chainparamsseeds.h"

/**
 * Main network
 */

//! Convert the pnSeeds6 array into usable address objects.
static void convertSeed6(std::vector<CAddress>& vSeedsOut, const SeedSpec6* data, unsigned int count)
{
    // It'll only connect to one or two seed nodes because once it connects,
    // it'll get a pile of addresses with newer timestamps.
    // Seed nodes are given a random 'last seen time' of between one and two
    // weeks ago.
    const int64_t nOneWeek = 7 * 24 * 60 * 60;
    for (unsigned int i = 0; i < count; i++) {
        struct in6_addr ip;
        memcpy(&ip, data[i].addr, sizeof(ip));
        CAddress addr(CService(ip, data[i].port));
        addr.nTime = GetTime() - GetRand(nOneWeek) - nOneWeek;
        vSeedsOut.push_back(addr);
    }
}

//   What makes a good checkpoint block?
// + Is surrounded by blocks with reasonable timestamps
//   (no blocks before with a timestamp after, none after with
//    timestamp before)
// + Contains no strange transactions
static Checkpoints::MapCheckpoints mapCheckpoints =
    boost::assign::map_list_of(0, uint256("00000f52317b93c7c9b7be721fedbfccea556a041605faa9b5e26a382428c23a"))
(2, uint256("5baf2d847fe232043606e3cea63636739fa18a1d83ebe428601b8648a8a95d13"))
(10000, uint256("8598628eb5569184a0fa41ab12a74a1dbb80ad0d74cb63d9b42648df58e2df87"))
(10101, uint256("9a2bd21ba0b7ca4ef3fa28a66628286647a6d742024540a08fcf2405a63c34b8"))
(12345, uint256("602f802f6edf6f6ed9a5cc8ac0c187d8d6f779c4a5b33e7b6dbe0def32a9f6df"))
(20000, uint256("44d42436935a4f138d7c050a120ac224b530779e8610372a1b82081ff221896c"))
(25483, uint256("4868b4cd2622588cb57ee91bd6cf15262ee08227f705430ccb92db0afe2ca33f"))
(30654, uint256("0eaa8716bd6cdff95741f7d38cb29b6668142d1a9d7205c7860d09ede2b31f2d"))
(35400, uint256("ce467be47f7fa6d88b7a9c48ab42abc7db8cc869f8735ab35852fb7e5e962f42"))
(35404, uint256("d4beb6c80a09e3ec38a760cd8544795997fef58a022b64763ae7cf0b17f5858f"))
(35405, uint256("f1dd7c9d12e2bd097ad6fa7684ec4bcda5b1c1b1b849f1c4ac2ee88b5078ed54"))
(36039, uint256("d1b002e3750ce48c0e593d0841fc100793a99f325a8d7d4eaef3a72a01be7829"))
(71046, uint256("b3e62f198ebfb99b474282309225b1fe8f1903f5af01d6dfc7f064f612dc8d8b"))
(71591, uint256("b0e34828d6e66f787c77da67c10c6806df7fdd11455a04638c270a970d8e9a9b"))
(71438, uint256("360e58aca5011a80db6e2718f488fc5de56242b5fd26d61b03e44cb9e1122895"))
(74994, uint256("9cf147ebe1b49ea876d30f79b4f2a9a42b972ac876c0a3b30dc2de8e442ce51f"))
(74995, uint256("82a8689dfe4d8f5e3b10b92cbc1fac2777dcd9dd7688e5d500db41cc6101655b"))
(75024, uint256("25bdb2db956d662a84590f85199e34473e19b108a5b085fb0676fa78bd13d81d"))
(75689, uint256("82d65d48f5a84d2dcb694a50852957ab008ffd111682e4dfe716137cedd98585"))
(75691, uint256("0212cbfe367c459a373b1fb59a6bf9df16fcd769eb90e7b6fdd7871a3b5a6df9"))
(75760, uint256("90f4ff4853010ef58be752e6255465766b35bc0f5e0b65c7641e55c1f4fa2113"));
static const Checkpoints::CCheckpointData data = {
    &mapCheckpoints,
    1542457292, // * UNIX timestamp of last checkpoint block
    166463,    // * total number of transactions between genesis and last checkpoint
                //   (the tx=... number in the SetBestChain debug.log lines)
    3153        // * estimated number of transactions per day after checkpoint
};

static Checkpoints::MapCheckpoints mapCheckpointsTestnet =
    boost::assign::map_list_of(0, uint256("0x001"));
static const Checkpoints::CCheckpointData dataTestnet = {
    &mapCheckpointsTestnet,
    1740710,
    0,
    250};

static Checkpoints::MapCheckpoints mapCheckpointsRegtest =
    boost::assign::map_list_of(0, uint256("0x001"));
static const Checkpoints::CCheckpointData dataRegtest = {
    &mapCheckpointsRegtest,
    1454124731,
    0,
    100};

libzerocoin::ZerocoinParams* CChainParams::Zerocoin_Params() const
{
    assert(this);
    static CBigNum bnTrustedModulus(zerocoinModulus);
    static libzerocoin::ZerocoinParams ZCParams = libzerocoin::ZerocoinParams(bnTrustedModulus);

    return &ZCParams;
}

class CMainParams : public CChainParams
{
public:
    CMainParams()
    {
        networkID = CBaseChainParams::MAIN;
        strNetworkID = "main";
        /**
         * The message start string is designed to be unlikely to occur in normal data.
         * The characters are rarely used upper ASCII, not valid as UTF-8, and produce
         * a large 4-byte int at any alignment. 
         */

        pchMessageStart[0] = 0xf0;
        pchMessageStart[1] = 0x0f;
        pchMessageStart[2] = 0xba;
	pchMessageStart[3] = 0xbe;
        vAlertPubKey = ParseHex("04be73745881d6babaa9f268fa0a6a01e19716a2c73b75810fa757a1732967c708a0f9dd79b78e4e20458a4328bfe525356782df9d1bed2bf87f1af76d83da4720");
        nDefaultPort = 28443;
        bnProofOfWorkLimit = ~uint256(0) >> 1;
        nSubsidyHalvingInterval = 2100000000;
        nMaxReorganizationDepth = 60;
        nEnforceBlockUpgradeMajority = 750;
        nRejectBlockOutdatedMajority = 950;
        nToCheckBlockUpgradeMajority = 1000;
        nMinerThreads = 0;
        nTargetTimespan = 1* 60; // QMC: 1 minute
        nTargetSpacing = 1 * 60; //QMC: 1 minute
        nMaturity = 15;
        nMasternodeCountDrift = 20;
        nMaxMoneyOut = 42000000 * COIN;

        /** Height or Time Based Activations **/
        nLastPOWBlock = 77050;
        nModifierUpdateBlock = 999999999;
        nZerocoinStartHeight = 361;
        nAccumulatorStartHeight = 1;
        nZerocoinStartTime = 1527811200; // Friday, June 1, 2018 12:00:00 AM - GMT
        nBlockEnforceSerialRange = 1; //Enforce serial range starting this block
        nBlockRecalculateAccumulators = ~1; //Trigger a recalculation of accumulators
        nBlockFirstFraudulent = ~1; //First block that bad serials emerged
        nBlockLastGoodCheckpoint = ~1; //Last valid accumulator checkpoint
        
        const char* pszTimestamp = "Don't live to impress, live to inspire.";
        CMutableTransaction txNew;
        txNew.vin.resize(1);
        txNew.vout.resize(1);
        txNew.vin[0].scriptSig = CScript() << 486604799 << CScriptNum(4) << vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
        txNew.vout[0].nValue = 1 * COIN;
        txNew.vout[0].scriptPubKey = CScript() << ParseHex("04be73745881d6babaa9f268fa0a6a01e19716a2c73b75810fa757a1732967c708a0f9dd79b78e4e20458a4328bfe525356782df9d1bed2bf87f1af76d83da4720") << OP_CHECKSIG;
        genesis.vtx.push_back(txNew);
        genesis.hashPrevBlock = 0;
        genesis.hashMerkleRoot = genesis.BuildMerkleTree();
        genesis.nVersion = 1;
        genesis.nTime = 1536017481; 
        genesis.nBits = 0x1e0ffff0;
        genesis.nNonce = 349255;
	

        hashGenesisBlock = genesis.GetHash();


        assert(hashGenesisBlock == uint256("0x00000f52317b93c7c9b7be721fedbfccea556a041605faa9b5e26a382428c23a"));
        assert(genesis.hashMerkleRoot == uint256("0x0bad4c53df86264463da4b76ce41fe5c4d92892e481d817e1ee460ed1d1fed56"));

       vSeeds.push_back(CDNSSeedData("51.75.49.7", "51.75.49.7"));
       vSeeds.push_back(CDNSSeedData("136.243.26.230", "136.243.26.230"));
       vSeeds.push_back(CDNSSeedData("54.38.148.199", "54.38.148.199"));
       vSeeds.push_back(CDNSSeedData("54.38.76.79", "54.38.76.79"));
       vSeeds.push_back(CDNSSeedData("54.38.76.75", "54.38.76.75"));
       vSeeds.push_back(CDNSSeedData("95.179.134.215", "95.179.134.215"));
       vSeeds.push_back(CDNSSeedData("144.202.100.108", "144.202.100.108"));
       vSeeds.push_back(CDNSSeedData("45.76.47.27", "45.76.47.27"));
       vSeeds.push_back(CDNSSeedData("217.69.15.206", "217.69.15.206"));





	base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 58);
	base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 120);
	base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 1);
	        // BIP32 (Bitcoin defaults)
        base58Prefixes[EXT_PUBLIC_KEY] = {0x04, 0x88, 0xB2, 0x1E}; //xpub
        base58Prefixes[EXT_SECRET_KEY] = {0x04, 0x88, 0xAD, 0xE4}; //xprv
        base58Prefixes[EXT_COIN_TYPE] = boost::assign::list_of(0x80)(0x00)(0x00)(0xbc).convert_to_container<std::vector<unsigned char> >();

        fRequireRPCPassword = true;
        fMiningRequiresPeers = false;
        fAllowMinDifficultyBlocks = true;
        fDefaultConsistencyChecks = false;
        fRequireStandard = true;
        fMineBlocksOnDemand = false;
        fSkipProofOfWorkCheck = true;
        fTestnetToBeDeprecatedFieldRPC = false;
        fHeadersFirstSyncingActive = false;

        nPoolMaxTransactions = 3;
        strSporkKey = "04be73745881d6babaa9f268fa0a6a01e19716a2c73b75810fa757a1732967c708a0f9dd79b78e4e20458a4328bfe525356782df9d1bed2bf87f1af76d83da4720";
        strObfuscationPoolDummyAddress = "QjAa3sdGegnH7r6qnu486LRf95GojDnHUv";
        nStartMasternodePayments = 1403728576; //Wed, 25 Jun 2014 20:36:16 GMT

        /** Zerocoin */
        zerocoinModulus = "c95577b6dce0049b0a20c779af38079355abadde1a1d80c353f6cb697a7ae5a087bad39caa5798478551d0f9d91e6267716506f32412de1d19d17588765eb9502b85c6a18abdb05791cfd8b734e960281193705eeece210920cc922b3af3ceb178bf12c22eb565d5767fbf19545639be8953c2c38ffad41f3371e4aac750ac2d7bd614b3faabb453081d5d88fdbb803657a980bc93707e4b14233a2358c97763bf28f7c933206071477e8b371f229bc9ce7d6ef0ed7163aa5dfe13bc15f7816348b328fa2c1e69d5c88f7b94cee7829d56d1842d77d7bb8692e9fc7b7db059836500de8d57eb43c345feb58671503b932829112941367996b03871300f25efb5";
        nMaxZerocoinSpendsPerTransaction = 7; // Assume about 20kb each
        nMinZerocoinMintFee = 1 * ZCENT; //high fee required for zerocoin mints
        nMintRequiredConfirmations = 20; //the maximum amount of confirmations until accumulated in 19
        nRequiredAccumulation = 1;
        nDefaultSecurityLevel = 100; //full security level for accumulators
        nZerocoinHeaderVersion = 4; //Block headers must be this version once zerocoin is active
        nBudget_Fee_Confirmations = 3; // Number of confirmations for the finalization fee
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return data;
    }
};
static CMainParams mainParams;

/**
 * Testnet (v3)
 */
class CTestNetParams : public CMainParams
{
public:
    CTestNetParams()
    {
        networkID = CBaseChainParams::TESTNET;
        strNetworkID = "test";
        pchMessageStart[0] = 0x83;
        pchMessageStart[1] = 0x63;
        pchMessageStart[2] = 0x69;
        pchMessageStart[3] = 0x78;
        vAlertPubKey = ParseHex("04be73745881d6babaa9f268fa0a6a01e19716a2c73b75810fa757a1732967c708a0f9dd79b78e4e20458a4328bfe525356782df9d1bed2bf87f1af76d83da4720");
        nDefaultPort = 40001;
        nEnforceBlockUpgradeMajority = 51;
        nRejectBlockOutdatedMajority = 75;
        nToCheckBlockUpgradeMajority = 100;
        nMinerThreads = 0;
        nTargetTimespan = 1 * 60; // QMC: 1 day
        nTargetSpacing = 1 * 60;  // QMC: 1 minute
        nLastPOWBlock = 200;
        nMaturity = 15;
        nMasternodeCountDrift = 4;
        nModifierUpdateBlock = 51197; //approx Mon, 17 Apr 2017 04:00:00 GMT
        nMaxMoneyOut = 43199500 * COIN;
        nZerocoinStartHeight = 201576;
        nZerocoinStartTime = 1501776000;
        nBlockEnforceSerialRange = 1; //Enforce serial range starting this block
        nBlockRecalculateAccumulators = 9908000; //Trigger a recalculation of accumulators
        nBlockFirstFraudulent = 9891737; //First block that bad serials emerged
        nBlockLastGoodCheckpoint = 9891730; //Last valid accumulator checkpoint
        
        //! Modify the testnet genesis block so the timestamp is valid for a later start.
        genesis.nTime = 1525345200;  // Thursday, May 3, 2018 11:00:00 AM
        genesis.nBits = 0x1e0ffff0;
        genesis.nNonce = 0x1d8a;

	    hashGenesisBlock = genesis.GetHash();
        //assert(hashGenesisBlock == uint256("0x000007cff63ef602a51bf074e384b3516f0dd202f14d52f7c8c9b1af9423ab2e"));

        vFixedSeeds.clear();
        vSeeds.clear();

		base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 12);
		base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 21);
		//base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 239);
		//base58Prefixes[EXT_PUBLIC_KEY] = list_of(0x02)(0x2D)(0x25)(0x33).convert_to_container<std::vector<unsigned char> >();
		//base58Prefixes[EXT_SECRET_KEY] = list_of(0x02)(0x21)(0x31)(0x2B).convert_to_container<std::vector<unsigned char> >();
        // 	BIP44 coin type is from https://github.com/satoshilabs/slips/blob/master/slip-0044.md
        //base58Prefixes[EXT_COIN_TYPE] = boost::assign::list_of(0x80)(0x00)(0x00)(0xbc).convert_to_container<std::vector<unsigned char> >();
        base58Prefixes[SECRET_KEY] =     std::vector<unsigned char>(1,33);
        // Testnet Reef BIP32 pubkeys start with 'tpub' (Bitcoin defaults)
        base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x04)(0x35)(0x87)(0xCF).convert_to_container<std::vector<unsigned char> >();
        // Testnet Reef BIP32 prvkeys start with 'tprv' (Bitcoin defaults)
        base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x04)(0x35)(0x83)(0x94).convert_to_container<std::vector<unsigned char> >();
        // Testnet Reef BIP44 coin type is '1' (All coin's testnet default)
        base58Prefixes[EXT_COIN_TYPE]  = boost::assign::list_of(0x80)(0x00)(0x00)(0x01).convert_to_container<std::vector<unsigned char> >();

        convertSeed6(vFixedSeeds, pnSeed6_test, ARRAYLEN(pnSeed6_test));

        fRequireRPCPassword = true;
        fMiningRequiresPeers = true;
        fAllowMinDifficultyBlocks = true;
        fDefaultConsistencyChecks = false;
        fRequireStandard = false;
        fMineBlocksOnDemand = false;
        fTestnetToBeDeprecatedFieldRPC = true;

        nPoolMaxTransactions = 2;
        strSporkKey = "04be73745881d6babaa9f268fa0a6a01e19716a2c73b75810fa757a1732967c708a0f9dd79b78e4e20458a4328bfe525356782df9d1bed2bf87f1af76d83da4720";
        strObfuscationPoolDummyAddress = "Qp87cG8UEQgzs1Bk67Yk884C7pnQfAeo7q";
        nStartMasternodePayments = 1420837558; //Fri, 09 Jan 2015 21:05:58 GMT
        nBudget_Fee_Confirmations = 3; // Number of confirmations for the finalization fee. We have to make this very short
                                       // here because we only have a 8 block finalization window on testnet
    }
    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return dataTestnet;
    }
};
static CTestNetParams testNetParams;

/**
 * Regression test
 */
class CRegTestParams : public CTestNetParams
{
public:
    CRegTestParams()
    {
        networkID = CBaseChainParams::REGTEST;
        strNetworkID = "regtest";
        strNetworkID = "regtest";
        pchMessageStart[0] = 0x69;
        pchMessageStart[1] = 0xcf;
        pchMessageStart[2] = 0x7e;
        pchMessageStart[3] = 0xac;
        nSubsidyHalvingInterval = 150;
        nEnforceBlockUpgradeMajority = 750;
        nRejectBlockOutdatedMajority = 950;
        nToCheckBlockUpgradeMajority = 1000;
        nMinerThreads = 1;
        nTargetTimespan = 24 * 60 * 60; // QMC: 1 day
        nTargetSpacing = 1 * 60;        // QMC: 1 minutes
        bnProofOfWorkLimit = ~uint256(0) >> 1;
        genesis.nTime = 1515524400;
        genesis.nBits = 0x1e0ffff0;
        genesis.nNonce = 732084;

        hashGenesisBlock = genesis.GetHash();
        nDefaultPort = 51436;
        //assert(hashGenesisBlock == uint256("0x000008415bdca132b70cf161ecc548e5d0150fd6634a381ee2e99bb8bb77dbb3"));

        vFixedSeeds.clear(); //! Testnet mode doesn't have any fixed seeds.
        vSeeds.clear();      //! Testnet mode doesn't have any DNS seeds.

        fRequireRPCPassword = false;
        fMiningRequiresPeers = false;
        fAllowMinDifficultyBlocks = true;
        fDefaultConsistencyChecks = true;
        fRequireStandard = false;
        fMineBlocksOnDemand = true;
        fTestnetToBeDeprecatedFieldRPC = false;
    }
    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return dataRegtest;
    }
};
static CRegTestParams regTestParams;

/**
 * Unit test
 */
class CUnitTestParams : public CMainParams, public CModifiableParams
{
public:
    CUnitTestParams()
    {
        networkID = CBaseChainParams::UNITTEST;
        strNetworkID = "unittest";
        nDefaultPort = 51478;
        vFixedSeeds.clear(); //! Unit test mode doesn't have any fixed seeds.
        vSeeds.clear();      //! Unit test mode doesn't have any DNS seeds.

        fRequireRPCPassword = false;
        fMiningRequiresPeers = false;
        fDefaultConsistencyChecks = true;
        fAllowMinDifficultyBlocks = false;
        fMineBlocksOnDemand = true;
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        // UnitTest share the same checkpoints as MAIN
        return data;
    }

    //! Published setters to allow changing values in unit test cases
    virtual void setSubsidyHalvingInterval(int anSubsidyHalvingInterval) { nSubsidyHalvingInterval = anSubsidyHalvingInterval; }
    virtual void setEnforceBlockUpgradeMajority(int anEnforceBlockUpgradeMajority) { nEnforceBlockUpgradeMajority = anEnforceBlockUpgradeMajority; }
    virtual void setRejectBlockOutdatedMajority(int anRejectBlockOutdatedMajority) { nRejectBlockOutdatedMajority = anRejectBlockOutdatedMajority; }
    virtual void setToCheckBlockUpgradeMajority(int anToCheckBlockUpgradeMajority) { nToCheckBlockUpgradeMajority = anToCheckBlockUpgradeMajority; }
    virtual void setDefaultConsistencyChecks(bool afDefaultConsistencyChecks) { fDefaultConsistencyChecks = afDefaultConsistencyChecks; }
    virtual void setAllowMinDifficultyBlocks(bool afAllowMinDifficultyBlocks) { fAllowMinDifficultyBlocks = afAllowMinDifficultyBlocks; }
    virtual void setSkipProofOfWorkCheck(bool afSkipProofOfWorkCheck) { fSkipProofOfWorkCheck = afSkipProofOfWorkCheck; }
};

static CChainParams* pCurrentParams = 0;

const CChainParams& Params()
{
    assert(pCurrentParams);
    return *pCurrentParams;
}

CChainParams& Params(CBaseChainParams::Network network)
{
    switch (network) {
    case CBaseChainParams::MAIN:
        return mainParams;
    case CBaseChainParams::TESTNET:
        return testNetParams;
    case CBaseChainParams::REGTEST:
        return regTestParams;
    default:
        assert(false && "Unimplemented network");
        return mainParams;
    }
}

void SelectParams(CBaseChainParams::Network network)
{
    SelectBaseParams(network);
    pCurrentParams = &Params(network);
}

bool SelectParamsFromCommandLine()
{
    CBaseChainParams::Network network = NetworkIdFromCommandLine();
    if (network == CBaseChainParams::MAX_NETWORK_TYPES)
        return false;

    SelectParams(network);
    return true;
}

