
Debian
====================
This directory contains files used to package qmcd/qmc-qt
for Debian-based Linux systems. If you compile qmcd/qmc-qt yourself, there are some useful files here.

## qmc: URI support ##


qmc-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install qmc-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your qmcqt binary to `/usr/bin`
and the `../../share/pixmaps/qmc128.png` to `/usr/share/pixmaps`

qmc-qt.protocol (KDE)

