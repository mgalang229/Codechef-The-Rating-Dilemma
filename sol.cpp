#include <bits/stdc++.h>
using namespace std;

void perform_test() {
	int s;
	cin >> s;
	
	//x > 0
	//x + y = 1
	//x - 1 = 1
	//x = 2
	
	// it's always optimal to choose -1 as the value of y
	// because it is the highest negative integer
	// for x, solve it using the value that was chosen for y
	// then for the final answer, just multiply x and y
	cout << -(s + 1) << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}
