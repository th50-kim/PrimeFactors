#include <iostream>
#include <vector>

using namespace std;

class PrimeFactors {
public:
	vector<int> of(int value)
	{
		int rem = value;
		vector<int> v;
		int n = 2;

		do {
			if ((rem % n) == 0) {
				rem /= n;
				v.push_back(n);
				n = 2;
			}
			else
				n++;
		} while (n <= rem);
			
		return v;
	}
};