
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
double findMedian(int* array, int startIndex, int endIndex)
    {
       int indexDiff = (endIndex - startIndex);
      if (indexDiff % 2 == 0)
      {
            return array[startIndex + (indexDiff/2)];
      }
        else
        {
           return 1.0*(array[startIndex + (indexDiff/2)] + array[startIndex + (indexDiff/2) + 1])/2;
        }
    }

double find_median(int *a,int *b,int start_a,int end_a,int start_b,int end_b)
{
   if ((end_a - start_a == 0) && ((end_b - start_b == 0)))
       {
            return (a[0] + b[0])/2;
       }
       if ((end_a - start_a == 1) && ((end_b-start_b == 1)))
	        {
	            return (1.0*(max(a[start_a], b[start_b]) + min(a[end_a], b[end_b])))/2;
	        }

     double m1 = findMedian(a, start_a, end_a);
      double m2 = findMedian(b, start_b, end_b);
      if(m1==m2)return m1;



      int startIndexA=start_a;
      int endIndexA=end_a;
      int startIndexB=start_b;
      int endIndexB=end_b;
      if (m1 < m2)
        {
            if ((end_a- start_a) % 2 == 0)
	            {
	                start_a = start_a + (end_a - start_a) / 2;
	                end_b = start_b + (end_b - start_b) / 2;
	            }
	            else
	            {
	                startIndexA = startIndexA + (endIndexA - startIndexA) / 2;
	                endIndexB = startIndexB + (endIndexB - startIndexB) / 2 + 1;
	            }
        }


       else
        {
            if ((endIndexB - startIndexB) % 2 == 0)
           {
                startIndexB = startIndexB + (endIndexB - startIndexB) / 2;
            endIndexA = startIndexA + (endIndexA - startIndexA) / 2;
        }
         else
	            {
	                startIndexB = startIndexB + (endIndexB - startIndexB) / 2;
	                endIndexA = startIndexA + (endIndexA - startIndexA) / 2 + 1;
	            }
	        }
	        return find_median(a, b, startIndexA, endIndexA, startIndexB, endIndexB);
	    }








int main(){
fast_io();
int t;

cin>>t;
while(t--)
{
int n1,n2;
cin>>n1>>n2;
int a[n1],b[n2];
REP(i,n1)cin>>a[i];
REP(i,n2)cin>>b[i];
int x=find_median(a,b,0,n1-1,0,n2-1);
cout<<x<<endl;


}



return 0;
}
