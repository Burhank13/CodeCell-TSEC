#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    string str ="hackathon";
    char save;
    if(str.length()%2==0)
    {
        for(int i=0;i<=str.length();i++)
        {
            save = str[i];
            str[i]=str[i+1];
            str[i+1]=save;
            i++;
        }
    }
    else
    {
         for(int i=0;i<str.length()-1;i++)
        {
            save = str[i];
            str[i]=str[i+1];
            str[i+1]=save;
            i++;
        }
        
    }
    string reverseAlphabet = "zyxwvutsrqponmlkjihgfedcba"; 
    int l = str.length(); 
    for (int i = 0; i < l; i++) 
    {
        str[i] = reverseAlphabet[str[i] - 'a']; 
    }
     for(int i=0;i<str.length();i++)
    {
        cout<<str[i];
    }

}