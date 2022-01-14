
// miv negatives to end of the array.


#include<bits/stdc++.h>
using namespace std;

void moveNegativeToEnd(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(i!=j){
                swap(arr[i],arr[j]);
            }
            j++;
        }
        
    }
}


int main(){
    int arr[] = {-1,3,2,-4,5,9};
    moveNegativeToEnd(arr,6);
    for(int x:arr){
        cout << x << " " ;
    }
}