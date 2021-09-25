#include <iostream>

int calculate(long long int value)
{
    long int steps = 0;
    while (value > 1)
    {

        if (value % 2 == 0)
        {
            value = value / 2;
        }
        else
        {
            value = (value * 3) + 1;
        }
        steps++;
    }
    return steps;
}

int main()
{
    long int largest = 0;
    long int largest_id = 0;
    long long start = 7887663500000;
    long long range = 100000;

    for (int i = start; i < start + range; i++)
    {
        //std::cout << "n =" << i << "; steps =" << calculate(i) << "\n";
        int temp = calculate(i);
        if (temp > largest)
        {
            largest = temp;
            largest_id = i;
        }
    }

    std::cout << "n = " << largest_id << "; steps = " << largest << "\n";
    //std::cout << "n = " << 837799 << "; steps = " << calculate(837799) << "\n";
    //std::cout << "n = " << 63728127 << "; steps = " << calculate(63728127) << "\n";

    return 0;
}