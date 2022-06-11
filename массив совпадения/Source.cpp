#include<iostream>
using namespace std;
#define tab "\t"
//#define UNIQUE_1
int main()
{
	setlocale(LC_ALL, "rus");
    /*int a[10] = {0};

    for (unsigned i = 0; i < 10; i++)
    {
        unsigned j = rand() % (i + 1);
        a[i] = a[j];
        a[j] = i + 1;
    }

    for (int i : a)
        cout << i << " ";

    cout << endl;*/
    const int n = 10;
    int arr[n] = {};
    bool unique;
#ifdef UNIQUE_1
    for (int i = 0; i < n; i++)
    {
        do
        {
            arr[i] = rand() % n;
            unique = true;
            for (int j = 0; j < i; j++)
            {
                if (arr[i] == arr[j])
                {
                    unique = false;
                    break;
                }
            }
        } while (!unique);

    }
#endif

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % n;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                i--;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << tab;
    }
    cout << endl;

}