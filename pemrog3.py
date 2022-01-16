# -*- coding: utf-8 -*-
"""
Created on Tue Sep 25 15:36:29 2018

@author: Johanes Bosco Gading W - 15/383176/PA/16836
"""
def tugas3():
    nb = input('Choose a number:')
    try:
        number = int(nb)
    except ValueError:
        print("Invalid number")
    
