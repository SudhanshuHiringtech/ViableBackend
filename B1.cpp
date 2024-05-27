#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  if(b==0)
     return a;
  return gcd(b ,a%b);
}

int lcm(int a, int b){
    return (a/gcd(a, b)) * b;
}

int main() {
	   // cout<<lcm(4, 3);
	   vector<int> v;
	   int t;
	   cin>>t;
	   while(t--){
	     int x,k;
	     cin>>x>>k;
	     int res=0, a;
	     int s = x*k; 
	     for(int i=x;i<=s;){
	         for(int j=x+1;j<=s;j++){
	             a = lcm(i, j);
	             v.push_back(a);
	         }
	     }
	     int z = *min_element(v.begin(), v.end());
	     int c = *max_element(v.begin(), v.end());
	     cout<<z<<" "<<c<<endl;
	   }
	return 0;
}

