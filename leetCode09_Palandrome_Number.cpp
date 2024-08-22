#include <iostream>

using namespace std;

bool CheckPalandrome(string str)
{
    int i = 0, j = str.length() - 1;

    if (j % 2 == 0)
    {
        return false;
    }

    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{

    return 0;
}