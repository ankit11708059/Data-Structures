#include<bits/stdc++.h>
using namespace std;
/* Dutch National Flag Algorithm for Sorting of 0s ,1s and 2s*/
/* Actually it is a partition algorithm the concept is that when we have to place 0 
    in first block 1 in second and 2 in third let us take a variable l at the current
	index of 0 and m is used to traverse if a[m]=1 we will just go to next and if we encounter
	2 we will swap to h means 1 less than last when i encounterd 2*/
	
/* The most important thing here is that when we replace our current value with 2 then we
will not increment mid because we don't know whether the element come after replacement would 
be 1 or 0 if it is 0 then we have to again replace it with l*/
int main()
{
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int l=0,m=0,h=n-1;
	while(m<=h)
	{
		switch(a[m]){
		case 0:
			swap(a[l++],a[m++]);
			break;
		case 1:
			m++;
			break;
		case 2:
			swap(a[m],a[h--]);
			break;
}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
}
