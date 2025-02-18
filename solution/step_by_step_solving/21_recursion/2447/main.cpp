#include <iostream>
#include <vector>

void draw(int x, int y, int n, std::vector<std::vector<char>>& board) {
    if (n == 1)
    {
        board[x][y] = '*';

        return;
    }

    int size = n / 3;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 1 && j == 1)
            {
                // 가운데 부분을 공백으로 채우기
                for (int a = x + size; a < x + 2 * size; a++)
                {
                    for (int b = y + size; b < y + 2 * size; b++)
                    {
                        board[a][b] = ' ';
                    }
                }
            }
            else
            {
                draw(x + i * size, y + j * size, size, board);
            }
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;

    std::cin >> n;

    std::vector<std::vector<char>> board(n, std::vector<char>(n, ' '));

    draw(0, 0, n, board);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << board[i][j];
        }

        std::cout << '\n';
    }
    
    return 0;
}
