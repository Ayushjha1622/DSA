// // reverse order
// #include<iostream>
// using namespace std;

// void ReverseOrder(int n){
//     for(int i=n; i>0; i--){
//         cout<<i<<" ";
//     }
//     // cout << endl; 
// }

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     cout << "Order is: ";
//     ReverseOrder(n); 
//     return 0;
// }

// // using recursion

#include<iostream>
using namespace std;

void ReverseOrder(int n){
    if(n<=0){
        return;
    }
    else{
        cout<<n<<" ";
        ReverseOrder(n-1);
    }
}
int main(){
int n;
cout << "Enter a number: ";
cin >> n;
cout << "Order is: ";
ReverseOrder(n);
return 0;

}

