#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>data;
    int input;
    int n;
    cin >> n;
    int sum = 0;
    double average;
    for (int i = 0; i < n; i++) {
        cin >> input;
        data.push_back(input);
    }

    for (int i = 0; i < n; i++) {
        sum += data[i];
    }
    average = (double)sum / n;

    vector<int>numbers;
    int index;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (data[i] > average) {
            count++;
            index = i;
            numbers.push_back(index);
        }
    }
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}