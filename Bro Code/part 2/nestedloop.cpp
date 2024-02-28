#include <iostream>
int main()
{
    int x, y, c, r;
    std::cout << "Insert the number of columns: ";
    std::cin >> c;
    std::cout << "Insert the number of rows: ";
    std::cin >> r;
    std::cout << "Lets find a position!" << std::endl;
    while ((x < 0 || y < 0) || (x > c || y > r))
    {
        std::cout << "Insert the x coordinates: ";
        std::cin >> x;
        std::cout << "Insert the y coordinates: ";
        std::cin >> y;
    }

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i == y && j == x)
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

    return 0;
}