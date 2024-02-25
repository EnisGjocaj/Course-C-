//5. Binary Search , kerkimi binarë

//Kerkimi binarë kerkon nje vektore te sortuar dhe ne menyre te perseritur e pjestojme intervalin e kerkimit ne gjysme derisa ta gjejme elementin e kerkuar.

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& vec, int key) {
    int left = 0, right = vec.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (vec[mid] == key)
            return mid;
        if (vec[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> vec = {2, 5, 8, 12, 16, 23, 38, 32, 72, 91};
    int key = 23;
    int result = binarySearch(vec, key);
    if (result != -1) {
        cout << "Elementi gjendet ne indeksin" << result << endl;
    } else {
        cout << "Elementi nuk gjendet" << endl;
    }
    return 0;
}
