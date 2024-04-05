#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*
SKYSCRAPER PUZZLE

CONSTRAINTS:
    Each row and column must contain a unique set of boxes of heights 1 through 4.
    The numbers provided as input represent the number of boxes visible from a specific viewpoint along a row or column. Taller boxes obscure shorter ones behind them.

DESIRED OUTPUT:
/rush-01
            col1up      col2up      col3up      col4up
row1left                                                row1Right
row2left                                                row2Right
row3left                                                row3Right
row4left                                                row4Right
           col1down    col2down    col3down    col4down

/rush-01
    4 3 2 1
    1 2 2 2
    4 3 2 1
    1 2 2 2

ERROR HANDLING:
In case of error or if you can’t find any solutions, display "Error" followed by a line break.


Steps:
1) Create a board 4x4
2) Convert strings input to integers, populate col and rows
3) Basic Logic
4) Solving algorithm (backtracking, memory management)

IF nr of visible buildings 4, populate 1234 in order
IF nr of visible building 1, first box must be 4


*/
// col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left row3left row4left row1right row2right row3right row4right
int parse_input(char *input_str, int views[4][4])
{
    // Track array position
    int index = 0;
    int col = 0;
    int row = 0;

    while (*input_str != '\0')
    {
        // Convert to integers
        if (*input_str >= '1' && *input_str <= '9')
        {
            int value = *input_str - '0';
            // printf("%d ", value);

            // Validate the value (1-4)
            if (value < 1 || value > 4)
            {
                return 0; // Error: Value out of range
            }

            // Store the value
            views[row][col] = value;
            index++;

            // Move to the next position
            col++;
            // If it encounters false character
        }
        else if (*input_str != ' ')
        {
            return 0;
        }
        input_str++;
        // Check if we parsed the correct number of values
    }
    if (index == 16)
    {
        printf("Parse Success!\n");
        return 1;
    }
    else
    {
        printf("Parse Failed!'n");
        return 0;
    }
    
}

// PRINT VIEW CONSTRAINTS ON 4X4 
void print_board(int views[4][4])
{
    for (int row = 0; row < 4; row++)
     {
        for (int col = 0; col < 4; col++)
        {
            printf("%d ", views[row][col]);
        }
        printf("\n"); // Newline after each row
    }
}

void    basic_logic(int board[4][4], int views[4][4])
{
    // Iterate through rows and columns
    for (int i = 0; i < 4; i++) 
    {
        // Check column constraints (top)
        if (views[0][i] == 4)  // Top of a column has '4' visible boxes
        {
            for (int j = 0; j < 4; j++)
            {
                board[j][i] = j + 1; // Fill with 1, 2, 3, 4
            }
        }
        
        // Check 1 visible box
        if (views[0][i] == 1)
        {
            board[0][i] = 4;
        }
    }
}

int find_empty_cell(int board[4][4], int *row, int *col) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (board[i][j] == 0) {
                *row = i;
                *col = j;
                return 1; // Found an empty cell
            }
        }
    }
    return (0); // No empty cell found
}

int check_top_constr(int board[4][4], int views[4][4], int col)
{
    int visible = 0;
    int max = -1;

    for (int row = 0; row < 4; row++)
    {
        if (board[row][col] > max)
        {
            max = board[row][col];
            visible++;
        }
    }
    return visible;
}

int check_bttm_constr(int board[4][4], int views[4][4], int col) {
    int visible = 0;
    int max = -1;

    for (int row = 0; row < 4; row++)
    {
        if (board[row][col] > max)
        {
            max = board[row][col];
            visible++;
        }
    }
    return visible;
}

int check_left_constr(int board[4][4], int views[4][4], int row)
{
    int visible = 0;
    int max = -1;

    // printf("Row: %d, Left Constraint: %d\n", row, views[2][row]);

    // Check from the left side
    for(int col = 0; col < 4; col++)
    {
        if(board[row][col] > max)
        {
            max = board[row][col];
            visible = visible + 1;
        }
        // printf("col: %d, max: %d, visible: %d\n", col, max, visible);
    }
    return visible;
}

int check_right_constr(int board[4][4], int views[4][4], int row) {
    int visible = 0;
    int max= -1;
    printf("Row: %d, Right Constraint: %d\n", row, views[3][row]);
    // Check from the right side
    for (int col = 3; col > 0; col--)
    {
        if (board[row][col] > max)
        {
            max = board[row][col];
            visible++;
        }
        printf("col: %d, max: %d, visible: %d\n", col, max, visible);
    }
    return visible;
}

int check_unique(int arr[4])
{
    int seen[5] = {0};
    for (int i = 0; i < 4; i++)
    {
        int value = arr[i];
        if (value != 0 && seen[value] == 1)
        {
            return 0; // Duplicate found
        }
        seen[value] = 1;
    }
    // All heights are unique
    return 1; 
}

// Function to check if the current board state is valid
int is_valid(int board[4][4], int views[4][4])
{
    // 1. CHECK ROWS
    for (int row = 0; row < 4; row++)
    {
        int visible_left = check_left_constr(board, views, row);
        int visible_right = check_right_constr(board, views, row);
        if (visible_left != views[2][row] || visible_right != views[3][row])
        {
            printf("Row Error\n");
            return 0; // Constraint violated 
        }
    }

    // CHECK COLUMNS
    for (int col = 0; col < 4; col)
    {
        int visible_top = check_top_constr(board, views, col);
        int visible_bttm = check_bttm_constr(board, views, col);
        if (visible_top != views[0][col] || visible_bttm != views[1][col])
        {
            printf("Col Error\n");
            return 0; // Constraint violated 
        }
    }

    // 3. Check for Unique Box Heights 
     for (int i = 0; i < 4; i++) 
     {
        // Check row
        if (!check_unique(board[i])) 
        {
            return 0; 
        }

        // Check col
        int column[4];
        for (int j = 0; j < 4; j++)
        {
            column[j] = board[j][i]; 
        }

        if (!check_unique(column))
        {
            return 0; 
        }
     }
    return 1; // No constraints violated
}

int solve(int board[4][4], int views[4][4])
{
    // Find an empty cell
    int row, col;

    if (!find_empty_cell(board, &row, &col)) {
        return 1; // All cells filled, we have a solution!
    }

    // Try each box height 
    for (int num = 1; num <= 4; num++)
    {
        board[row][col] = num;
        printf("Trying nr: %d\n", num);

        if (is_valid(board, views))
        {
             if (solve(board, views))
             { 
                return 1; // Solution found! 
             }
        }
        // Backtracking step
        board[row][col] = 0; // Reset the cell
    }

    return 0; // No solution found!
}

int main()
{
    int views[4][4];
    int board[4][4] = { {0} };

    parse_input("4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2", views);
    basic_logic(board, views);

    solve(board, views);
    print_board(board);

    return 0;
}