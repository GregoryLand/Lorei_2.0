#include "test.h"

int main()
{
	// Make sure boost is working
	SignalsTest();
}

void SignalsTest()
{
	char test;

	// Declare a signal to register a function with no return and no arguments
	boost::signals2::signal<void()> signalTest;

	// Register the signal
	signalTest.connect(HelloWorld);

	// Call the signal
	signalTest();
	
	std::cin >> test;
}

void HelloWorld()
{
	std::cout << "Hello World" << std::endl;
}