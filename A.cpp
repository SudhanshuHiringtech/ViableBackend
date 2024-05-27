#include <iostream>
using namespace std;

int main() {
	   int t;
	   cin>>t;
	   while(t--){
	     int l, n;
	     cin>>l>>n;
	     int c=0;
	     for(int i=l;i<=n;i++){
	        if(l%3 ==0)
	            c=c+1;
	     }
	     cout<<c<<endl;
	   }
	
	return 0;
}
