#include <bits/stdc++.h>
using namespace std;
int longestSubsetZero(int *arr,int n)
{
     int res = 0;
     int sum=0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        if(arr[i]==0 && n ==0)
            res =1;
         if(sum==0 )
        {
            int temp=i+1;
            if(res<temp)
            res=temp;
            continue;
        }
        if(m.count(sum)>0 )
        {
            int temp=i-m[sum];
            if(res<temp)
            res=temp;
            continue;
        }
       
         m[sum]=i;
        
    }
    unordered_map<int, int>::iterator it = m.begin();
    while (it != m.end())
    {
        cout << "Key : " << it->first << " value : " << it->second << endl;
        it++;
    }
  return res;
}
int main()
{
    int arr[] = { 95, -97, -387, -435, -5, -70, 897, 127, 23, 284};
    int arr1[] = { 6,1,5,-8,-4,2};
    int n = 6;
    cout << "Longest Subset with Sum Zero = " << longestSubsetZero(arr1, n);
}