import numpy as np
import matplotlib.pylab as plt


datos=np.loadtxt("datos.dat")
t=datos[:,0]
v=datos[:,1]

plt.figure()
plt.plot(t,v)
plt.savefig("grafica1.png")