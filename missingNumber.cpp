#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Bruteforce method
int missing(vector<int> &arr){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    for(int i =0;i<n;i++){
        if(arr[i]!=i){
            return i;
        }
    }  
    return n;
}

//optimized method by bitwize xor
int optimizedmissing(vector<int> &arr){
    int n = arr.size();
    int ans =0;
    int num =0;
    for(int i =0;i<n;i++){
       num = num^(i+1);
       ans = ans^(arr[i]);
    }  
    return num^ans;
}

int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    vector<int> arr;
    cout<<"Enter arry element"<<endl;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    int ans = optimizedmissing(arr);
    cout<<ans<<endl;
    
}