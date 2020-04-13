#include "Generator.h"
#include <climits>
#include <stdlib.h>
#include <ctime>

Generator::Generator():factor(generateFactor(nGeneratorsCount)) {
	nGeneratorsCount++;
};

long long Generator::generateNumber(long long parameter) {
	return (parameter * factor) % INT_MAX; // INT_MAX = 2147483647
};

int Generator::generateFactor(unsigned nGeneratorsCount) {
	switch (nGeneratorsCount) {
	case 0:
		return 16807;
	case 1:
		return 48271;
	}
	srand(time(NULL));
	return rand() % 90000 + 10000;
}
