#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// fill in the vectors with 0's except for bit
		vector<long long> v = {1, 0, 0};
		for (int i = 3; i <= n; i++) {
			if (i % 26 == 3) {
				// after 2 seconds, swap bit and nibble
				swap(v[1], v[0]);
			} else if (i % 26 == 11) {
				// after 2 + 8 seconds, swap nibble and byte
				swap(v[2], v[1]);
			} else if (i % 26 == 1) {
				// after 2 + 8 + 16 seconds, swap bit and byte
				// multiply bit by 2 (this is like splitting the byte into 2)
				swap(v[0], v[2]);
				v[0] *= 2;
			} 
		}
		cout << v[0] << " " << v[1] << " " << v[2] << '\n';
	}
	return 0; 
}
