#include <iostream>
#include <thread>

void hello()
{
	std::cout << "Hello Concurrent World\n";
}

void world()
{

	std::cout << "World is here\n";
}
int main() {
	std::thread t(hello);
	t.join();


	std::thread t2(world);
	t2.join();
}