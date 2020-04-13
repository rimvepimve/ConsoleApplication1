#ifndef GENERATOR_H
#define GENERATOR_H

class Generator {
private:
	static unsigned nGeneratorsCount;
	const int factor;
	int generateFactor(unsigned nGeneratorsCount);
public:
	Generator();
	long long generateNumber(long long parameter);
};
#endif