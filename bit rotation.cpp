
#pragma GCC optimize("Ofast")

#pragma GCC target("avx,avx2,fma")

#pragma GCC optimization ("unroll-loops")

#include<bits/stdc++.h>
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
typedef std::complex<double> Complex;
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
void fast_io(){
   std::ios_base::sync_with_stdio(0);
   std::cin.tie(NULL);
 std::  cout.tie(NULL);
}



int main(){
fast_io();
int t;

cin>>t;
while(t--)
{
int x;
cin>>x;
int d;
cin>>d;
int z=x<<d | x>>(32-d);
cout<<z<<endl;

}



return 0;
}

long ncr(int n , int r)
{
    long num=1,den=1;
    if(r!=0)
    {
        while(r>0)
        {
            num*=n;
            den*=r;
            n--;
            r--;
            long gcd=__gcd(num,den);
            num/=gcd;
            den/=gcd;


        }
    }
    return num;


}

