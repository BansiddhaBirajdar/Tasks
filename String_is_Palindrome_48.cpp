#include <bits/stdc++.h>
using namespace std;
void palindrome(char ch[])
{
	cout<<ch<<"\n";
	int f=0;
	int l=strlen(ch),i;
	for(i=0;i<l/2;i++){
		if(ch[i]!=ch[l-1-i]){
			f=1;
			break;
		}
	}
	if(f){
		cout<<"string is Not palindrome"<<"\n";
	}
	else{
		cout<<"string is palindrome"<<"\n";
	}

}
int main()
{
	char ch[]="bappa";
	palindrome(ch);
	char ch1[]="mam";
	palindrome(ch1);
	return 0;
}