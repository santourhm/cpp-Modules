#include "array.hpp" 
#include <iostream>



template <typename T>
void printArray(const std::string& name, Array<T>& arr) {
    std::cout << "--- Contents of " << name << " (size: " << arr.size() << ") ---" << std::endl;
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << name << "[" << i << "] = " << arr[i] << std::endl;
    }
    std::cout << "------------------------------------" << std::endl << std::endl;
}



int main() {



    std::cout << ">>> 1. Testing Parameterized Constructor & operator[] <<<\n" << std::endl;
    Array<int> numbers(5);
    for (size_t i = 0; i < numbers.size(); ++i) {
        numbers[i] = i * 10;
    }
    printArray("numbers", numbers);

    
    std::cout << ">>> 2. Testing Copy Constructor <<<\n" << std::endl;
    Array<int> copy_of_numbers(numbers);
    printArray("copy_of_numbers (original)", copy_of_numbers);


    std::cout << "--- Modifying original 'numbers' array ---" << std::endl;
    numbers[0] = 999;
    std::cout << "Changed numbers[0] to 999." << std::endl << std::endl;

    std::cout << "--- Verifying copies are independent ---" << std::endl;
    printArray("numbers (modified)", numbers);
    printArray("copy_of_numbers (should be unchanged)", copy_of_numbers);

    std::cout << ">>> 3. Testing Copy Assignment Operator <<<\n" << std::endl;
    Array<int> assigned_numbers(2); 
    assigned_numbers[0] = 1;
    assigned_numbers[1] = 2;
    printArray("assigned_numbers (before assignment)", assigned_numbers);

    std::cout << "--- Performing assignment: assigned_numbers = numbers ---" << std::endl;
    assigned_numbers = numbers;
    std::cout << "Assignment complete." << std::endl << std::endl;

    printArray("assigned_numbers (after assignment)", assigned_numbers);

    std::cout << "--- Modifying original 'numbers' array again ---" << std::endl;
    numbers[1] = 777;
    std::cout << "Changed numbers[1] to 777." << std::endl << std::endl;
    
    std::cout << "--- Verifying assigned copy is independent ---" << std::endl;
    printArray("numbers (modified again)", numbers);
    printArray("assigned_numbers (should be unchanged)", assigned_numbers);

    // 4. Test Out-of-Bounds Exception
    std::cout << ">>> 4. Testing Out-of-Bounds Access <<<\n" << std::endl;
    try {
        std::cout << "Attempting to access numbers[10] (out of bounds)..." << std::endl;
        numbers[10] = 42; 
    } catch (const std::exception& e) {
        std::cerr << "SUCCESS: Caught expected exception!" << std::endl;
        std::cerr << "Exception message: " << e.what() << std::endl << std::endl;
    }
    try {
        std::cout << "Attepting to access numbers[-1] (out of bounds)..." << std::endl;

        numbers[-1] = 42; 
    } catch (const std::exception& e) {
        std::cerr << "SUCCESS: Caught expected exception!" << std::endl;
        std::cerr << "Exception message: " << e.what() << std::endl << std::endl;
    }

    std::cout << ">>> 5. Testing Default Constructor <<<\n" << std::endl;
    Array<float> empty_array;
    std::cout << "Size of default-constructed array: " << empty_array.size() << std::endl;
    try {
        std::cout << "Attempting to access empty_array[0]..." << std::endl;
        empty_array[0] = 3.14f;
    } catch (const std::exception& e) {
        std::cerr << "SUCCESS: Caught expected exception on empty array!" << std::endl;
        std::cerr << "Exception message: " << e.what() << std::endl;
    }
    
    std::cout << "\n>>> ALL TESTS COMPLETED <<<\n" << std::endl;
    
    return 0;
}