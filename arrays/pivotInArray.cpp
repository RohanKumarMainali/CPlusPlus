#include <iostream>
using namespace std;

int getPivot(int arr[],int n){

    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]>=arr[start]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;

}

    int main(){
        int arr[7]={5,7,8,10,12,1,2};
        cout<<getPivot(arr,7);

}