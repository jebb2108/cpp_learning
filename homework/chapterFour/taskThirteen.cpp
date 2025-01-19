#include <iostream>

int recursion(char str[], int s=0, int step=0)
{
    int biggest=0;
    start:
    char* p=&str[step];
    char* q= &str[strlen(str)];
    while (*p!= *q)
    {
        if (*p!=' ') 
        {
            p++;
            s++; 
            step++; 
        }
        else{
            if (s>biggest)
                biggest=s;
            s=0;
            p++;
            step++;
            goto start;
        }
    }

    return biggest;
}

int main()
{
    char str[100]="I like programming so much!";
    std::cout<<"Самое длинное слово содержит "<<recursion(str)<<" символов"<<std::endl;
    return 0;
}