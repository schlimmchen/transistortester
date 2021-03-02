	set key title ""
	unset logscale
	set logscale x 10
	set offsets 0, 0, 0, 0
	set pointsize 1
	set samples 100, 100
	set size ratio 0 1,1
	set origin 0,0
	set style data points
	set style function lines
	set xzeroaxis linetype -2 linewidth 1.000
	set yzeroaxis linetype -2 linewidth 1.000
	set ticslevel 0.5
	set xtics border in scale 1,0.5 mirror norotate  offset character 0, 0, 0
	set xtics autofreq  norangelimit
	set ytics border in scale 1,0.5 mirror norotate  offset character 0, 0, 0
	set ytics autofreq  norangelimit
	set title "" 
	set title  offset character 0, 0, 0 font "" norotate
	set xlabel  offset character 0, 0, 0 font "" textcolor lt -1 norotate
	set ylabel  offset character 0, 0, 0 font "" textcolor lt -1 rotate by -270
	GNUTERM = "wxt"
	set key inside at 100000000,2800 vertical Right nobox
	set grid
	set terminal epslatex color solid
	set output "../GNU/RHv.eps"
	set format x "%.0s%c"
	set style line 1  linetype 1 linewidth 3.000
	set style line 2  linetype 2 linewidth 3.000
	set xrange [ 10000 : 100000000 ] noreverse nowriteback
	set xlabel "resistor Rx / Ohm" 
	set yrange [ 0 : 5000 ] noreverse nowriteback 
	set ylabel "voltage / mV" 
	plot (5000*(x+19)/(470041+x)) title "PC2 type 3" ls 1, (5000*470019/(470041+x)) title "PC0, type 4" ls 2
	set output
	#    EOF
	#    EOF
