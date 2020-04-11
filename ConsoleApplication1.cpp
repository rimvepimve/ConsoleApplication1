#include <iostream>
#include <string>
int main(int argsLength, char *args[]) {
	if (argsLength < 2) {
		printf("Error. Program needs 2 arguments.");
		return(1);
	}
  	long long p1 = std::stoll(args[1]);
	long long p2 = std::stoll(args[2]);
    long d=2147483647;
    long a=16807;
    long b=48271;
    int count=0;
    for (int i=0; i < 1000000 ; i ++) {
        p1=(p1*a)%d;
        p2=(p2*b)%d;
        if((p1&0xFFL)==(p2&0xFFL))
            count++;
    }
    printf("count: %d",count);
}


