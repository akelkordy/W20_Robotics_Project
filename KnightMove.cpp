#include <iostream>
#include "Knight.h"

int main()
{

    while(true)
    {
        int num;
        std::cout << "A positive integer please" << std::endl;
        std::cin >> num;
        std::cout << std::endl;
        
        if(0 == num)
        {
            break;
        }
        Knight game = Knight(num);
        game.showBoard();
    }
    
    return 0;
}

