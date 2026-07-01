#include <vector>

class PrimeFactors {
public:
	std::vector<int> of(int number) {
		std::vector<int> result = {};
		if (number > 1) {
			while (number % 2 == 0) {
				result.push_back(2);
				number /= 2;
			}
		}
		return result;
	}
};