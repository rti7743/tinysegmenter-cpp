# Makefile

a.out:  main.cpp TinySegmenter.cpp
	g++ main.cpp TinySegmenter.cpp --input-charset=cp932 --exec-charset=cp932 -Wno-multichar

clean:
	rm -f *.out

