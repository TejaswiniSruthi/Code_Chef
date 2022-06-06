#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int max=arr[0]+arr[n-1];
	    for(int i=0;i<n-1;i++){
	        if(max<=(arr[i]+arr[i+1])){
	            max=(arr[i]+arr[i+1]);
	        }
	    }
	    cout<<max<<"\n";
	}
	return 0;
}
