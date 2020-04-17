#include <iostream>
using namespace std;
int main(void)
{
    int myArray[4][4] = { {1,2,3,4}, {5,6,7,8} };
    int width = 4, height = 2;

    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            cout << myArray[i][j] << ' ';
        }
        cout << std::endl;
    }
}
