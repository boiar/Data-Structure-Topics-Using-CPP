#include<iostream>
using namespace std;


void bubbleSort(int arr[], int n){

    bool flag = true;
    int counter = 0;
    for (int i = 0; i < n -1 ; i++) {

        for (int j = 0; j < n-i-1 ; j++) {
            if (arr[j] > arr[j+1]) {

                // int temp = arr[j];
                // arr[j]   = arr[j+1];
                // arr[j+1] = temp;

                swap(arr[j], arr[j + 1]);
                flag = false;
            }
            counter++;
        }

        if (flag == true)   
            break;
    }

    cout << "Num of Rounds => " << counter << endl;
}



void printArr(int arr[], int n){

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[] = {9,10,11,12,13,13,15};
    int n = sizeof(arr)/ sizeof(arr[0]);
 

   
    cout << "Array before Sort" << endl;
    printArr(arr, n);
    bubbleSort(arr, n);
    cout << "Array after Sort" << endl;
    printArr(arr, n);   

}

