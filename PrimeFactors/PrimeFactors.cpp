#include <iostream>
#include <vector>

using namespace std;

class PrimeFactors {
public:
	vector<int> of(int value)
	{
		int rem = value;
		vector<int> v;
		int divisor = 2;

		do {
			if ((rem % divisor) == 0) {
				rem /= divisor;
				v.push_back(divisor);
				divisor = 2;
			}
			else
				divisor++;
		} while (divisor <= rem);
			
		return v;
	}
};