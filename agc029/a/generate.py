#!/usr/bin/env python3.7
import random

m = random.randint(1,2*(10**5))
s = ""
for i in range(m):
  n = random.randint(0,1)
  if n == 0:
    s+="B"
  else:
    s+="W"

print(s)