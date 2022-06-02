#include <iostream>
using namespace std;
int xi(int x,int y,int count){
    x++;
    count++;
    if(x!=y){
        return xi(x,y,count);
    }
    else{
        return count;
    }
}
int yi(int x,int y,int count){
    y+=2;
    count++;
    if(x!=y){
        return yi(x,y,count);
    }
    else{
        return count;
    }
}
int main() {
    int t,x,y,count;
    cin>>t;
    while(t--){
        count=0;
        cin>>x>>y;
        int res=x-y;
        if(res==0){
            cout<<count<<"\n";
        }
        else if(res<0){
            cout<<xi(x,y,count)<<"\n";
        }
        else if(res>0){
            if(res%2==0){
                cout<<yi(x,y,count)<<"\n";
            }
            else{
                x++;
                count++;
                cout<<yi(x,y,count)<<"\n";
            }
        }
    }
	return 0;
}
