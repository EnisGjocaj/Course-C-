//4. Kerkimi linear, Linear Search.

//Kerkimi linear ka te beje me kerkimin e vazhdueshem ne nje vektore ne menyre sequenciale per te gjetur nje element specifik te kerkuar.


#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>& vec, int key) {
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] == key) {
            return i; // kthejme indeksin e elementit te gjetur
        }
    }
    return -1; // Kthejme -1 nese nuk gjendet
}

int main() {
    vector<int> vec = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int key = 23;
    int result = linearSearch(vec, key);
    if (result != -1) {
        cout << "Elementi u gjend ne indeks " << result << endl;
    } else {
        cout << "Elementi nuk u gjend" << endl;
    }
    return 0;
}

