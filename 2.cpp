#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE //Not part of the code , used to beautify the code
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int savings;
    cin>>savings;
    if(savings>5000){
        if(savings>10000){
            cout<<"RoadTrip with Bhumi\n";
        }else{
            cout<<"Shopping with Bhumi\n";
        }
    }else if(savings>2000){
        cout<<"Ishwari\n";
    }else{
        cout<<"Sanskruti\n";
    }

    return 0;
}