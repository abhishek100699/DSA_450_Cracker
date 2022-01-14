/*
Given an array Arr of N positive integers.
Your task is to find the elements whose value is equal to that of its index value ( Consider 1-based indexing ).
*/

#include<bits/stdc++.h>
using namespace std;

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int> ans;
	    for(int i=0;i<n;i++){
	        if(arr[i] == i+1){
	            ans.push_back(arr[i]);
	        }
	    }
	    return ans;
	}


int main(){

    int Arr[] = {15, 2, 45, 12, 7};
    vector<int>ans =  valueEqualToIndex(Arr,5);
    for(auto x: ans){
        cout << x << " " ;
    }

}