#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))
#define REP(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mod 10000000007
typedef long long int ll;
typedef std::vector<int> vi;
typedef std::pair<int,int> pi;
#define F first
#define S second
#define MP make_pair
const double PI = 3.141592653589793238460;
typedef priority_queue <int > max_heap;
typedef priority_queue <int, vector<int>, greater<int> > min_heap;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
void fast_io(){
   std::ios_base::sync_with_stdio(0);
   std::cin.tie(NULL);
 std::  cout.tie(NULL);
}

struct TreeNode{
int data,level;
vector<TreeNode*>child;
TreeNode(int x)
{
    data=x;
    level=0;
}

};



vector<pi> leaves;
void depthsearch2(TreeNode *root)
{
    REP(i,root->child.size())
    {
        TreeNode *current=root->child[i];
        depthsearch2(current);
    }

    if(root->child.size()==0)
    leaves.pb({root->level,root->data+1});



}

void depth_seeach(TreeNode *root,int l)
{

    root->level=l;
    REP(i,root->child.size())
    depth_seeach(root->child[i],l+1)

}


void create_tree(TreeNode *root,vector<vi>&adjacent,vector<bool> &visited)
{

    visited[root->data]=1;
    REP(i,adjacent[root->data].size())
    {
        if(!visited[adjacent[root->data][i]])
        {
            TreeNode*temp=new TreeNode(adjacent[root->data][i]);
            root->child.pb(temp);
        }

    }
    REP(i,root->child.size())
    create_tree(root->child[i],adjacent,visited);



}




int main(){
//fast_io();
int t,u,v;

cin>>t;
while(t--)
{
int n;
cin>>n;
vector<vi>adjacent(n);
REP(i,n-1)
{
    cin>>u>>v;
    u--;v--;
    adjacent[v].pb(u);
    adjacent[u].pb(v);

}

TreeNode *root=new TreeNode(0);
vector<bool> visited(n,0);
create_tree(root,adjacent,visited);
depth_seeach(root,0);
vector<pi> ans;




}



return 0;
}
