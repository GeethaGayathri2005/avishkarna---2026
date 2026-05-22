#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"its a prime number"<<endl;
    }
    else{
        cout<<"not a prime number"<<endl;
    }
    
    return 0;
}