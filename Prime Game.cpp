#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define clr(a) memset(a,1,sizeof(a))
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
#define N 1000001

bool is_prime[N];
int primes_upto[N];


void sieve_algo()
{
    int n=N;
    clr(is_prime);
    is_prime[1]=false;

  for (int p = 2; p * p <= n; p++)
    {

        if (is_prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
                is_prime[i] = false;
        }
    }
    int res=0;
    for(int i=1;i<n+1;i++)
    {
        if(is_prime[i]==true)res++;
        primes_upto[i]=res;


    }





}





int main(){
fast_io();
int t;
sieve_algo();
cin>>t;
while(t--)
{

int x,y;
cin>>x>>y;
if(primes_upto[x]<=y)
    cout<<"Chef\n";
else
    cout<<"Divyam\n";

}



return 0;
}
