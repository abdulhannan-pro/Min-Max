#include <iostream>

void MinAndMax(int *array, int size, int *min, int *max)
{
    for (int i = 1; i < size; i++)
    {
        if (array[i] < *min)
        {
            *min = array[i];
        }
        if (array[i] > *max)
        {
            *max = array[i];
        }
    }
}
int main()
{
    int size = 0;

    std::cout << "Enter Size : ";
    std::cin >> size;

    if (size <= 0)
    {
        std::cout << "Invalid Size!" << std::endl;
        return 1;
    }

    int *array = new int[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Array [" << i << "] : ";
        std::cin >> array[i];
    }

    int min = array[0];
    int max = array[0];

    MinAndMax(array, size, &min, &max);

    std::cout << "Min : " << min << " | At Index : " << i << std::endl;
    std::cout << "Max : " << max << " | At Index : " << i << std::endl;

    delete[] array;
    array = nullptr;

    return 0;
}
