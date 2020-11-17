#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Function to calculate the GCD of n and k.

int gcd(int a,int b){
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int main()
{


        int n,k,d,j,temp;

        //Input the values of n and k.
        /*here n is the size of array and k is the number
         of positions to be rotated*/

        cin>>n>>k;
        int a[n];
        for(int m=0;m<n;m++){
            cin>>a[m];
        }
        for(int i=0;i<gcd(n,k);i++){          // Invoking the GCD function.
            j=i;
            temp=a[i];
            while(1){
                d=(j+k)%n;
                if(d==i)
                break;
                a[j]=a[d];
                j=d;
            }
            a[j]=temp;
        }
        for(int m=0;m<n;m++){
            cout<<a[m]<<" ";
        }




}
