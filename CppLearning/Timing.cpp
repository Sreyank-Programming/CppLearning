//#include <iostream>
//#include <chrono>
//#include <thread>
//
//struct Timer {
//public:
//	std::chrono::steady_clock::time_point start, end;
//
//	Timer() {
//		start = std::chrono::high_resolution_clock::now();
//	}
//	~Timer() {
//		end = std::chrono::high_resolution_clock::now();
//		std::chrono::duration<float> duration = end - start;
//		std::cout << "Duration: " << duration.count()<< std::endl;
//	}
//};
//
//int main() {
//	using namespace std::chrono_literals;
//
//	Timer* timer = new Timer();
//
//	std::this_thread::sleep_for(1s);
//
//	delete timer;
//	std::cin.get();
//
//	return 0;
//}