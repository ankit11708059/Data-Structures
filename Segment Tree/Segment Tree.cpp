#include<bits/stdc++.h>
using namespace std;


void buildtree(int *tree,int *a,int as,int ae,int index)
{
    if(as>ae)
        return;
    if(as==ae)
    {
        tree[index]=a[as];
        return ;
    }

    int mid=(as+ae)/2;
    buildtree(tree,a,as,mid,2*index);
    buildtree(tree,a,mid+1,ae,2*index+1);
    tree[index]=min(tree[2*index],tree[2*index+1]);
    return;
}
int query(int q1,int q2,int *tree,int as,int ae,int index)
{
    if(as>=q1 && q2>=ae)
    {
        return tree[index];
    }
    else if(q1>ae || q2<as)
    {
        return INT_MAX;
    }
    int mid=(as+ae)/2;
    int left=query(q1,q2,tree,as,mid,2*index);
    int right=query(q1,q2,tree,mid+1,ae,2*index+1);
    return min(left,right);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int *tree=new int[2*n+2];
    buildtree(tree,a,1,n,1);
    int q,x,y;
    cout<<"Enter No of Queries\n";
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        cin>>x>>y;
        cout<<query(x,y,tree,1,n,1)<<endl;
    }


}
