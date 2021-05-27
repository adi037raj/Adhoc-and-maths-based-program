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
typedef priority_queue <int, vector<int>, greater<int> > min_heap;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
void fast_io(){
   std::ios_base::sync_with_stdio(0);
   std::cin.tie(NULL);
 std::  cout.tie(NULL);
}



int main(){
//fast_io();
int t;

cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int> a(n);
    REP(i,n)
    cin>>a[i];
    sort(a.begin(),a.end());
    int j=0;
    int res=0;
    vector<int> v=a;
    for(auto i=a.begin()+1;i!=a.end();i++)
    {
        int val=*i;
        if(val%a[j]!=0)
        {
            a.erase(i);
            res++;
            i--;

        }
        else
        {
            j++;
        }


    }
    a=v;
    reverse(a.begin(),a.end());
    j=0;
    int res2=0;
 for(auto i=a.begin()+1;i!=a.end();i++)
    {
        int val=*i;
        if(a[j]%val!=0)
        {
            a.erase(i);
            res2++;
            i--;

        }
        else
        {
            j++;
        }


    }



    cout<<min(res,res2)<<endl;




}



return 0;
}
