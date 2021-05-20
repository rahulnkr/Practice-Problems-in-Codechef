#include <iostream>
using namespace std;
typedef long long int ll; 

void selection_sort(ll a[], ll n){
    
	for(ll i=1; i<n; i++){
	    
		ll min_index=i;
		for(ll j=i; j<=n; j++){
			if(a[j]<a[min_index]){
				min_index=j;
            }
		}	
		swap(a[i],a[min_index]);
	}
}

int main(){
    ll t;
    cin>>t;
    while(t--){


	ll n, k, temp;
	cin>>n;
	ll array[n];
    
    
    for(ll i=1; i<=n; i++){
        cin>>array[i];
    }
    cin>>k;
    for(ll i=1; i<=n; i++){
    	if(k==i){
    		temp=array[i];
    	}
    }

    
    selection_sort(array, n);
    for(ll i=1; i<=n; i++){
        if(temp==array[i])
        	cout<<i<<endl;
    }
    
    }
return 0;
}