#include<iostream>
using namespace std;


int linearSearch(int [], int , int);


int main(){
    int arr[] = {90, 10, 28, 16, 70, 50};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int key;

    cout << "size => " << n << endl;
    cout << "Enter an Number => ";
    cin >> key;

    int res = linearSearch(arr, n, key);

    cout << "res => " << res << endl;
    
    if(res == -1 )
        cout << "The Number ( " << key << " ) Not Found !" << endl;
    else 
        cout << "The Number ( " << key << " ) Found At Index => " << res << endl;


}

int linearSearch(int arr[], int n , int key){

    for (int i = 0; i < n; i++) {
        if (arr[i] == key){
            return i;
        }
    }
     return-1;   
}