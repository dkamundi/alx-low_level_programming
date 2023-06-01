#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.
    
    Args:
        grid (list[list[int]]): The grid representing the island where 0 represents water and 1 represents land.
        
    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])
    
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Start with 4 sides
                
                # Check left neighbor
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2  # Deduct 2 sides (left and right)
                
                # Check top neighbor
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2  # Deduct 2 sides (top and bottom)
    
    return perimeter

