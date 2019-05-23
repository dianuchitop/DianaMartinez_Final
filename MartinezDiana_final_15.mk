plot.png: Data.dat graph.py
	python graph.py

%.dat : a.out
	./a.out 

a.out: MartinezDiana_codigo15.cpp
	g++ MartinezDiana_codigo15.cpp
