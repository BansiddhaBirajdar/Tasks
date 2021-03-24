#include <bits/stdc++.h>
using namespace std;
void reverse(char ch[])
{
	cout<<ch;
	char t;
	int l=strlen(ch),i;
	for(i=0;i<l/2;i++){
		t=ch[l-1-i];
		ch[l-1-i]=ch[i];
		ch[i]=t;

	}
	cout<<"\n"<<ch;

}
int main()
{
	char ch[]="bappa";
	reverse(ch);
	return 0;
}