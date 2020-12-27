#include <bits/stdc++.h>
using namespace std;
int KnapSack(int W, vector<int> val, vector<int> wt, int n) {
	
	vector<vector<int> >  x(n + 1,vector<int>(W + 1));
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= W; j++) {
			if (i == 0 ||j == 0)
				x[i][j] = 0;
			else if (wt[i - 1] <= j)
				x[i][j] = max(val[i - 1] + x[i - 1][j - wt[i - 1]], x[i - 1][j]);
			else
				x[i][j] = x[i - 1][j];
		}
	}

	return x[n][W];
}

int main() {
	int n, W;
	cin >> W >> n;

	vector<int> Values(n);
	vector<int> Weights(n);
	int Temp;
	for (size_t i = 0; i < n; i++) {
		cin >> Temp;
		Values[i] = Weights[i] = Temp;
	}
	cout << KnapSack(W, Values, Weights, n) << endl;
}
