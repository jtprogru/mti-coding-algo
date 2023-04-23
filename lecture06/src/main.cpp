/*
*
*/

#include "iostream"

static unsigned long factorial(unsigned long m)
{
    if (m == 0 || m == 1)
    {
        return 1;
    } else {
        return m * factorial(m-1);
    }
}

int main ()
{
    unsigned long n = 0;
    unsigned long sum = 1;
    std::cout << "please input the num: ";
    std::cin >> n;

    std::cout << factorial(n) << std::endl;

    return 0;
}
