#include "Comparator.h"

bool Comparator::compareBytes(long long val1, long long val2) {
	return ((val1 & 0xFFL) == (val2 & 0xFFL));
};