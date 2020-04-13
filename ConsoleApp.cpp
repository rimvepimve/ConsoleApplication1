#include <iostream>
#include <string>
#include "Generator.h"
#include "Comparator.h"
#include <vector>

unsigned Generator::nGeneratorsCount(0);
int countEquals(int comparisons, std::vector<Generator> generator, long long* param);

int main(int argsLength, char* args[]) {
	if (argsLength < 3) {
		printf("Error. Program needs at least 2 arguments.\n");
		return(1);
	}
	const int comparisons = 1000000; 
	long long* param = new long long[argsLength-1];
	for (int i = 1; i < argsLength; i++) {
		param[i-1] = std::stoll(args[i]);
	}
	std::vector<Generator> generator;
	for (int i = 0; i < argsLength-1; i++) {
		generator.push_back(Generator());
	}		
	printf("The last bytes were equal in %d of %d comparisons.\n", countEquals(comparisons, generator, param), comparisons);
	delete[] param;
	return 0;
}

int countEquals(int comparisons, std::vector<Generator> generator, long long* param) {
	int equalBytesCount = 0;
	for (int i = 0; i < comparisons; i++) {
		for (size_t j = 0; j < generator.size(); j++) {
			param[j] = generator[j].generateNumber(param[j]);
		}
		if (Comparator::compareLastBytes(param, generator.size()))
			equalBytesCount++;
	}
	return equalBytesCount;
};