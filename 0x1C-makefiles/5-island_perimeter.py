#!/usr/bin/python3
"""
    area of island
"""

def island_perimeter(grid):
    '''
        Find perimeter of island
    '''
    count = 0
    width = len(grid[0])
    height = len(grid)
    for row in range(0,height):
        for col in range(0,width):
            if grid[row][col] == 1:
                show = False
                try:
                    show = (grid[row-1][col] == 0 and grid[row+1][col] == 0 and grid[row][col-1] == 0 and grid[row][col+1] == 0)
                    if grid[row-1][col] == 0:
                        count += 1
                    if grid[row+1][col] == 0:
                        count += 1
                    if grid[row][col+1] == 0:
                        count += 1
                    if grid[row][col-1] == 0:
                        count += 1
                except TypeError:
                    return 0
    return count
