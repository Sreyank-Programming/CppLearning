//#include <iostream>
//
//struct Vector {
//
//	int x, y;
//};
//
//int main() {
//
//	Vector vector{ 5, 8 }; // creating an object
//	
//	double* y = ((double*)&vector.x); // setting y as a pointer which points to a double and giving the address of vector.x
//
//	//*y = 50;  // setting the content of y to 50 so it will change x and y to 50 and make it a double format
//
//	std::cout << *y << std::endl; // this will print out 50 if above line is executed, else it'll give something else as it is not in double format
//	std::cout << vector.x << ", " << vector.y << std::endl;
//
//	std::cin.get();
//
//	return 0;
//}