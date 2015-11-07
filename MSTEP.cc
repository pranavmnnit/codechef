#include <iostream>
#include <map>
#include <vector>
#define tr(obj, it) \
    for (typeof(obj.begin()) it = obj.begin(); it != obj.end(); ++it)
#define mod(a, b) \
    ((a < b ? (b-a) : (a-b)))

int diff(const int& x1, const int& x2, const int& y1, const int& y2) {
    return mod(x1, x2) + mod(y1, y2);
}


int main() {
    int t, n;
    int px, py, c, cnt;
    std::map<int, std::pair<int, int> > M;
    std::cin >> t;
    while (t--) {
	M.clear(); cnt = 0;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
	    for (int j = 0; j < n; ++j) {
		std::cin >> c;
		M.insert(std::make_pair(c, std::make_pair(i+1, j+1)));
		if (c == 1) {
		    px = i+1; py = j+1;
		}
	    }
	}
	for (auto& it: M) {
	    cnt += diff((it.second).first, px, (it.second).second, py);
	    px = (it.second).first;
	    py = (it.second).second;
	}
	std::cout << cnt << std::endl;
    }
    return 0;
}
