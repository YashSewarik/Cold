#include <iostream>
#include <vector>
using namespace std;

void f(int index, vector<int> &current, int sum, const vector<int> &arr) {
    if (index == arr.size()) {
        
        int s = 0;
        for (int a : current) {
            s += a;
        }

        if (s == sum) {
            for (int a : current) {
                cout << a << " ";
            }
            cout << endl;
        }

        return;
    }

   
    current.push_back(arr[index]);
    f(index + 1, current, sum, arr);

    
    current.pop_back();
    f(index + 1, current, sum, arr);
}

int main() {
    vector<int> arr = {1, 2, 1};
    int sum = 2;

    vector<int> ds;
    f(0, ds, sum, arr);

    return 0;
}
