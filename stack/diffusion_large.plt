set term pngcairo
set output "diffusion_large.png"

set xlabel "x"
set ylabel "T"
unset key
p [999800:1000200] "diffusion_large.dat" w l
