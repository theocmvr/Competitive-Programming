    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    int main(){    
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        vector<ll> psum(n+1, 0);
        for (int i = 1; i <= n; i++){
            ll num;
            cin >> num;
            psum[i] = psum[i-1] + num;
            // cout << psum[i] << " ";
        }
        //cout << endl;
        ll first, second, third;
        ll menortotal = LONG_LONG_MAX;
        int l = 0;
        for (int r = 2; r <= n; r++){\
            while (l+1 < r && abs((psum[l+1])-(psum[r] - psum[l+1])) < abs((psum[l]) - (psum[r] - psum[l]))) l++;
            first = psum[l];
            second = psum[r] - psum[l];
            third = psum[n] - psum[r];
            ll maioratual = max({first, second, third});
            menortotal = min(maioratual, menortotal);
        }
        cout << menortotal << endl;
        return 0;
    }