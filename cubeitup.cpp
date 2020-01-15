#include<iostream>
#include<conio.h>
using namespace std;

int cit()
{
    long long int t,dig,dig1;
    long long int cube=0, num=0, sum1=0, sum=0, n;
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
            while (cube != 0) {
                dig = cube % 10;
                cube = cube / 10;
                sum = sum + dig;
            }
            num += sum;
        }
        num %= 1000007;
        while(num>9)
        {
            sum1=0;
            while(num!=0)
            {
                dig1=num%10;
                num=num/10;
                sum1 += dig1;
            }
            if(sum1>9)
            {
                num=sum1%1000007;
            }
        }
        cout<<sum1;
    t--;
    }
    return 0;
}
