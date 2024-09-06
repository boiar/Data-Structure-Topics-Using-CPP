
// note => this way to search must be data (sorted)

#include<iostream>
using namespace std;


int binarySearch(int [], int , int, int);


int main(){
    int arr[] = {10, 11, 12, 13, 14, 15};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int key;

    cout << "size => " << n << endl;
    cout << "Enter an Number => ";
    cin >> key;

    int res = binarySearch(arr, 0, n-1, key);

    cout << "res => " << res << endl;
    
    if(res == -1 )
        cout << "The Number ( " << key << " ) Not Found !" << endl;
    else 
        cout << "The Number ( " << key << " ) Found At Index => " << res << endl;


}

int binarySearch(int arr[], int low , int high, int key){

    while (low <= high)
    {
        int middle = (low + high) / 2;

        if (arr[middle] == key) {
            return middle;
        }

        if (arr[middle] < key) {
            low =  middle + 1; 
        } else {
            high = middle - 1;
        } 
    }
    
    return -1;
}