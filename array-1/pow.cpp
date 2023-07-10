#include<iostream>
using namespace std;


int main(){
    int a,pow;
    cin>>a>>pow;
    int res=1;
    while(pow>0){
        if(pow%2==0){
            
            pow=pow/2;
            //cout<<a<<endl;
            a=a*a;
        }
        else{
            
            pow--;
            res*=a;
        }
    }

    cout<<res;

}