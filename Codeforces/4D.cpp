#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

struct ent {
	int area{0};
	int w{0}, h{0};
	int position{-1};

	void set_area() {
		this->area = this->w * this->h;
	}

	int get_area() { return this->area; };
};

bool cmp(ent e1, ent e2) {
	return e1.area < e2.area;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	// cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
		int n;
		ent card;
		cin >> n >> card.w >> card.h;

		vector<ent> env(n);
		ent best_env;
		bool found = false;

		for (int i = 0; i < n; i++) {
			cin >> env[i].w >> env[i].h;
			env[i].set_area();
			env[i].position = i + 1;
			if (card.w < env[i].w && card.h < env[i].h && env[i].w > best_env.w && env[i].h > best_env.h) {
				best_env = env[i];
				found = true;
			}
		}

		sort(env.begin(), env.end(), cmp); 

		//for (auto x : env) cout << x.w << " " << x.h << endl;

		if (!found) {
			cout << 0 << endl;
			//cannot chain
		} else {
			//cout << "chaining" << endl;
			int count = 1;
			vector<ent> seq;
			seq.push_back(env[n - 1]);
			
			int curr = n - 2;
			int prev = n - 1;
			
			while (curr >= 0 && prev >= 0) {
				if (env[curr].w > card.w && env[curr].h > card.h) {
					if (env[curr].w < env[prev].w && env[curr].h < env[prev].h) {
						count++;
						seq.push_back(env[curr]);
						prev = curr;
					} 
				}
				curr--;
			}

			reverse(seq.begin(), seq.end());
			cout << count << endl;
			for (auto x : seq) cout << x.position << " ";
		}
	}
	return 0;
}