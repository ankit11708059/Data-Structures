#include<bits/stdc++.h>
using namespace std;

void update(int *tree,int ss,int se,int incre,int i,int index)
{
	if(i<ss || i>se)
	{
		return;
	}
	if(ss==se){
	tree[index]=tree[index]+incre;
	return;
}
	int mid=(ss+se)/2;
	update(tree,ss,mid,incre,i,2*index);
	update(tree,mid+1,se,incre,i,2*index+1);
	tree[index]=min(tree[2*index],tree[2*index+1]);
	
}
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
	update(tree,0,5,15,3,1);
	int q=5;
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		cout<<query(tree,0,5,l,r,1);
	}
	
}
