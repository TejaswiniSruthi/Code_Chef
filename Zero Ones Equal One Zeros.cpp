#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    bool p=true;
	    int l;
	    cin>>l;
	    string s="";
	    string rs="";
	    if(l%2){
	        if(((l-1)/2)%2){
	            for(int i=1;i<=(l-1)/2;i++){
	                if(p){
	                    s+='0';
	                    rs='0'+rs;
	                    p=false;
	                }
	                else{
	                    s+='1';
	                    rs='1'+rs;
	                    p=true;
	                }
	            }
	            s+=('1'+rs);
	            
	        }
	        else{
	            for(int i=1;i<=(l-1)/2;i++){
	                if(p){
	                    s+='0';
	                    rs='0'+rs;
	                    p=false;
	                }
	                else{
	                    s+='1';
	                    rs='1'+rs;
	                    p=true;
	                }
	            }
	            s+=('0'+rs);
	        }
	    }
	    else{
	        for(int i=1;i<=(l)/2;i++){
	           if(p){
	               s+='1';
	               rs='1'+rs;
	               p=false;
	           }
	           else{
	               
                    s+='0';
                    rs='0'+rs;
                    p=true;
	           }
	        }
	        s+=rs;
	    }
	    cout<<s<<"\n";
	    
	}
	return 0;
}
