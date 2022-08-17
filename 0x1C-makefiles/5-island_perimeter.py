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
    st={ 
            "r_s":False,
            "r_e":False,
            "c_s":False,
            "c_e":False
        }
    for row in range(0,height):
        for col in range(0,width):
            if grid[row][col] == 1:
                if row == 0:
                    st["r_s"] = True
                if col == 0:
                    st["c_s"] = True
                if col == width-1:
                    st["c_e"] = True
                if row == height-1:
                    st["r_e"] = True
                show = st["r_e"] and st["r_s"] and st["c_s"] and st["c_e"]
                if not show:
                    if grid[row-1][col] == 0 and not st["r_s"]:
                        count += 1
                    if grid[row+1][col] == 0 and not st["r_e"]:
                        count += 1
                    if grid[row][col+1] == 0 and not st["c_e"]:
                        count += 1
                    if grid[row][col-1] == 0 and not st["c_s"]:
                        count += 1
    return count
