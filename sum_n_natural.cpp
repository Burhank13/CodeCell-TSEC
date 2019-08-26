#include <iostream>
#include <conio.h>

int main()
{
    int sum, n, a, b, c, d;
    n = 1;
    sum = 0;
    while (n <= 10)
    {
        sum = sum + n;
        n++;
    }
    a=sum;
    while (n <= 100)
    {
        sum = sum + n;
        n++;
    }
    b=sum;
    while (n <= 200)
    {
        sum = sum + n;
        n++;
    }
    c=sum;
    d = a + b + c;
    std::cout << d<<"   "<< a<<"    "<< b<<"    "<< c;

    return 0;
}
