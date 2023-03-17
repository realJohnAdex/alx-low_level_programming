#!/usr/bin/python3
large_pal = 0
for a in range(100, 1000):
	for b in range(100, 1000):
		prod = a * b
		if str(prod) == str(prod)[::-1] and prod > large_pal:
			large_pal = prod
print(large_pal)