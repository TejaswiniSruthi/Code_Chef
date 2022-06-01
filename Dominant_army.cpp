#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    int sum=a+b+c;
	    int res=max(a,max(b,c));
	    int diff=sum-res;
	    if(res>(diff)){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
