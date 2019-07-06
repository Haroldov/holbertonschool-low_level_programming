#!/usr/bin/python3
""" doc """


def island_perimeter(grid):
    """ doc """

    grid = list(filter(lambda x: sum(x) > 0, grid))
    grid = list(map(lambda x: list(x), zip(*grid)))
    grid = list(filter(lambda x: sum(x) > 0, grid))
    height = len(grid)
    grid = list(map(lambda x: list(x), zip(*grid)))
    width = len(grid)
    return (2 * height + 2 * width)
