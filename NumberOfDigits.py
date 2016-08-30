#!/usr/bin/python
import sys

count = 0            # initialize count to count no. of digits

while int(sys.argv[1]) != 0:    # In this loop body number gets shrink and count increments by 1 in each iteration  

    sys.argv[1] = int(sys.argv[1]) / 10           
    count += 1
    
print "The No. of Digits in a Given Number = " , count    # prints the no of digits in a given number 
