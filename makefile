oneko: oneko.c oneko.h bitmaps/* bitmasks/*
	cc -DSHAPE -O2 oneko.c -o oneko -lX11 -lXext -lXfixes -lm

clean:
	rm -f oneko
