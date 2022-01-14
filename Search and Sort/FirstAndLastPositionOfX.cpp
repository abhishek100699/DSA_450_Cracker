/*Given an unsorted array Arr of size N of positive integers.
 One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.
 */




#include<bits/stdc++.h>
using namespace std;




int leftindex(int arr[],int n,int x){
    int fi = -1;
    int left = 0, right = n-1;
    while(left<=right){
        int mid = (left+right)/2 ;
        if(arr[mid]==x){
            fi = mid;
            right = mid-1;
        }
        else if(arr[mid]<x){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return fi;
} 


int rightindex(int arr[],int n,int x){
    int li = -1;
    int left = 0, right = n-1;
    while(left<=right){
        int mid = (left+right)/2 ;
        if(arr[mid]==x){
            li = mid;
            left = mid+1;
        }
        else if(arr[mid]<x){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return li;
}


vector<int> find(int arr[], int n , int x )
{
    vector<int> ans;
    int fi = leftindex(arr,n,x);
    int li = rightindex(arr,n,x);
    ans.push_back(fi);
    ans.push_back(li);
    return ans;

}

int main(){
    int n = 9;
    int x = 5;
    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    vector<int> ans = find(arr,9,5);
    cout << "The first ans last index of the val is " ;
    for(auto val:ans){
        cout << val << " " ;
    }

}