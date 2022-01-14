
// Sort 0 1 2 in the given array


#include<bits/stdc++.h>
using namespace std;

 void sort012(int a[], int n)
    {
        int low = 0, high = n-1,mid = 0;
        while(mid<=high){
            if(a[mid] == 0){
                swap(a[low],a[mid]);
                low++;
                mid++;
                
            }
            else if(a[mid] == 1){
                mid++;
            }
            else{
                swap(a[mid],a[high]);
                high--;
            }
        }
    }


int main(){
    int arr[] = {0,2,2,1,2,2,1,0,0};
    sort012(arr,9);
    for(int x:arr){
        cout << x << " " ;
    }
}