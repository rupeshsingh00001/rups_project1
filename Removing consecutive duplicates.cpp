#include<iostream>
using namespace std;
void removingduplicates(string str)
{
    int l=str.length();
    if(l==1&&l==0)
    {
        return;
    }
    int prev=0;
    for(int current=1;current<l;current++)
    {
        if(str[current]!=str[prev])
        {
            prev++;
            str[prev]=str[current];
        }
    }
    return;
}
int main()
{
    string str;
    cin>>str;
    removingduplicates(str);
    cout<<str<<endl;
}
