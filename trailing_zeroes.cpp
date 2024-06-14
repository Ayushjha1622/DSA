#include<iostream>
using namespace std;

int countzeros(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5){
        res=res+n/i;

    }
    return res;
}


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout<<"trailing zeroes of "<<n<<" is: "<<countzeros(n)<<endl;

return 0;

}