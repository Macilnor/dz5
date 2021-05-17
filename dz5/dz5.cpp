// dz5.cpp
//

#include <iostream>

using namespace std;

int a[10] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };
int b[8];
int c[5] = { 1, 1, 1, 2, 1 };

//Exercise 5.1
void printArray(int* array, size_t size)
{
    for (size_t i = 0; i < size; i++)
        cout << array[i] << ' ';
    cout << endl;
}

//Exercise 5.2
void swapArray(int* array, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        array[i] = (array[i]!=0) ? 0 : 1;
    }
}

//Exercise 5.3
void fillArray(int* array, size_t size, int step)
{
    int n = 1;
    for (size_t i = 0; i < size; i++)
    {
        array[i] = n;
        n += step;
    }
}

//Exercise 5.4
void shiftArray(int* array, size_t size, int shift)
{
    shift = shift % size;
    if (shift != 0)
    {
        int n;

        for (int j = 0; j < shift; j++)
        {
            for (size_t i = 0; i < size - 1; i++)
            {
                    n = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = n;
            }
        }
        
    }
}

//Exercise 5.5
bool checkBalance(int* array, size_t size)
{
    int suma = 0;
    int sumb = 0;
    for (size_t i = 0; i < size; i++)
    {
        suma += array[i];
    }
    for (size_t i = 0; i < size; i++)
    {
        sumb += array[i];
        if (sumb == suma - sumb)
            return true;
    }
    return false;
}

int main()
{
    cout << "Exercise 5.1:" << endl;
    printArray(a, sizeof(a)/sizeof(int));

    cout << endl << "Exercise 5.2:" << endl;
    swapArray(a, sizeof(a) / sizeof(int));
    printArray(a, sizeof(a) / sizeof(int));

    cout << endl << "Exercise 5.3:" << endl;
    fillArray(b, sizeof(b) / sizeof(int), 3);
    printArray(b, sizeof(b) / sizeof(int));

    cout << endl << "Exercise 5.4:" << endl;
    shiftArray(b, sizeof(b) / sizeof(int), -7);
    printArray(b, sizeof(b) / sizeof(int));

    cout << endl << "Exercise 5.5:" << endl;
    printArray(c, sizeof(c) / sizeof(int));
    string out = (checkBalance(c, sizeof(c) / sizeof(int))) ? "True" : "False";
    cout << out << endl;
}

