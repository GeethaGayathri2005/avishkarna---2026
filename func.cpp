#include<iostream>
using namespace std;
int main(){
    //min
    int nums[]={1,2,3,2,5};
    int smallest=INT8_MAX;
    int largest=INT8_MIN;
    int size=5,d;
    for(int i=0;i<size;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
        }
    }
    for(int i=0;i<size;i++){
        if(nums[i]>largest){
            largest=nums[i];
        }
    }
    // cout<<"smallest="<<smallest<<endl;
    // cout<<"largest="<<largest<<endl;
    //max
    // int largest=INT8_MIN;
    // for(int i=0;i<size;i++){
    //     if(nums[i]>largest){
    //         largest=nums[i];
    //     }
    // }
    // cout<<"largest="<<largest<<endl;
    //swap
//     cout<<"index of min num is:"<<nums[]
    int target=smallest,f;
    for(int i=0;i<size;i++){
        if(nums[i]==target){
           f=i;
        }
    }
    // cout<<f<<endl;
    int x=largest,g;
    for(int i=0;i<size;i++){
        if(nums[i]==x){
           g=i;
        }
    }
    // cout<<g<<endl;
    swap(nums[f],nums[g]);
    for(int i=0;i<size;i++){
        cout<<nums[i]<<" "<<"\n";
    }
    swap(nums[f],nums[g]);
    for(int i=0;i<size;i++){
        cout<<"\n"<<nums[i]<<" ";
    }

    
    return 0;
 }