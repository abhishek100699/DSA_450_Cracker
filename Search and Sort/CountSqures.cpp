/*
Consider a sample space S consisting of all perfect squares starting from 1, 4, 9 and so on. 
You are given a number N, you have to output the number of integers less than N in the sample space S.
*/

#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int countSquares(int N) {
        // there are Sqrt(n) perfect squares less than n.
        int i=1;
        int count;
        while(i*i < N){
            i++;
            count++;
        }
        return count;
    }
};