/**
  * leet -> Encodes string
  * @str: actual string
  *
  * Return: new encoded sring
  */

char *leet(char *str)
{
	int i = 0, j = 0, len = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		j = 0;

		while (j < len)
		{
			if (str[i] == r[j] || str[i] - 32 == r[j])
			{
				str[i] = n[j];
			}

			j++;
		}

		i++;
	}

	return (str);
}
