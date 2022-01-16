from math import *
import numpy as np
import matplotlib.pyplot as plt #import module dulu gan

def batas(c):
    #garis singgung lingkaran
    g = -c + sqrt(2.0)
    return g

def fungsi(w):
    f = np.sqrt(1-w**2)
    return g

def yatuhan():
    n = 10000 #jumlah data tembakan
    total = 0.0 #masukan awal supaya kosong
    dalam = 0.0 #idem
    box = 0.0 #idem
    square = 0.0 #idem
    x = np.zeros(n) #idem
    y = np.zeros(n) #idem
    a = np.zeros(n) #idem
    b = np.zeros(n) #idem
    c = np.zeros(n) #idem
    d = np.zeros(n) #idem
    e = np.zeros(n) #idem
    f = np.zeros(n) #idem
    g = np.zeros(n) #idem
    h = np.zeros(n) #idem
    for i in range (n):
        
        a[i] = np.random.uniform(0,1) #generate data yang random
        x[i] = a[i]*sqrt(2.0) #membuat data terbatas akar2
        
        b[i] = np.random.uniform(0,1) #generate data yang random
        y[i] = b[i]*sqrt(2.0) #membuat data terbatas akar2
        
        if (x[i] + y[i] < sqrt(2)) and (x[i] < 1.0) and (y[i] < 1.0): #memilih data yang sesuai luasan
            c[i] = x[i] #x dalam luasan
            d[i] = y[i] #y dalam luasan
            total += 1 #jumlah data dalam luasan
        
        if (x[i]**2 + y[i]**2 < 1.0):
            e[i] = x[i] #x TRUE
            f[i] = y[i] #y TRUE
            dalam += 1 #jumlah data TRUE
        if (x[i] < 1.0) and (y[i] < 1.0):
            g[i] = x[i] #x dalam kotak 1x1
            h[i] = y[i] #y dalam kotak 1x1
            box += 1 #jumlah data dalam kotak 1x1 awal untuk dibandingkan
            
    pi = (float(dalam) / total)*4.0*0.828427125
    plt.plot(g,h,'ro') #plot kotak 1x1
    plt.plot(c,d,'bo') #plot luasan yang dimaksud
    plt.plot(e,f,'go') #plot data TRUE
    
    
    tertolak = total - dalam #data yang tertolak dengan luasan dimaksud
    kotak = box - dalam #data yang tertolak dengan kotak 1x1 awal
    return pi, dalam, tertolak, total, kotak, box #output