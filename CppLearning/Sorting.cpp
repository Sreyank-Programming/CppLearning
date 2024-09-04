//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//#define LOG(x) std::cout << x << std::endl
//
//namespace sort {
//	static int numberOfValues;
//	static int count{};
//	static int element;
//	static std::vector<int> numbers;
//	static bool ascending;
//}
//
//
//int main() {
//
//	LOG("Number of Values:");
//	std::cin >> sort::numberOfValues;
//
//	do {
//		LOG("Value: ");
//		std::cin >> sort::element;
//		sort::numbers.push_back(sort::element);
//		sort::count += 1;
//	} while (sort::count != sort::numberOfValues);
//
//	LOG("Ascending? (1 or 0)");
//	std::cin >> sort::ascending;
//
//	if (sort::ascending == 0)
//		std::sort(sort::numbers.begin(), sort::numbers.end(), [](int a, int b) { return b < a; });
//	else
//		std::sort(sort::numbers.begin(), sort::numbers.end(), [](int a, int b) { return a < b; });
//
//	for (const int& element : sort::numbers) {
//		LOG(element);
//	}
//
//	using namespace std::chrono_literals;
//
//	system("pause");
//
//	return 0;
//}