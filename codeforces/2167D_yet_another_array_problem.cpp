#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        for (long long x=2;;x++){

            bool found=false;

            for(int i=0;i<n;i++){

                if(__gcd(a[i], x)==1) {
                    found=true;
                    break;
                }
            }

            if(found){
                cout << x << "\n";
                break;
            }
        }
    }

    return 0;
}