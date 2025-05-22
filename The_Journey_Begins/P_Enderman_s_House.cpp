#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int l = n - 2;
    int w = m - 2;
    int last = l - k + 1;
    int total = last * w;
    double area= (double) total / k;
    cout << fixed << setprecision(4) << area << "\n";
    return 0;
}
