#include <iostream>
using namespace std;
int power(int l){
    int max=0,arr[l];
    for(int i=0;i<l;i++){
        cin>>arr[i];
        if(arr[i]!=0){
            max=i;
        }
    }
    cout<<max<<"\n";
    return 0;
}
int main() {
    int t,l;
    cin>>t;
	for(int i=0;i<t;i++){
	    cin>>l;
        power(l);
	}
	return 0;
}
