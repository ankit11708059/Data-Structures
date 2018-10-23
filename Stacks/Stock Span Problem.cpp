#include<bits/stdc++.h>
using namespace std;

/* The concept of this problem is that let us suppose we have a element at a index so now we
have to find element greater to it so basically saving the index of current maximum with the help
of stacks Let us suppose that we have 100 80 90 now when we arrive at 90 having index of 2 we
compare it with stack top which is 80 so we pop the stack top now we get a element which is 
greater than 80 if it is less than 90 we again pop on the other hand if it is greater than
90 so stack top we have the index of maximum element upto 90.*/
int main(){
	int n=6;
	int a[]={100,80,60,70,60,75};
	stack<int> s;
	s.push(0);
	int r[n];
	r[0]=1;
	for(int i=1;i<n;i++)
	{
		while(a[s.top()]<=a[i] && s.empty()==false)
		s.pop();
		if(s.empty()==true)
		r[i]=i+1;
		else
		r[i]=i-s.top();
		s.push(i);	
	}
	for(int i=0;i<n;i++)
	{
		cout<<r[i]<<" ";
	}
}
