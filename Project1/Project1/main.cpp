#include "stdio.h"

int someFunc() 
{
	int someSomeValue = 2;
	int anotherSomeValue = someSomeValue * 2;
	return someSomeValue * anotherSomeValue;
};

int main() {
	someFunc();
	return 0;
}