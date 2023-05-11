#include <bits/stdc++.h>
using namespace std;

int main()
{	
	while(true)
	{
		string a;	
		int n = 0;
		getline(cin, a);
		if(a.size() == 0)
			break;
		int tong = 0;
		
		int arr[100];		
		for(int j = 0; j < a.length(); j++)
		{
			if(isdigit(a[j]))
			{
				int num = a[j] - '0';
				
                while (j + 1 < a.length() && isdigit(a[j + 1]))
                {
                    num = num * 10 + (a[j + 1] - '0');
                    j++;
				}
                tong += num;
							
			}	
		}	
		cout << tong << endl;	
	}
}
