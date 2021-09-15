#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

int main()
{
    string s;
    int size,count1=0,flag=0,var='A';
    cout<<"Enter the string "<<endl;
    getline(cin,s);
    size=s.size();
    for(int i=0;i<size;i++)
    {
        if(flag==1 && var=='Z' && s[i]=='Z' )
        {
            count1++;
            break;
        }

        else if(flag==1)
        {
            count1++;
            if(s[i]==var)
            {
            var++;
            }
        }
        else if(s[i]==var && flag==0)
        {
            count1++;
            var++;
            flag=1;
        }
        else continue;
    }
    cout<<"Min Length string : "<<count1<<endl;
    char a;
    a=var;
    cout<<"Final Alphabet : "<<a;


};