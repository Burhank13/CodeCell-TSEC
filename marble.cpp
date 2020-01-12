#include <iostream>
#include<conio.h>
using namespace std;
int
main ()
{
    int t, n, sum=0;
    cout<<"Enter The Number of Test Cases: ";
    cin >> t;
    while (t--)
    {
        cout<<"Enter the Number: ";
        cin >> n;
        if  (n%3 == 0)
            sum+=2;
        else
            sum+=1;
    }
    cout<<sum;
    return 0;
}
