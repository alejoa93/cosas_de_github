import numpy as np
import matplotlib.pyplot as plt
plt.rcParams.update({'font.size': 20})

datos = np.loadtxt('datos.txt', delimiter=',')

Y = datos[:,0]
v = datos[:,1]
t = datos[:,2]

fig = plt.figure(figsize=(10,6))
plt.scatter(t,Y, label = "y", s = 5, color = 'green')
plt.title("Posición en el tiempo")
plt.xlabel("tiempo (s)")
plt.ylabel("Altura (m)")
plt.ylim(0,np.max(Y))
plt.xlim(0,np.max(t))
plt.legend(loc=0)
plt.savefig("grafico.pdf")
plt.close(fig)

for i in range(len(t)//10):
    fig = plt.figure(figsize=(4,4))
    plt.scatter(0,Y[10*i], label = "y", s = 5, color = 'green')
    plt.ylim(0,np.max(Y))
    plt.xlim(-1,1)
    plt.savefig("gif/gif_%03d.png"%i)
    plt.close(fig)

fig = plt.figure(figsize=(4,4))
plt.scatter(0,Y[-1], label = "y", s = 5, color = 'green')
plt.ylim(0,np.max(Y))
plt.xlim(-1,1)
plt.savefig("gif/gif_%03d.png"%(i+1))
plt.close(fig)
    
