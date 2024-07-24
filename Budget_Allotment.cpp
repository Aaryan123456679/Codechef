#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int N,X;
        cin >> N >> X;
        int a[N];
        int maxi = 0;
        for(int i = 0 ; i < N ; i++){ cin >> a[i]; maxi = max(maxi, a[i]);}

        if(X > maxi) {cout << 0 << endl; continue;}

        int  excess = 0;
        int cnt = 0;
        vector<int> lesserOnes;
        for(int i = 0 ; i < N  ; i++){
            if(a[i] > X){ cnt++; excess += a[i] - X;}
            else if(a[i] == X) cnt++;
            else lesserOnes.push_back(a[i] - X);
        }

        sort(lesserOnes.rbegin(), lesserOnes.rend());
        for(auto less : lesserOnes){
            if(excess + less >= 0){
                excess += less;
                cnt++;
            }else break;
        }

        cout << cnt << endl;
    }
    return 0;
}