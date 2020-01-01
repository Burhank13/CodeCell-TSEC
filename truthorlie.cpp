#include<iostream>
#include<conio.h>
using namespace std;
// int main()
// {
//     int a[]={16, 9, 9, 15, 9, 7, 9, 11, 17, 11, 4, 9, 12, 14, 14, 12, 17, 0, 3,16};
//     int temp,b,k,m;
//     for(k=0;k<20;k++)
//     {
//         for(b=k+1;b<20;b++)
//         {
//             if(a[k]<a[b])
//             {
//                 temp=a[k];
//                 a[k]=a[b];
//                 a[b]=temp;
//             }
//         }    
//     }
//     for(int m=0;m<20;m++)
//     {
//         cout<<a[m]<<",";
//     }
//     for(int i=0;i<20;i++)
//     {
//         //a[i]=a[i]-1;
//         while (a[i]!=0)
//         {
//             for(int j=i+1;j<a[i];j++)
//             {
//                 if(a[j]!=0)
//                 {
//                     a[j]=a[j]-1;
//                     a[i]=a[i]-1;
//                     continue;
//                 }
//             }
//         }
//     }
//     for(int m=0;m<20;m++)
//     {
//         cout<<a[m]<<",";
//     }
// }

int main()
{
    // int arr[20] = {16, 9, 9, 15, 9, 7, 9, 11, 17, 11, 4, 9, 12, 14, 14, 12, 17, 0, 3,16};
    // int arr[20] = {14, 10, 17, 13, 4, 8, 6, 7, 13, 13, 17, 18, 8, 17, 2, 14, 6, 4, 7,12};
    // int arr[20] = {15, 18, 6, 13, 12, 4, 4, 14, 1, 6, 18, 2, 6, 16, 0, 9, 10, 7, 12, 3};
    int arr[20] = {6, 0, 10, 10, 10, 5, 8, 3, 0, 14, 16, 2, 13, 1, 2, 13, 6, 15, 5, 1};
    for(int i=0; i<20; i++)
    {   int j = i + 1;
        while(arr[i]!=0)
        {
            if (j<20)
            {
                if(arr[j]!=0)
                {
                    arr[j] -= 1;
                    arr[i] -= 1;
                }
                j++;
            } 
            else
            {
                break;
            }
        }
    }
    int sum = 0;
    for(int i=0; i<20; i++)
    {
        sum += arr[i];
    }
    if (sum == 0)
        cout<<1;
    else
    {
        cout<<0;
    }
    
    return 0;
}