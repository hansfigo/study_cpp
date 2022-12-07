// show x index in n array

#include <iostream>

int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, num;
void linearSearch(int num);
bool isLoop();
bool status;

int main()
{

    for (int i = 0; i < 10; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    do
    {
        printf("Choose num to show index : ");
        std::cin >> num;
        linearSearch(num);
        status = isLoop();

    } while (status);

    return 0;
}

void linearSearch(int num)
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == num)
        {
            std::cout << "Index of Number " << num << " is " << i << std::endl;
        }
    }
}

bool isLoop()
{
    char answer;

    printf("Do u want to continue ? (y/n)");
    std::cin >> answer;

    if (answer == 'y' || answer == 'Y')
    {
        return true;
    }
    else
    {
        return false;
    }
}