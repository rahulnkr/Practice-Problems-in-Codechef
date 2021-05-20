#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
    int N;
    cin>>N;
    for(int i=1; i*i<=N; i++){
        if(N%i==0){
            cout<<"1 "<<N/i<<endl;
            break;
        }
        }
    }
    
    return 0;
    

}