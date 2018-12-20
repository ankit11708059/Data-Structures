#include<bits/stdc++.h>
using namespace std;



template<typename T>
class TreeNode
{
public:
    int data;
    vector<TreeNode<T>*> children;
    TreeNode(T data)
    {
        this->data=data;
    }
};
TreeNode<int>* takeinput()
{
    int rootData,n;
    cout<<"Enter rootData\n";
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    cout<<"How many children\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        TreeNode<int> *child=takeinput();
        root->children.push_back(child);
    }
    return root;

}
void print(TreeNode<int> *root)
    {
        if(root==NULL)
            return;
        cout<<root->data<<" ";
        for(int i=0;i<root->children.size();i++)
        {
            cout<<root->children[i]->data<<" ";
        }
        cout<<endl;
        for(int i=0;i<root->children.size();i++)
        {
            print(root->children[i]);
        }
    }
int main()
{
    TreeNode<int>* root = takeinput();
    print(root);
}

