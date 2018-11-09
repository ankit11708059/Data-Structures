#include<bits/stdc++.h>
using namespace std;

int query(int *tree,int ss,int ee,int qs,int qe,int index)
{
	if(ss>=qs && ee<=qe)
	{
		return tree[index];
	}
	else if(qs>ee || qe<ss)
	{
		return INT_MAX;
	}
	int mid=(ss+ee)/2;
	int la=query(tree,ss,mid,qs,qe,2*index);
	int ra=query(tree,mid+1,ee,qs,qe,2*index+1);
	return min(la,ra);
}
void buildTree(int *a,int s,int e,int *tree,int index)
{
    if(s==e){
	tree[index]=a[s];
	return;
    }
    int mid=(s+e)/2;
    buildTree(a,s,mid,tree,2*index);
    buildTree(a,mid+1,e,tree,2*index+1);
    tree[index]=min(tree[2*index],tree[2*index+1]);
    
}

int main()
{
	int a[]={1,3,2,-5,6,4};
	int n=6;
	int *tree=new int[13];
	buildTree(a,0,5,tree,1);
	cout<<query(tree,0,5,0,5,1);
	
}
