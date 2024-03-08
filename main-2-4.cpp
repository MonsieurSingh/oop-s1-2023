//
//  main-2-4.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 8/3/2024.
//	Tests written using the help of AI

#include <iostream>

extern	int min_element(int integers[], int length);
extern	int max_element(int integers[], int length);
extern	int sum_min_max(int integers[], int length);

int main(void) {
	// Test case 1: Normal array
	int arr1[] = {4, 5, 2, 8, 3};
	int length1 = 5;
	std::cout << "Test case 1:\n";
	std::cout << "Array: ";
	for (int i = 0; i < length1; ++i) {
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Min element: " << min_element(arr1, length1) << std::endl;
	std::cout << "Max element: " << max_element(arr1, length1) << std::endl;
	std::cout << "Sum of min and max: " << sum_min_max(arr1, length1) << std::endl;
	
	// Test case 2: Empty array
	int arr2[] = {};
	int length2 = 0;
	std::cout << "\nTest case 2:\n";
	std::cout << "Array: <empty>" << std::endl;
	std::cout << "Min element: " << min_element(arr2, length2) << std::endl;
	std::cout << "Max element: " << max_element(arr2, length2) << std::endl;
	std::cout << "Sum of min and max: " << sum_min_max(arr2, length2) << std::endl;
	
	// Test case 3: Single element array
	int arr3[] = {5};
	int length3 = 1;
	std::cout << "\nTest case 3:\n";
	std::cout << "Array: " << arr3[0] << std::endl;
	std::cout << "Min element: " << min_element(arr3, length3) << std::endl;
	std::cout << "Max element: " << max_element(arr3, length3) << std::endl;
	std::cout << "Sum of min and max: " << sum_min_max(arr3, length3) << std::endl;
	
	// Test case 4: Negative length
	int arr4[] = {1, 2, 3};
	int length4 = -3;
	std::cout << "\nTest case 4:\n";
	std::cout << "Array: ";
	for (int i = 0; i < length4; ++i) {
		std::cout << arr4[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Min element: " << min_element(arr4, length4) << std::endl;
	std::cout << "Max element: " << max_element(arr4, length4) << std::endl;
	std::cout << "Sum of min and max: " << sum_min_max(arr4, length4) << std::endl;
	
	return (0);
}
