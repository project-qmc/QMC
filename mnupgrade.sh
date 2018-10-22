cd /tmp
wget https://github.com/project-qmc/QMC/releases/download/v1.0.9/linux_cli.tar.xz
xz --decompress linux_cli.tar.xz
tar xvf linux_cli.tar
qmc_mn1 stop
/home/qmc_mn1/.local/bin/qmc-cli -datadir=/home/qmc_mn1/.qmc2 stop
sleep 5
killall -9 qmcd
cp /tmp/qmc-cli /home/qmc_mn1/.local/bin/
cp /tmp/qmcd /home/qmc_mn1/.local/bin/
/home/qmc_mn1/.local/bin/qmcd -datadir=/home/qmc_mn1/.qmc2 -server=1 -listen=1 -connect=54.38.145.192 -connect=136.243.26.230 -connect=54.38.76.79 -connect=54.38.76.75 -connect=54.38.148.199 -connect=51.38.75.168 -connect=51.38.75.169 -resync -daemon
sleep 1200
/home/qmc_mn1/.local/bin/qmc-cli -datadir=/home/qmc_mn1/.qmc2 stop
/home/qmc_mn1/.local/bin/qmc-cli -datadir=/home/qmc_mn1/.qmc2 stop
sleep 10
/home/qmc_mn1/.local/bin/qmcd -datadir=/home/qmc_mn1/.qmc2 -server=1 -listen=1 -daemon
echo 
echo done!
