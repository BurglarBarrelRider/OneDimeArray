#include <iostream>

using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
    
//     for(int i = n - 1; i >= 0; i--){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

int main()
{
    int n, i, j;
    int arr[105];
    cin>>n;

    for(i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    // reverse process
    i = 0; j = n - 1;
    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for(i = 0; i<n; i++){
        cout << arr[i]<<" ";
    }
}

