#include <iostream>
int main()
{
    int x, y, c, r;
    std::cout << "Lets find a position!" << std::endl;
    std::cout << "Insert the number of columns: ";
    std::cin >> c;
    std::cout << "Insert the number of rows: ";
    std::cin >> r;
    while ((x < 0 || y < 0) || (x > c || y > r))
    {
        std::cout << "Insert the x coordinates: ";
        std::cin >> x;
        std::cout << "Insert the y coordinates: ";
        std::cin >> y;
    }

    for (int i = 0; i <= r; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            if (i == x && j == y)
            {
                std::cout << "[X]";
            }
            else
            {
                std::cout << "[ ]";
            }
        }
        std::cout << std::endl;
    }
}