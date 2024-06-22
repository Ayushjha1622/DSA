//iterative solution

// #include<iostream>
// using namespace std;

// void PrintOrder(int n){
//     for(int i=1; i<=n; i++){
//         cout<<i<<" ";
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the number of elements: ";
//     cin>>n;
//     PrintOrder(n);


// return 0;

// }


// recursive approach
#include<iostream>
using namespace std;

void PrintOrder(int n){
    if(n>0){
       PrintOrder(n-1);
       cout<<n<<" ";
        
    }
    else{
        return;
    }

}
int main(){
 int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    PrintOrder(n);

return 0;

}