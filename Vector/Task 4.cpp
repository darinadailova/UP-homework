#include<vector>
using namespace std;

int main() {
    vector<int>data;
    int input;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;
        data.push_back(input);
    }

    vector<int>data2;
    int input2;
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (data[i] == data[j]) {
                input2 = data[i];
                data2.push_back(input2);
                count++;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        cout << data2[i] << endl;
    }

    return 0;
}