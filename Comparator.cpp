#include "Comparator.h"

bool Comparator::compareLastBytes(long long val[], int arrSize) {
	for (int i = 1; i < arrSize; i++) {
		if ((val[i - 1] & 0xFFL) != (val[i] & 0xFFL))
			return false;
	}
	return true;
};