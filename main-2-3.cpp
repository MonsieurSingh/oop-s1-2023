//
//  main-2-3.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 8/3/2024.
//	Tests written using the help of AI

#include <iostream>

extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);

int main(void) {
	// Test case 1: Palindrome array
	int arr1[] = {1, 2, 3, 4, 3, 2, 1};
	int length1 = 7;
	std::cout << "Test case 1:\n";
	std::cout << "Array: ";
	for (int i = 0; i < length1; ++i) {
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Is Palindrome: " 
		<< (is_palindrome(arr1, length1) ? "true" : "false")
		<< std::endl;
	std::cout 
		<< "Sum of elements if palindrome: " << sum_if_palindrome(arr1, length1)
		<< std::endl;
	
	// Test case 2: Non-palindrome array
	int arr2[] = {1, 2, 3, 4, 5};
	int length2 = 5;
	std::cout << "\nTest case 2:\n";
	std::cout << "Array: ";
	for (int i = 0; i < length2; ++i) {
		std::cout << arr2[i] << " ";
	}
	std::cout << std::endl;
	std::cout 
		<< "Is Palindrome: " << (is_palindrome(arr2, length2) ? "true" : "false")
		<< std::endl;
	std::cout 
		<< "Sum of elements if palindrome: " << sum_if_palindrome(arr2, length2)
		<< std::endl;
	
	// Test case 3: Empty array
	int arr3[] = {};
	int length3 = 0;
	std::cout << "\nTest case 3:\n";
	std::cout << "Array: <empty>" << std::endl;
	std::cout 
		<< "Is Palindrome: " << (is_palindrome(arr3, length3) ? "true" : "false")
		<< std::endl;
	std::cout 
		<< "Sum of elements if palindrome: "
		<< sum_if_palindrome(arr3, length3)
		<< std::endl;
	
	// Test case 4: Negative length
	int arr4[] = {1, 2, 3};
	int length4 = -3;
	std::cout << "\nTest case 4:\n";
	std::cout << "Array: ";
	for (int i = 0; i < length4; ++i) {
		std::cout << arr4[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Is Palindrome: " 
		<< (is_palindrome(arr4, length4) ? "true" : "false")
		<< std::endl;
	std::cout 
		<< "Sum of elements if palindrome: "
		<< sum_if_palindrome(arr4, length4)
		<< std::endl;
	
	return (0);
}
