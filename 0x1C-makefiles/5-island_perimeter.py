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
    r_e = False
    r_s = False
    c_e = False
    c_s = False

    for row in range(0,height):
        for col in range(0,width):
            if grid[row][col] == 1:
                if row == 0:
                    r_s = True
                if col == 0:
                    c_s = True
                if col == width-1:
                    c_e = True
                if row == height-1:
                    r_e = True 
                if not r_e:
                    if grid[row+1][col] == 0:
                        count += 1
                if not r_s:
                    if grid[row-1][col] == 0:
                        count += 1
                if not c_e:
                    if grid[row][col+1] == 0:
                        count += 1
                if not c_s:
                    if grid[row][col-1] == 0:
                        count += 1
    return count
