#include <iostream>
int main(){
    if (adder(1, 1) != 2)
    {
        std::cout << "nah\n";
    }
    else
    {
        std::cout << "ye\n";
    }
};

int adder(int x, int y)
{
    return x + y; 
}