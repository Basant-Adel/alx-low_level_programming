#!/usr/bin/python3
""" That Function returns the perimeter of the island described in grid """


def island_perimeter(grid):
    """ Perimeter Island """

    w = len(grid[0])
    h = len(grid)
    edges = 0
    size = 0

    for b in range(h):

        for a in range(w):
            if grid[b][a] == 1:
                size += 1
                if (a > 0 and grid[b][a - 1] == 1):
                    edges += 1
                if (b > 0 and grid[b - 1][a] == 1):
                    edges += 1

    return (size * 4 - edges * 2)
