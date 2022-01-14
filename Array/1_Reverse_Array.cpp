/*
Given an array (or string), the task is to reverse the array/string.
*/


#include<bits/stdc++.h>
using namespace std;

int * reverse(int arr[],int n){
    int l = 0;
    int h = n-1;
    while(l<h){
        int temp = arr[h];
        arr[h] = arr[l];
        arr[l] = temp;
        l++;
        h--;
    }
    return arr;
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]) ;
    int *ans = reverse(arr,n);
    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }

}