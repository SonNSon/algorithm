#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*

*/


void Dem (int a[], int n, int b[], int m){
    int i=0, j=0;
    while(j<m) {
        while(i<n && a[i]<b[j]) {
            i++;
        }
        cout << i << ", ";
        i=0;
        j++;
    }
}

int main() {
    int a[] = {1, 6, 9, 13, 18, 18};
    int n = 6;
    int b[] = {2, 3, 8, 13, 15, 21, 25};
    int m = 7;
    clock_t start, end;

    start = clock();

    Dem(a, n, b, m);

    end = clock();
    double time_taken=double(end-start)/double(CLOCKS_PER_SEC);
    cout << "\nTime taken by program is: " << fixed<< time_taken << setprecision(15) << endl;
    return 0;
}