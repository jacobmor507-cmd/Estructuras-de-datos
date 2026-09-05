#include <iostream>
#include <vector>

using namespace std;

int bubbleSort(std::vector<int>& a) {
    int n = (int)a.size();
    for (int i = 0; i < n - 1; ++i) {          // n-1 pasadas
        for (int j = 0; j < n - 1 - i; ++j) {  // zona no ordenada
            if (a[j] > a[j + 1])
                std::swap(a[j], a[j + 1]);
        }
    }
    for (int k = 0; k < n; ++k){
        cout << a[k] << " ";
    }
}
int main()
{
    vector<int> arr={12,9,8,5,3,1};

    cout << bubbleSort(arr);
    return 0;
}
