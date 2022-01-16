import math
import matplotlib.pyplot as plt
def main():
        g = 10
        l = 1.0
        m = 10.0
        t0 = 0.0
        h = 0.001
        n = 10000
        x0 = 1.0
        v0 = 0.0
        fv = -(g/l)* math.sin(x0)
        fx = v0
        time = []
        pos = []
        vel = []
        energy = []


        for i in range (1,n):
                ti = i*h
                vi = v0+h*fv
                xi = x0+h*fx
                tenaga = (1/2)*m*(l**2)*((vi**2)+(g/l)*(xi**2))
                print(ti,xi,vi,tenaga,sep = ' ')
                time.append(ti)
                pos.append(xi)
                vel.append(vi)
                energy.append(tenaga)
                v0 =vi
                x0 =xi
                fv = -(g/l)* math.sin(x0)
                fx = v0
        print(2*math.pi*math.sqrt(g/l))
        plt.figure(1)
        plt.subplot(211)
        plt.plot(time,pos)
        plt.subplot(212)
        plt.plot(time,vel)
        plt.figure(2)
        plt.plot(time,energy)
        plt.show()
        

main()