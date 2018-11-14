qmc_mn1 stop
killall -9 qmcd
/home/qmc_mn1/.local/bin/qmc-cli -datadir=/home/qmc_mn1/.qmc2/ stop
# Make sure we stop
/home/qmc_mn1/.local/bin/qmcd -server=1 -daemon -datadir=/home/qmc_mn1/.qmc2/ -connect=explorer.qmc.network -resync
# and resync

