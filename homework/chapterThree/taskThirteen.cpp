#include <iostream>

 int main()
 {
    char str[100]="I wanna excel at C++!";
    int len=strlen(str);
    std::cout<<str<<std::endl;

    char *p;
    char *q;

    p=str;
    q = &str[len-1];
    while (p<=q)
    {
        char begin_char = *p;
        *p = *q;
        *q = begin_char;

        p++;
        q--;

    }

    std::cout<<str<<std::endl;
    return 0;
 }
