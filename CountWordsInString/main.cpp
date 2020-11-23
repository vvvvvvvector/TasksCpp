#include <iostream>

int fun(const char[]);

int main()
{
	char str[] = "h   ell  oworld";

	printf("words num = %d", fun(str));

	return 0;
}

int fun(const char str[])
{
	int count = 0;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			for (i;; i++)
			{
				if (str[i] == ' ')
				{
					break;
				}
				else if (str[i] == '\0')
				{
					i--;
					break;
				}
			}
			count++;
		}
	}
	return count;
}