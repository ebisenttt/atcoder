#!/usr/bin/env python3
import random

N = random.randint(1,10**5)
M = random.randint(0,N-1)
print(N, M)
for _ in range(N-1):
    a = random.randint(1,N-1)
    print(a)