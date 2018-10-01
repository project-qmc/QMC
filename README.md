**Quality Magnet Coin** 

***Specs***
`Type: Masternode/PoS
Algo: XEVAN
Reward Split: 70% MN / 30% POS
Block Time: 60 Seconds
Confirmations: 15
Masternode Confirmations: 15
Minimum coins required for staking: 10
PoS Maturity Time: 2 hours
Pre mine: 2.7%
Total Coin Supply: 42,000,000`


***Linux Compiling Instructions:***
```./autogen.sh
  ./configure --disable-tests --disable-bench
  make -j4 # You can change 4 to any number of CPUs you would like to use)```


Tor can be enabled by running with `-torenabled`
or by editing the qmc2.conf file and adding the line `torenabled=1`


***Contribution***
We highly encourage community development!
If you feel like anything should be added or removed, please don't hesitate to create a pull request.
