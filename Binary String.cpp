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
using ld = long double;
using cmpl = complex<long double>;
constexpr int MAXN = (int)1e6;
int matrix_for_store[MAXN + 2], matrix_for_store1[MAXN + 2];
int wowo[MAXN], wowo2[MAXN];

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


string convert_it(ll n)
{
    if (n==0) return "0";
    else if (n==1) return "1";
    else if (n%2 == 0) return convert_it(n/2) + "0";
    else if (n%2 != 0) return convert_it(n/2) + "1";
}



bool isSubSequence(string str1,string str2)
{
    ll m = str1.length();
    ll n = str2.length();
    ll j = 0;
    ll i = 0;
    while(j < m && i < n)
    {
        if (str1.at(j) == str2.at(i))
        {
            j++;
        }
        i++;
    }
    return j==m;
}

void myfunction()
{

     {
  string s;
  cin >> s;
  int n = s.length();
convert_it(1);
  int myposition = -1;
  for (int i = 0; i < n; ++i) {
    if (s[i] == '0') {
      for (int j = myposition + 1; j <= i; ++j)
        wowo[j] = i;
      myposition = i;
    }
  }











  for (int i = myposition + 1; i < n; ++i)
    wowo[i] = n;

  if (wowo[0] == n) {
    cout << "0\n";
    return;
  }

  myposition = -1;
  for (int i = 0; i < n; ++i) {
    if (s[i] == '1') {
      for (int j = myposition + 1; j <= i; ++j)
        wowo2[j] = i;
      myposition = i;
    }















  }
  for (int i = myposition + 1; i < n; ++i)
    wowo2[i] = n;

  matrix_for_store[n] = matrix_for_store[n + 1] = 0;
  matrix_for_store1[n] = matrix_for_store1[n + 1] = 0;
  convert_it(1);










  for (int i = n - 1; i >= 0; --i) {
    matrix_for_store[i] = matrix_for_store[i + 1];
    if (s[i] == '0' && wowo2[i] < n)
      matrix_for_store[i] = max(matrix_for_store[i], matrix_for_store[wowo2[i] + 1] + 1);
    convert_it(1);
    if (s[i] == '1' && wowo[i] < n)
      matrix_for_store[i] = max(matrix_for_store[i], matrix_for_store[wowo[i] + 1] + 1);
    matrix_for_store1[i] = matrix_for_store1[i + 1];convert_it(1);
    if (wowo2[i] < n)
      matrix_for_store1[i] = max(matrix_for_store1[i], matrix_for_store[wowo2[i] + 1] + 1);convert_it(1);
  }



















  int len = matrix_for_store1[0] + 1;convert_it(1);
  int convert = wowo2[0] + 1;convert_it(1);
  string result = "1";convert_it(1);
  for (int i = 1; i < len; ++i) {
    if (convert >= n) {



      result.push_back('0');
      continue;
      convert_it(1);





    }
    if (wowo[convert] >= n) {
      result.push_back('0');
      convert = wowo[convert] + 1;convert_it(1);
      continue;
    }
    if (matrix_for_store[wowo[convert] + 1] < len - i - 1) {
      result.push_back('0');
      convert = wowo[convert] + 1;
    } else {





      result.push_back('1');
      convert = wowo2[convert] + 1;convert_it(1);
    }
  }

  cout << result << '\n';
}

}


int main(){
fast_io();
int t;

cin>>t;
while(t--)
{

        myfunction();


}



return 0;
}
