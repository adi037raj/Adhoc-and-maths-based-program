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
struct name{
int weight,dist,pos;
};


bool myfunction(name a,name b)
{

    return a.weight<b.weight;
}


int main(){
//fast_io();
int t;

cin>>t;
while(t--)
{

int n,w,l;
cin>>n;
name a[n];
REP(i,n)
{
    cin>>w;
    a[i].pos=i+1;
    a[i].weight=w;
    //a[i].dist=l;

}
REP(i,n)
{
    cin>>l;
    a[i].dist=l;
}


sort(a,a+n,myfunction);
/*REP(i,n)
{
    cout<<a[i].weight<<" "<<a[i].dist<<" "<<a[i].pos<<endl;


}
*/



int last_pos=a[0].pos;

int res=0;


for(int i=1;i<n;i++)
{
    int curr_pos=a[i].pos;
    int jump=a[i].dist;

    if(last_pos>=curr_pos)
    {
        while(curr_pos<=last_pos)
            curr_pos+=jump,res++;

    }
 last_pos=curr_pos;


}


cout<<res<<endl;


}



return 0;
}
