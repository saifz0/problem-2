#include<bits/stdc++.h>
using namespace std;
int main(){

   vector<int> a{31,45,78,54,78,29,55};
   int n= a.size();
   for(int i=n-1; i>=0 ;i-- ){
        for(int j=0 ; j<i; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
   }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }

        return 0;
}