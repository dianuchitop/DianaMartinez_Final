plot.png: Data.dat graph.py
	python graph.py

%.dat : a.out
	./a.out 

a.out: codigo.cpp
	g++ codigo.cpp
