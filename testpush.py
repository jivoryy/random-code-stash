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