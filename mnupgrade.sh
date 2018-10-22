mkdir -p /tmp/forqmc
cd /tmp/forqmc
wget https://github.com/project-qmc/QMC/releases/download/v1.0.9b/linux_cli.tar.xz
xz --decompress linux_cli.tar.xz
tar xvf linux_cli.tar
qmc_mn1 stop
/home/qmc_mn1/.local/bin/qmc-cli -datadir=/home/qmc_mn1/.qmc2 stop
sleep 5
killall -9 qmcd
rm -f /home/qmc_mn1/.local/bin/qmc*
cp /tmp/forqmc/qmc-cli /home/qmc_mn1/.local/bin/
cp /tmp/forqmc/qmcd /home/qmc_mn1/.local/bin/
rm -f /home/qmc_mn1/.qmc2/peers.dat
rm -Rf /home/qmc_mn1/.qmc2/chainstate
rm -Rf /home/qmc_mn1/.qmc2/blocks
/home/qmc_mn1/.local/bin/qmcd -datadir=/home/qmc_mn1/.qmc2 -server=1 -listen=1 -daemon
echo catching up...10 minutes...please stay connected
sleep 600
/home/qmc_mn1/.local/bin/qmc-cli -datadir=/home/qmc_mn1/.qmc2 stop
sleep 10
/home/qmc_mn1/.local/bin/qmcd -datadir=/home/qmc_mn1/.qmc2 -server=1 -listen=1 -daemon
echo Finished
