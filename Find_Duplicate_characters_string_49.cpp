#include <bits/stdc++.h>
using namespace std;

void showDuplicate(string str)
{
    map <char,int> count;
    for(int i=0;i<str.length();i++)
    {
        count[str[i]]++;
    }
     map <char,int>::iterator ptr;
     for (ptr = count.begin(); ptr != count.end(); ptr++)
    {
        if(ptr->second>1){
            cout<<ptr->first<<" Count = "<<ptr->second<<"\n";
        }
    }
}

int main()
{
    string str="Ganpati Bappa Morya !!";
    showDuplicate(str);    
}