#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

int t, n, i, a_min, b_min, arr, brr;
long long int sum;
cin>>t;

while(t--){
	cin>>n;
	int a[n], b[n];

	    for(i=0; i<n; i++){
		    cin>>a[i];
	    }

		a_min = a[0];


	    for(i=0; i<n; i++){
           if(a[i]<a_min){
			a_min = a[i];
		}
	    }


	    for(i=0; i<n; i++){
		    cin>>b[i];
		}

		b_min = b[0];

		for(i=0; i<n; i++){
	      if(b[i]<b_min){
			b_min = b[i];

	}
		}
sum = 0;

		for(i=0; i<n; i++){
			if(a[i]>a_min && b[i]>b_min){
				arr = a[i] - a_min;
				brr = b[i] - b_min;
				if(arr>brr){
					sum+=arr;
				} else{
				    sum+=brr;
				}
			}
			else if(a[i] > a_min){
				arr = a[i] - a_min;
				sum += arr;
			}
			else if(b[i] > b_min){
				brr = b[i] - b_min;
				sum += brr;
			}
		}

cout<<sum<<endl;
}
}


