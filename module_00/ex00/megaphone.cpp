#include<iostream>

using   namespace std;

int main(int ac, char **av)
{
    int     i;
    int     j;
    char    holder;

    i = 1;
    if (ac == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (av[i])
        {
            j = 0;
            while (av[i][j])
            {
                if (av[i][j] >= 97 && av[i][j] <= 122)
                {
                    holder = av[i][j] - 32;
                    cout << holder;
                }
                else
                    cout << av[i][j];
                j++;
            }
            i++;
        }
    }
    cout << "\n";
    return (0);
}