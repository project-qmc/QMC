CatoCoin - Port: 33888 RPC Port: 6082

Specs
  Type: Masternode/POS
  Reward Split: 70% MN / 30% POS
  Block Time: 60 Seconds
  Confirmations: 15
  Masternode Confirmations: 15
  Minimum coins required for staking: 100
  POS Maturity Time: 2 hours
  Total Coin Supply: 42,000,000
  Pre mine: 400,000
  Pre-mine %: Less than 1%


Linux Compiling Instruction
  ./autogen.sh
  ./configure --disable-tests --disable-bench
  make

when done
  strip ./qmcd
  strip ./catcoin-cli
