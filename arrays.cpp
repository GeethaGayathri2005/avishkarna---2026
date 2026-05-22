#include<iostream>
using namespace std;
int printdistinctvalues(int arr[],int n){
    
    
    for(int i=0;i<n;i++){
        int j;
        for(int j=0;j<i;j++)
            if(arr[i]==arr[j])
                break;
            
            if(j==i)
                cout<<"\n"<<arr[j]<<" ";
            
    
            
    } 
   
}
int main(){
    int arr[]={10,20,30,10,20,50,70};
    int n=7;
    printdistinctvalues(arr,n);
    return 0;
}