#include <iostream>
#include <vector>

using namespace std;

class PrimeFactors {
public:
	vector<int> of(int value)
	{
		int div;
		vector<int> v;
		int n = 2;

		div = value;

		do {
			if ((div % n) == 0) {
				div /= n;
				v.push_back(n);
				n = 2;
			}
			else
				n++;
		} while (n <= div);
			
		return v;
	}
};