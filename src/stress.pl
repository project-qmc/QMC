#!/usr/bin/perl
for($x=0;$x<=10000000;$x++) {
$z=int(rand(9999999));
$h=`./qmc-cli preparebudget "test$z" "magnet:123$z" 1 43200 "QjAa3sdGegnH7r6qnu486LRf95GojDnHUv" 1`;
`echo './qmc-cli submitbudget "test$z" "magnet:123$z" 1 43200 "QjAa3sdGegnH7r6qnu486LRf95GojDnHUv" 1 $h' >> tx3.txt`
}

