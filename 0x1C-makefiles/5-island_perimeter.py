#!/usr/bin/python3
""" doc """


def island_perimeter(grid):
    """ doc """

    width = 0
    for row in grid:
        if sum(row) > width:
            width = sum(row)
    grid = list(map(lambda x: list(x), zip(*grid)))
    height = 0
    for row in grid:
        if sum(row) > height:
            height = sum(row)
    return (2 * height + 2 * width)
