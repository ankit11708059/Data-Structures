#include<bits/stdc++.h>
using namespace std;

void sub(char *a,char *k,int i,int j)
{
	if(a[i]=='\0')
	{
		k[j]='\0';
	
			cout<<k<<",";
			return;
	}
	k[j]=a[i];
	sub(a,k,i+1,j+1);
	sub(a,k,i+1,j);
}
/*Try to make recursion tree by urself and then proceed understand it carefully*/
int main()
{
	char a[100],k[100];
	cin>>a;
	sub(a,k,0,0);
}
