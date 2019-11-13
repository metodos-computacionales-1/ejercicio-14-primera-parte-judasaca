import numpy as np
import matplotlib.pylab as plt


datos=np.loadtxt("datos.dat")
t=datos[:,0]
v=datos[:,1]
x=datos[:,2]
plt.figure()
plt.plot(x,v)
plt.xlabel("x")
plt.ylabel("v")
plt.savefig("XvsV.png")

plt.figure()
plt.plot(t,x)
plt.xlabel("t")
plt.ylabel("x")
plt.savefig("TvsX.png")

