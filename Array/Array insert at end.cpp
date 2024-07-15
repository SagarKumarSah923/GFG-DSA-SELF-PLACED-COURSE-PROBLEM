#include <iostream>
using namespace std;

// Function to insert an element at the end of the array
void insertAtEnd(int arr[], int sizeOfArray, int element)
{
    arr[sizeOfArray - 1] = element;
}

int main()
{
    int sizeOfArray = 6; // Define the size of the array
    int arr[sizeOfArray - 1] = {1, 2, 3, 4, 5}; // Initialize the array with sizeOfArray - 1 elements

    int elementToAdd = 10; // Element to be added at the end

    // Insert the element at the end of the array
    insertAtEnd(arr, sizeOfArray, elementToAdd);

    // Print the array to verify the element is added at the end
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
