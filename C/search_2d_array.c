#include <stdio.h>

// Search for "key" inside "array" of size "rows" x "colums"
// Save the position in "x" and "y"
void search2DArray(char key, char array[4][4], int rows, int colums, int *x, int *y)
{
    int i, j;

    for (i = 0; i < colums; i++)
    {
        for (j = 0; j < rows; j++)
        {
            if (array[i][j] == key)
            {
                printf("Element %c found in column %d and row %d.\n", key, i, j);
                *x = j;
                *y = i;
            }
        }
    }
}

int main()
{
    // Rows
    // 0    1    2    3        // Columns
    char map[4][4] = {{'1', '1', '1', '1'},  // 0
                      {'1', '1', 'E', '1'},  // 1
                      {'1', 'P', '1', '1'},  // 2
                      {'1', '1', '1', '1'}}; // 3

    int x, y;

    search2DArray('P', map, 4, 4, &x, &y);

    return 0;
}
