#include <iostream>
#include <string>
#include "Generator.h"
#include "Comparator.h"

using std::stoll;

int main(int argsLength, char* args[]) {
	if (argsLength < 2) {
		printf("Error. Program needs 2 arguments.\n");
		system("pause");
		return(1);
	}
	
	long long param1 = stoll(args[1]);
	long long param2 = stoll(args[2]);
	const int iterations = 1000000;
	const long factorA = 16807;
	const long factorB = 48271;
	int equalBytesCount = 0;

	Generator a = Generator(factorA);
	Generator b = Generator(factorB);
	Comparator c = Comparator();

	//generating and comparing numbers
	for (int i = 0; i < iterations; i++) {
		param1 = a.generateNumber(param1);
		param2 = b.generateNumber(param2);
		if (c.compareBytes(param1, param2))
			equalBytesCount++;
	}
	
	printf("The last bytes were equal in %d of %d comparisons.\n", equalBytesCount, iterations);	
	system("pause");	
	return 0;
}