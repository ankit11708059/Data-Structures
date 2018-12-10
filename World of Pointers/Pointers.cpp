#include<bits/stdc++.h>
using namespace std;
/*1. It is the best optimization to calculate Prime number as we have used simple logics.
  2. Its Complexity is O(n).
  3. The two important base case used here is that we know that 0 and 1 are not Prime
     so we assigned there indices to 0 and a Prime no is always a odd so we assigned all
	 odd indices to 1 now start iterating from 3 and if a number is multiple of any number 
	 assign 0 to 1.
  4. Indices have value of 1 is Prime number.If a number is not Prime its all multiple
     indices are also not Prime.
  5. I have started j from i*i because its multiple before i*i is already being division 
     to some number*/
  
void primeSieve(int *p,int n)
{
	p[0]=0;
	p[1]=0,p[2]=1;
	
	for(int i=3;i<=n;i=i+2)
	{
		p[i]=1;
	}
	for(int i=3;i<=n;i=i+2)
	{
		if(p[i])
		{
			for(int j=i*i;j<=n;j=j+2*i)
			{
				p[j]=0;
			}
		}
	}
	
}
int main()
{
	int N=100000;
	int p[N]={0};
	primeSieve(p,100);
	for(int i=0;i<=100;i++)
	{
		if(p[i])
		cout<<i<<" ";
	}
}
