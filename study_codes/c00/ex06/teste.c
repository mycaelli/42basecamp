#include <unistd.h>
void	teste()
{
	char arr[5];
	arr[0] = '0' - 1;
	arr[2] = ' ';
	while (arr[0]++ < '9') //X0 00
	{ 
		arr[1] = '0' -1;
		arr[3] = arr[0] - 1;
		arr[4] = arr[1] + 1;
		while (arr[1]++ < '9') //0X 00
		{
			while (arr[3]++ < '9') //00 X0
			{
				while (arr[4]++ < '9')
				{ 
					write(1, arr, 5);
					if(arr[0] != '9' || arr[1] != '8')
						write(1, ", ", 2);
				}
				arr[4] = '0' -1;
			}
			arr[3] = arr[0] -1;
			arr[4] = arr[1] +1;
		}
	}
}