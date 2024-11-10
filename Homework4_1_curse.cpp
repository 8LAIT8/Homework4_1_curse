#include <iostream>

int main()
{
    int a = 9;
    int b = 11;


    if (a > b) {
        a = b;
    }
    else {
        b = a;
    }

   
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    return 0;
    
}

