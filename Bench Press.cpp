#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,w,wr,temp;
	    cin>>n>>w>>wr;
	    map <long long int,long long int> m;
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>temp;
	        if(m.find(temp) == m.end())
	            m[temp] = 1;
	        else
	            m[temp]++;
	    }

	    if(wr>=w)
	        cout<<"YES"<<endl;
	   else
	   {
	       temp=0;
	       w = w-wr;
	       for(auto& it : m)
	       {
	           if(it.second > 1)
	           {
	               w = w - (it.first * it.second);
	               if(it.second%2 != 0)
	                   w = w+it.first;
	           }
	           if(w<=0)
	            {
	                temp = 1;
	                break;
	            }
	       }
	       if(temp == 1)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	   }
	}

	return 0;
}
