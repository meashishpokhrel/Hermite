set term x11 
#set output 'hermite.ps'
set xr [-2.25:3.5]
set yr [-100:100]
set style line 1 lt 1 lw 3 lc rgb 'black'
set style line 2 lt 1 lw 3 lc rgb 'blue'
set style line 3 lt 1 lw 3 lc rgb 'red'
set style line 4 lt 1 lw 3 lc rgb 'forest-green'
set style arrow 1 lt 2 lw 1 lc rgb 'black' nohead
set arrow from -2.25, 0.0 to 3.5,0.0 as 1
set arrow from 0.0, -45 to 0.0,50 as 1
set xl 'x'
set yl 'H_n(x)'
plot 'hermiteEven.dat' u 1:2 w l ti 'H_2(x)' ls 1,\
 'hermiteOdd.dat' u 1:2 w l ti 'H_3(x)' ls 2,\
 'hermiteEven.dat' u 1:3 w l ti 'H_4(x)' ls 3,\
 'hermiteOdd.dat' u 1:3 w l ti 'H_5(x)' ls 4
#set output
#! ps2pdf hermite.ps


