from math import *
import numpy as np
import matplotlib.pyplot as plt

def lc(a,c,m,n):
    x=np.zeros(n)
    rng=1
    for i in range(n):
        rng=(a*rng+c) % m
        x[i]=rng/m
    return x

def runiform(n):
    y=np.zeros(n)
    for i in range(n):
        y[i]=np.random.uniform(0,1)
    return y    

def rexp(n):
    y=np.zeros(n)
    for i in range(n):
        y[i]=-log(1.0 - np.random.uniform(0,1))
    return y    

def rlin(n):
    y=np.zeros(n)
    for i in range(n):
        y[i]=-1.0+sqrt(1.0+3.0*np.random.uniform(0,1))
    return y    

def rlorentz(n):
    y=np.zeros(n)
    for i in range(n):
        y[i]=tan(pi*(np.random.uniform(0,1)-0.5))
    return y

def rboxmuller(n):
    x=np.zeros(n)
    y=np.zeros(n)
    for i in range(n):
        u1=np.random.uniform(0,1)
        u2=np.random.uniform(0,1)
        x[i]=sqrt(-2.0*log(u1))*cos(2.0*pi*u2)
        y[i]=sqrt(-2.0*log(u1))*sin(2.0*pi*u2)
    return x,y        

def pdf(x):
    f = np.sqrt(1.0-x**2)
    return f

def rvariate(n,xmin,xmax):  
    x=np.linspace(xmin,xmax,n)  
    y=pdf(x)  
    pmin=0.  
    pmax=y.max()  
    naccept=0  
    ntrial=0  
    while naccept<n:  
        xx=np.random.uniform(xmin,xmax) # x'  
        yy=np.random.uniform(pmin,pmax) # y'  
   
        if yy<pdf(xx):  
            x[naccept]=xx    
            naccept=naccept+1  
        ntrial=ntrial+1  
    return x,ntrial  

def plotpdf(x):
    n,bins,patches = plt.hist(x,50,normed=True)
    plt.show()
