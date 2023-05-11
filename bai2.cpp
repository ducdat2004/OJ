#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    int n1 = 0;
    int arr[100];

    for(int i = 0; i < n; i++)
    {
        int dem = 0;
        string str;
        getline(cin, str);
        for(int j = 0; j < str.length(); j++)
        {
            if(str[j] == ' ' && str[j + 1] != ' ')
            	dem++;
        }
        arr[n1] = dem;
        n1++;
        arr[n1] = '\0';
    }

    for(int i = 0; i < n1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

