#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string a,b;
    cin>>a>>b;
    int memopad[a.size()+1][b.size()+1];
    memset(memopad,-1,sizeof(memopad));
    for(int i=0;i<=a.size();i++)
    {
        memopad[i][0]=i;
    }
    for(int i=0;i<=b.size();i++)
    {
        memopad[0][i]=i;
    }
    for(int i=1;i<=a.size();i++)
    {
        for(int j=1;j<=b.size();j++)
        {
            if(a[i-1]==b[j-1])
            {
                memopad[i][j]=memopad[i-1][j-1];
            }
            else
            {
                  int x=1+memopad[i-1][j-1];
                  int y=1+memopad[i-1][j];
                  int z=1+memopad[i][j-1];

                  memopad[i][j]=min(x,min(y,z));
            }
        }
    }
    cout<<memopad[a.size()][b.size()]<<endl;
    }
}

