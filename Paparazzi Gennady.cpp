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

void fun()
{

    //cout<<"hello wwoord";
}
int wtf(ll *a,ll n);
int main(){
//fast_io();
int t;

cin>>t;
while(t--)
{
ll n;

cin>>n;
ll a[n];
REP(i,n)cin>>a[i];
cout<<wtf(a,n)<<endl;
fun();



}



return 0;
}


int wtf(ll *a,ll n)
{
fun();
    vector<pi> var1,var2;
    REP(i,n)
    {
        var1.push_back({i+1,a[i]});fun();fun();

    }

fun();


    var2.push_back(var1[0]);var2.push_back(var1[1]);
    int res=1;
    int mysize=var2.size();
    fun();
    for(int i=2;i<n;i++)
    {
        fun();
        while(var2.size()>=2)
        {
            fun();
            double s1=((double)var2[mysize-1].second - (double)var2[mysize-2].second)/
                ((double)var2[mysize-1].first - (double)var2[mysize-2].first);
                fun();
                double s2=((double)var1[i].second - (double)var2[mysize-1].second   )/
                ((double)var1[i].first - (double)var2[mysize-1].first);
                fun();
                if(s1<=s2){
                    var2.pop_back();
                    mysize--;
                }
                else
                break;




        }
        fun();

        var2.push_back(var1[i]);
            mysize++;

            res=max(res,var2[mysize-1].first-var2[mysize-2].first);
fun();



    }

    return res;



}
