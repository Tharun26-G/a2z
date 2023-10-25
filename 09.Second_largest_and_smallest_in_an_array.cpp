#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int secondlar(vector<int>& a, int n) {
    int largest = a[0];
    int slargest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            slargest = largest;
            largest = a[i];
        } else if (a[i] > slargest && a[i] != largest) {
            slargest = a[i];
        }
    }
    return slargest;
}

int secondsmal(vector<int>& a, int n) {
    int small = a[0];
    int ssmall = INT_MAX;

    for (int i = 1; i < n; i++) {
        if (a[i] < small) {
            ssmall = small;
            small = a[i];
        } else if (a[i] < ssmall && a[i] != small) {
            ssmall = a[i];
        }
    }
    return ssmall;
}

vector<int> getSecondOrderElements(int n, vector<int>& a) {
    int secondlargest = secondlar(a, n);
    int secondsmallest = secondsmal(a, n);

    return {secondlargest, secondsmallest};
}

int main() {
    vector<int> arr = {5, 2, 8, 1, 9, 3};
    int n = arr.size();

    vector<int> result = getSecondOrderElements(n, arr);

    cout << "Second Largest: " << result[0] << endl;
    cout << "Second Smallest: " << result[1] << endl;

    return 0;
}
