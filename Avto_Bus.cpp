#include <iostream>
using namespace std;
 
int main() {
    int t;
    long long int n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        if(n%2==1 || n<4){ 
            cout<<-1<<endl;
            continue;
        }
        if(n%6==0){
            cout<<n/6;
        }
       
        else if(n%6==2 || n%6==4){
            cout<<n/6+1;
        }
        cout<<" ";
        if(n%4==0 || n%4==2){
            cout<<n/4;
        }
        cout<<endl;
        
    }
    return 0;
}