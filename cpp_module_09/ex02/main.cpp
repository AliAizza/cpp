#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc > 2)
    {
        pm p(argv);
        p.print();
    }
}