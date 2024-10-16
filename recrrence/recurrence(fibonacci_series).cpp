#include<iostream>
using namespace std;




// 1 
// 1 +1
// 2

int fib(int n){

    
    if (n == 1 || n == 1){
        return 1;
    }
    
    return n + fib(n-1);

}

// 4 + 3 + 





int main(){
    // 1,1,2,3,5
    int var = fib(4); 
    cout << var; 
    return 0; 
}

