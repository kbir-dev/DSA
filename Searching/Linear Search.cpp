#include <iostream>
using namespace std;

class Searching {
    int n;
    int *arr; 
public:
    Searching() {
        n = 10;
        arr = new int[n]; 
    }
    void inputArray(); 
    int LinearSearch(int key); 
    void displayArray(); 
    void Location(int key); 
    ~Searching() {
        delete[] arr; 
    }
};

void Searching :: inputArray() {
    cout << "Enter Your Array : " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << endl;
}

int Searching :: LinearSearch(int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

void Searching :: displayArray() {
    cout << "Your Array is : " << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Searching :: Location(int key) {
    int loc = LinearSearch(key);
    if(loc != -1) {
        cout << key << " is at index : " << loc << endl;
    } else {
        cout << key << " is not present in the array." << endl;
    }
}

int main() {
    Searching s1;
    s1.inputArray();
    s1.displayArray();
    s1.Location(5);
    return 0;
}

