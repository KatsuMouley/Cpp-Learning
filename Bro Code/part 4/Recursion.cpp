#include <iostream>

int walk(int steps);

int main(){
    walk(100);
    return 0;
}
// FOR LOOP
// int walk(int steps){
//     for (int i = 0; i < steps; i++)
//     {
//         std::cout << " STEPPING LIKE A KING " << (i+1) << "\n";
//     }
// }
//Recursion
int walk(int steps){
    if ( steps > 0)
    {
        std::cout << " STEPPING LIKE A KING " << (steps) << "\n";
        walk(steps - 1);
    }
}