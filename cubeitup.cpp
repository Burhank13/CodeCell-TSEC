#include<iostream>
#include<conio.h>
using namespace std;

int cit()
{
    long long int t,dig,dig1;
    long long int cube=0, num=0, sum1=1, sum=0, n;
    cout<<"enter no. of testcases";
    cin>>t;
    while(t!=0)
    {
        cout<<"Enter the number";
        cin>>n;
        for(long long int i=1;i<=n;i++)
        {
            cube = i * i * i;
            sum = 0;
            while (cube != 0)
            {
                dig = cube % 10;
                cube = cube / 10;
                sum = sum + dig;
            }
            num += sum;
        }
        cout<<num;
        sum1=sum1*num%1000007;
    t--;
    }
    return 0;
}
