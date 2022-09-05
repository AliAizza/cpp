#include <iostream>
void ft_change(int &d)
{
    d++;
}

int main()
{
    int i = 5;
    
    ft_change(i);
    std::cout << i << std::endl;
}