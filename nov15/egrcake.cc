#include <iostream>
#define ll long long

ll gcd(ll a, ll b)
{
    if (!b) return a;
    if (!a) return b;
    return ((a > b) ? gcd(a%b, b) : gcd(b%a, a));
}

int main()
{
    ll t, n, m;
    std::cin >> t;
    while (t--) {
	std::cin >> n >> m;
	ll g = gcd(n, m);
	if (gcd(n, m) == 1) {
	    std::cout << "Yes" << std::endl;
	} else {
	    std::cout << "No " << (n / g) << std::endl;
	}
    }
    return 0;
}
