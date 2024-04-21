#include <iostream>

using namespace std;

double nthTerm(int n) {
    if (n == 1) {
        return 10.0;
    }
    else {
        return nthTerm(n - 1) / 2.0;
    }
}

int main() {
    int n;
    cout << "Enter the row member number: ";
    cin >> n;

    double result = 5.0 / nthTerm(n);
    cout << "nth term of the series: " << result << endl;

    return 0;
}


