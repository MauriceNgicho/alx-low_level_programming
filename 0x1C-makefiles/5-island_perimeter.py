#!/usr/bin/python3
"""
A function that returns island_perimeter(grid)
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of an island in a grid.

    Args:
        grid (list of list of int): 2D list representing the island.

    Returns:
        int: Perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0]) if rows > 0 else 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Each land cell starts with 4 sides
                perimeter += 4

                # Check if there is a neighbor above
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Remove 2 for shared side

                # Check if there is a neighbor to the left
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  # Remove 2 for shared side

    return perimeter
