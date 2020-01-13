#include<iostream>
#include<string>
using namespace std;
int Roman(int number) 
{ 
    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000}; 
    string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"}; 
    int i=12;     
    while(number>0) 
    { 
      int div = number/num[i]; 
      number = number%num[i]; 
      while(div--) 
      { 
        cout<<sym[i]; 
      } 
      i--; 
    } 
} 
int main() 
{ 
    int date,month,year,t;
    string d,m ,y,op; 
  cin>>t;
  while(t--)
  {
    cin>>date>>month>>year;
    d=Roman(date); 
    cout<<"/"<<d;
    m=Roman(month);
    cout<<"/"<<m;
    y=Roman(year);
    cout<<y;
  }
  
    return 0; 
} 
