#include <iostream>
#include <vector>

using namespace std;

class PrimeFactors {
public:
	vector<int> of(int value)
	{
		int remainder = value;
		vector<int> v;
		int divisor = 2;

		do {
			if ((remainder % divisor) == 0) {
				remainder /= divisor;
				v.push_back(divisor);
				divisor = 2;
			}
			else
				divisor++;
		} while (divisor <= remainder);
			
		return v;
	}
};