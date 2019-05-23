import numpy as np
import matplotlib.pyplot as plt
t,x,y=np.genfromtxt('datos.dat', unpack=True)
fig, ax = plt.subplots()
ax.plot(x,y)
fig.savefig("figura.pdf")
