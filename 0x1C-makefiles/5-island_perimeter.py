#!/usr/bin/python3
"""The 5-island_perimeter module returns island_perimeter function)."""

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (List[List[int]]): A list of lists representing the grid.

    Returns:
        int: The perimeter of the island.
    """
    if not grid:
        return 0

    edge = 0
    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 1
                if (col > 0 and grid[row][col - 1] == 1):
                    edge += 1
                if (row > 0 and grid[row -1][col] == 1):
                    edge += 1

    return perimeter * 4 - edge * 2
