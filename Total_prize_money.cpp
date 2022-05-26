#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,X,Y;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++){
	    cin>>X>>Y;
        arr[i]=(X*10)+(Y*90);
	}
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<"\n";
	}
	return 0;
}
