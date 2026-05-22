#include<iostream>
#include<vector>
using namespace std;
// int linearsearch(vector<int>num,int x,int size){
//        int g;
//        for(int i:num){
//            if(i==x){
//               cout<<i;
//            }
//         cout<<endl;
//        }
int reverseofvector(vector<int>vec,int size){
    // for(int j:vec){
    //     cout<<j<<" ";
    // }
    int start=0,end=size-1;
    while(start<=end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    for(int i=0;i<size;i++){
         cout<<vec[i]<<" ";
    }
    
    

    cout<<endl;
}

int main(){
    // vector<int>num={3,4,5,6};
    vector<int>vec={10,20,30,40,50};
    int size=5;
    // for(int j:vec){
    //     cout<<j<<" ";
    // }

    // int x=5,size=4;
    // linearsearch(num,x,size);
    reverseofvector(vec,size);
    return 0;
    
}


        