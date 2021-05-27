#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))
#define REP(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mod 10000000007
typedef long long ll;
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
#define N 100001
vi graph[N];
int calculate(int task,int node,vi no_child_process)
{
    if(no_child_process[node]==0)return 0;
    if(task%no_child_process[node]!=0)return task;

   int ans=0;
    for(auto child:graph[node])
    {
        ans+=calculate(task/no_child_process[node],child,no_child_process);

    }
    return ans;



}

ll lcm_cal(ll x,ll y)
{
    return ((x*y)/(__gcd(x,y)));

}

ll mygcd(ll x,ll y )
{

    return __gcd(x,y);
}



int main(){
int n,x,q;
fast_io();
cin>>n;
vi no_of_child(n+1,0);

vector<ll> lcm_array(n+1,-1);


for(int i=2;i<=n;i++)
{

    cin>>x;
    no_of_child[x]++;
    graph[x].push_back(i);

}
for(int i=1;i<=n;i++)
{
    if(no_of_child[i]==0)
        continue;
    lcm_array[i]=no_of_child[i];
    for(auto child:graph[i])
    {
        if(no_of_child[child])
        lcm_array[i]=lcm_cal(lcm_array[i],no_of_child[child]);

    }



}




cin>>q;

while(q--)
{
    int v,w;
    cin>>v>>w;
    int res=0;

    if(no_of_child[v]==0)
        res+=0;
    else if(w%no_of_child[v]!=0)
        res+=w;
    else if(mygcd(w,lcm_array[v])==1)
        res+=w;

        else
        {


            res+=calculate(w,v,no_of_child);

        }

        cout<<res<<endl;




}





return 0;
}
