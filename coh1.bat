laplace 001ao1s.bkr 001ao1l.bkr 1
laplace 001az1s.bkr 001az1l.bkr 1

rem kohärenz 1 sec epoch rechteck fenster
coherenz 001az1l.bkr 001az1l1 1 1 0 0 coh_7_inter.txt 0 0
coherenz 001ao1l.bkr 001ao1l1 1 1 0 0 coh_7_inter.txt 0 0

coherenz 001az1l.bkr 001az1l2 1 1 0 0 coh_14_intra.txt 0 0
coherenz 001ao1l.bkr 001ao1l2 1 1 0 0 coh_14_intra.txt 0 0


bkr2asc 001az1l1.cpb
bkr2asc 001ao1l1.cpb

bkr2asc 001az1l2.cpb
bkr2asc 001ao1l2.cpb

del 001ao1.bkr 001az1.bkr