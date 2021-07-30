OUT=stack_of.out stack_of2.out stack_of3.out diffusion.png diffusion_large.png

all: $(OUT)

%.out: %.cpp
	g++ -O3 -Wall $< -o $@

%.png: %.dat
	gnuplot $*.plt

diffusion.dat:
	./stack_of.out > $@

diffusion_large.dat:
	./stack_of3.out > $@


clean:
	rm -f $(OUT)
