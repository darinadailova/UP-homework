#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<double>a;
    vector<double>b;
    int inputA;
    int inputB;
    int n;
    cin >> n;
    double x;
    vector<double>result;

    for (int i = 0; i < n; i++) {
        cin >> inputA;
        a.push_back(inputA);
    }
    for (int i = 0; i < n; i++) {
        cin >> inputB;
        b.push_back(inputB);
    }

    for (int i = 0; i < n; i++) {
        x = (double)-b[i] / a[i];
        result.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        cout << result[i] << endl;
    }

    return 0;
}