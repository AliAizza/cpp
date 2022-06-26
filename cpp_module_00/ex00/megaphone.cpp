#include <iostream>

int main(int argc, char **argv)
{
    char c;

    if (!argv[1])
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            for (size_t j = 0; j < strlen(argv[i]); j++)
            {
                if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                {
                    c = toupper(argv[i][j]);
                    std::cout << c;
                }
                else
                    std::cout << argv[i][j];
            }
        }
    }
    std::cout << std::endl;
    return (0);
}