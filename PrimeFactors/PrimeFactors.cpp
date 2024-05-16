#include <iostream>
#include <vector>

using namespace std;

class PrimeFactors {
public:
	vector<int> of(int value)
	{
		int rem, div;
		vector<int> v;
		int n = 0;

		div = value;
		do {
			for (int n = 2; n < value; n++) {
				if ((div % n) == 0) {
					div /= n;
					v.push_back(n);
					n = 2;
				}
			}
		} while (n == value);
			
		return v;
	}
};