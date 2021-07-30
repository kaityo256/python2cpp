set term pngcairo
set output "diffusion.png"

set xlabel "x"
set ylabel "T"
unset key
p "diffusion.dat" w l
