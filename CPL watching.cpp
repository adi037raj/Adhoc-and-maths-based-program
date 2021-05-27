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

bool isSubsetSum(int set[], int n, int sum)
{

    bool subset[n + 1][sum + 1];


    for (int i = 0; i <= n; i++)
        subset[i][0] = true;


    for (int i = 1; i <= sum; i++)
        subset[0][i] = false;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (j < set[i - 1])
                subset[i][j] = subset[i - 1][j];
            if (j >= set[i - 1])
                subset[i][j] = subset[i - 1][j]
                               || subset[i - 1][j - set[i - 1]];
        }
    }



    return subset[n][sum];
}

int smallestSubWithSum(int arr[], int n, int x)
{

    int curr_sum = 0, min_len = n+1;


    int start = 0, end = 0;
    while (end < n)
    {
        while (curr_sum <= x && end < n)
            curr_sum += arr[end++];


        while (curr_sum > x && start < n)
        {

            if (end - start < min_len)
                min_len = end - start;


            curr_sum -= arr[start++];
        }
    }
    return min_len;
}


int main(){
//fast_io();
int t;

cin>>t;
while(t--)
{
int n,k;
cin>>n>>k;
int a[n],sum=0;
REP(i,n)
{
    cin>>a[i];
    sum+=a[i];
}
if(sum<2*k)
{
    cout<<-1;
}
else if(sum==2*k)
{
if(isSubsetSum(a,n,k)==true)
{
    cout<<n;
}
else
    cout<<-1;

}
else
{
int flag=0;
int i=0;
while(i<n)






}






















}



return 0;
}
