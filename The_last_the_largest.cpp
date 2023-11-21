#include <iostream>
using namespace std;

int main(){
    
    unsigned int n;
    cin>>n;

    int arr[n];
    for(int i = 0;i < n; i++){
        cin>>arr[i];
    }
    int maxI = n - 1; // arr[n - 1] это последний элемент - максимум по умолчанию
    
    for(int i = n - 2; i >= 0; i--){
        if(arr[i] > arr[maxI]){
            maxI = i;
        }
    }
    
    // for(int i = 0; i < n - 1; i++){
    //     if(arr[i] > arr[maxI]){
    //         maxI = i;
    //     }
    // }
    
    if(maxI != n - 1){
        int var = arr[n - 1];
        arr[n - 1] = arr[maxI];
        arr[maxI] = var;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}