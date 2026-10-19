#include <iostream>
using namespace std;



int* sort(int* arr, int n, int& count) {
    count = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0) {
            ++count;
        }
    }

    int* new_arr = new int[count];
    int j = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0) {
            new_arr[j] = arr[i];
            ++j;
        }
    }

    return new_arr;
}


int main(){
	int n{};
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; ++i) {
		cout << arr[i] << ' ';
	}
	
    cout << endl;

    int count;
    int* new_arr = sort(arr, n, count);

    cout << count << endl;

    for (int i = 0; i < count; ++i) {
        cout << new_arr[i] << ' ';
    }

    delete[] new_arr;
    delete[] arr;

	return 0;
}
