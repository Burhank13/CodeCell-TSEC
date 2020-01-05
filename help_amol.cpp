#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int i, j, cond, lw, lp, large, temp;
    cin>>cond;
    cin>>lw;
    cin>>lp;
    int watches[lw], pc[lp];
    for(i=0; i<lw; i++) cin>>watches[i];
    for(i=0; i<lp; i++) cin>>pc[i];
    large=0;
    for(i=0; i<lw; i++)
    {
        for(j=0;j<lp; j++)
        {
            temp = watches[i]+pc[j];
            if(temp<cond && large<temp)
                large = temp;
        }
    }
    cout<<large;
    return 0;
}
