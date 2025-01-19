#include <iostream>
#include <ciso646>

int rec(int str[], char symb, int n)
{
    int count=0;
    for (int i=0, j=1;i<n;++i)
    {
        if (str[i] != str[j] and str[j]!=symb)
        {
            ++count;


        }
    }
}

void countChars(char str[], int arr[], int n)
{
    for (int i=0;i<n;++i)
    {
        char symb=str[i];
        int amount=rec(str, symb, n);
        arr[i] = amount;
    }
}