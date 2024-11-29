#include<iostream>
using namespace std;

int main(){
    int N ;
    int even =0,Odd =0;
    while(true){
        cout << "Enter an integer: ";
        cin >> N;
        if(N==0){
            break;
            
        }
        if(N%2==0){
            even++;
        }else{
            Odd++;
        }  
    }
    cout << "#Even numbers = " << even << "\n";
    cout << "#Odd numbers = " << Odd ;
    return 0;
}
