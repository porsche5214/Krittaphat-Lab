#include<iostream>
using namespace std;

int main(){
    int i,j = 0;
    int num ;
    
    cout << "Enter an integer: ";
    cin >> num;
    
    while (num != 0){
        
        if (num % 2 == 0 ){
           i = i+1 ;
        }else{
            j = j+1 ;
        }
        cout << "Enter an integer: ";
        cin >> num;
    }
    cout << "#Even numbers = " << i <<"\n";
    cout << "#Odd numbers = " << j <<"\n";
    return 0;
}