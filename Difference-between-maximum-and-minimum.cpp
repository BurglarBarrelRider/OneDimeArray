#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int numbers[n];

    for (int i = 0; i < n; i++) {
        cin >> numbers[i]; 
    }

    int min = numbers[0]; // в minNum значение первого элемента массива
    int max = numbers[0]; 

    for (int i = 1; i < n; ++i) {
        if (numbers[i] < min) {
            min = numbers[i]; // обновляем значение min новым минимумом из numbers[]
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    int diff = max - min; // разница 
    cout << diff << endl; 
    return 0;
}

