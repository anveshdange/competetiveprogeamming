// Given Number is Odd or Even:-
#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE //Not part of the code , used to beautify the code
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin >> n;
    if(n%2==0){
        cout<<"Even\n"<<endl;
    }else{
        cout<<"Odd\n"<<endl;
    }
    return 0;
}