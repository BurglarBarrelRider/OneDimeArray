#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int prev, current;
    cin >> prev;

    for (int i = 1; i < n; i++) { // начинаем с 1 так как у нас уже есть первый элемент
        cin >> current; 
        if ((prev > 0 && current > 0) || (prev < 0 && current < 0)) {
            cout << prev << " " << current << endl;
        }
        prev = current;
    }

    return 0;
}
