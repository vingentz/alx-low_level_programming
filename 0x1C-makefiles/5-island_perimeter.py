#!/usr/bin/python3
"""island perimeter measuring function"""


def island_perimeter(grid):
    """
    Return island perimeter reped by grid
    args: grid(list) - a list of lists of integers
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for k in range(height):
        for z in range(width):
            if grid[k][z] == 1:
                size += 1
                if (z > 0 and grid[k][z - 1] == 1):
                    edges += 1
                if (k > 0 and grid[k - 1][z] == 1):
                    edges += 1
    return size * 4 - edges * 2
