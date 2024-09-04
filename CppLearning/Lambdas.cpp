//#include <iostream>
//#include <vector>
//#include <functional>
//
//void Perform(std::vector<int>& values, const std::function<void(int)>& func) {
//
//	for (const int& element : values) {
//		func(element);
//	}
//}
//
//int main() {
//	
//	std::vector<int> vector;
//	vector.push_back(30);
//	vector.push_back(10);
//	vector.push_back(67);
//
//	int a = 3;
//
//	auto lambda = [a](int num) mutable { a = 10; std::cout << num << std::endl; };
//	Perform(vector, lambda);
//
//	std::cin.get();
//
//	return 0;
//}