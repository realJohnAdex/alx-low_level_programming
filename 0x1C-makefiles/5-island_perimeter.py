#!/usr/bin/python3
"""Island perimeter function"""
def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    land = 0
    for i in grid:
        for j in i:
            if j == 1:
                land += 1
    return (land * 2 ) + 2
