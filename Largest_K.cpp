#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int array[n];
        for(int i = 0 ; i < n; i++) cin >> array[i];

        int low = 0, high = n;

        set<int> unique;
        for(int i = 0 ; i < n ; i++){
            unique.insert(array[i]);
        }
        int maxi = 0;
        for (int i  = unique.size(); i >= 1 ; i--){
            maxi = max(maxi, n - i%n);
        }

        cout << maxi << endl;
        
    }
    return 0;
}