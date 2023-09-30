#include <iostream>
using namespace std;

int main() {
   int i,n,sum=0;
   cout<<"enter nth number: ";
   cin>>n;
    for(i=1;i<=n;i++){
        sum=sum+i*i*i;
    }
    cout<<sum<<",";
     return 0;
}
