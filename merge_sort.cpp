#include<stdlib.h> 
#include<stdio.h> 
#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
 

   class merge_sort
   {
  
   public:
   
    void merge(int arr[], int l, int m, int r)
    {
         
         int left =l;
         int right=m+1;
         vector<int>temp;
         
         while(left<=m && right<=r){
             if(arr[left]>arr[right])
             {
                 temp.push_back(arr[right]);
                 right++;
             }
             else{
                 temp.push_back(arr[left]);
                 left++;
             }
         }
         while(left<=m){
             temp.push_back(arr[left]);
                 left++;
         }
         while(right<=r){
             temp.push_back(arr[right]);
                 right++;
         }
         for(int i=l; i<=r; i++){
             arr[i]=temp[i-l];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l == r) return;
        int m=(l+r)>>1;
            mergeSort(arr,l,m);
            mergeSort(arr,m+1,r);
            merge(arr,l,m,r);
    }
}; 
int main() 
{ 
    int size;
    cout<<"Enter the size of the Array that is to be sorted: "; cin>>size;
    int Hello[size],i;
    cout<<"Enter the elements of the array one by one:n";
    for(i=0; i<size; i++) cin>>Hello[i];
    mergeSort(Hello, 0, size - 1);
    cout<<"The Sorted List isn";
    for(i=0; i<size; i++)
    {
        cout<<Hello[i]<<" ";
    }
    return 0;
}
