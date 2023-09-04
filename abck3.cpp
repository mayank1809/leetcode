#include <iostream>
using namespace std;
void print(char arr[], char strsize[], int length, int pos = 0) {
    if (pos == length) {
        strsize[pos] = '\0';  
        cout << strsize << endl;
        return;
    }

    for (int i = 0; i < 3; i++) {
        strsize[pos] = arr[i];
        print(arr, strsize, length, pos + 1);
    }
}

int main() {
    char arr[] = {'a', 'b', 'c'};
    char strsize[4];  // One extra for the null terminator

    print(arr, strsize, 3);

    return 0;
}
