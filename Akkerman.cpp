#include <iostream>

unsigned long long akk(int n, int m)
{
    if (n == 0)
    {
        return m + 1;
    }
    else if (m == 0)
    {
        return akk(n-1,1);
    }
    else
    {
        return(akk(n - 1, akk(n, m - 1)));
    }
}


int main()
{
    unsigned int m;
    std::cout << "enter m: ";
    std::cin >> m;
    std::cout << " \n";
    unsigned int n;
    std::cout << "enter n: ";
    std::cin >> n;
    std::cout << " \n";
    std::cout << akk(n, m);
    return 0;
}
