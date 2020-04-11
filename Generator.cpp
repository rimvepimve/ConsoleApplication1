#include "Generator.h"
#include <climits>

Generator::Generator(long longNumb) : factor(longNumb){};

long long Generator::generateNumber(long long parameter) {
	return (parameter * factor) % INT_MAX; // INT_MAX = 2147483647
};

