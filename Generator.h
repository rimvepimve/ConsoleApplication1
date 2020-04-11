#ifndef GENERATOR_H
#define GENERATOR_H

class Generator {
private:
	const long factor;
public:
	Generator(long factor);
	long long generateNumber(long long parameter);	
};
#endif

