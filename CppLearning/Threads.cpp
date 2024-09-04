//#include <iostream>
//#include <thread>
//
//static bool s_stop = false;
//
//void Print() {
//
//	using namespace std::literals::chrono_literals;
//
//	while (!s_stop) {
//		
//		std::cout << "Hello, World!" << std::endl;
//		std::this_thread::sleep_for(3s);
//	}
//}
//
//int main() {
//
//	std::thread print(Print); //Creating a Thread
//
//	std::cin.get();	// Waiting for input to go to next line
//	s_stop = true; // sets the s_stop to true
//
//	print.join(); // waits for thread to stop
//
//	std::cin.get(); // takes input
//
//	return 0; // ends program
//}