#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string arr;
        cin >> arr;

        int j = 0;
        for( ; j < n && k > 0; j++) if(arr[j] == '1') if(k-- == 0) break;

        if(j == n || n == 1){
            cout << 0 << endl;
        }else{
            int answer = 0, numZero = 0;
            for(int i = n - 1; i >= j; i--){
                if(arr[i] == '1'){
                    answer += numZero;
                }else{
                    numZero++;
                }
            }

            cout << answer << endl;
        }
    }
    return 0;
}