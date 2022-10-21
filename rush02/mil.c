#include <unistd.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
void	print_numb(char *n)
{
	int c;

	c = ft_strlen(n);
	if (c == 1 || c == 3)
		if (n[0] == '0')
			write(1,"zero", 4);
		if (n[0] == '1')
			write(1,"one", 3);
		if (n[0] == '2')
			write(1,"two", 3);
		if (n[0] == '3')
			write(1,"three", 5);
		if (n[0] == '4')
			write(1,"four", 4);
		if (n[0] == '5')
			write(1,"five", 4);
		if (n[0] == '6')
			write(1,"six", 3);
		if (n[0] == '7')
			write(1,"seven", 5);
		if (n[0] == '8')
			write(1,"eight", 5);
		if (n[0] == '9')
			write(1,"nine", 4);
		if (c == 3)
		{
			write(1," hundred",8);
			if (n[1] != '0' ||  n[2] != '0')
			{
				if (n[1] == '0')
				{
					n[2] = n[0];
					n[1] = '\0';
					write(1," and ",6);
					print_numb(n);
				}
				else
				{
					n[0] = n[1];
            		n[1] = n[2];
					n[2] = '\0';
					write(1," and ",5);
					print_numb(n);
				}
			} 
		}
	if (c == 2)
	{
			if (n[0] == '1')
			{
				if (n[1] == '0')
					write(1,"ten",3);
				if (n[1] == '1')
					write(1,"eleven",6);
				if (n[1] == '2')
					write(1,"twelve",6);
				if (n[1] == '3')
					write(1,"thirteen",9);
				if (n[1] == '4')
					write(1,"fourteen",6);
				if (n[1] == '5')
					write(1,"fifteen",6);
				if (n[1] == '6')
					write(1,"sixteen",6);
				if (n[1] == '7')
					write(1,"seventeen",6);
				if (n[1] == '8')
					write(1,"eighteen",6);
				if (n[1] == '9')
					write(1,"nineteen",6);
			}
            if (n[0] == '2')
			{
				if (n[1] == '0')
					write(1,"twenty",6);
				else 
				{
					n[0] = n[1];
					n[1] = '\0';
					print_numb(n);
					write(1,"twenty ",7);
				}
			}
            if (n[0] == '3')
			{
            	if (n[1] == '0')
                	write(1,"thirty",6);
                else
				{
                	write(1,"thirty ",7);
                    n[0] = n[1];
                    n[1] = '\0';
                }
			}
            if (n[0] == '4')
			{
            	if (n[1] == '0')
                	write(1,"forty",5);
                else
                {
                	write(1,"forty ",6);
                    n[0] = n[1];
                    n[1] = '\0';
                }
			}

            if (n[0] == '5')
			{
            	if (n[1] == '0')
                	write(1,"fifty",5);
                else
				{
                    write(1,"fifty ",6);
                    n[0] = n[1];
                    n[1] = '\0';
                }
			}
			if (n[0] == '6')
			{
				if (n[1] == '0')
                	write(1,"sixty",5);
                else
                {
                	write(1,"sixty ",6);
                    n[0] = n[1];
                    n[1] = '\0';
                }
			}
            if (n[0] == '7')
			{
            	if (n[1] == '0')
                	write(1,"seventy",7);
                else
				{
                	write(1,"seventy ",8);
                    n[0] = n[1];
                    n[1] = '\0';
                }
			}
            if (n[0] == '8')
			{
            	if (n[1] == '0')
                	write(1,"eighty",6);
                else
				{
                	write(1,"eighty ",7);
                    n[0] = n[1];
                    n[1] = '\0';
                }
			}
			if (n[0] == '9')
            {
            	if (n[1] == '0')
                	write(1,"ninety",6);
                else
                {
               		write(1,"ninety ",7);
                    n[0] = n[1];
                    n[1] = '\0';
				}
			}
	}


			



				
}
int main()
{
	/*
    char *n = "0";
	print_numb(n);
    char n1[] = "10";
    print_numb(n1);
    char n2[]= "25"; // no funciona
    print_numb(n2);
    char n3[]= "101";
    print_numb(n3);
	*/
    char n4[]= "120";
    print_numb(n4);
	/*
    char n5[]= "125";
    print_numb(n5);
    char n6[]= "500";
    print_numb(n6);
    char n7[] = "900";
    print_numb(n7);
    char n8[] = "999";
	print_numb(n8);
	*/
}

/*
char	*str(char	*n)
{
//n < 1000
	
}
*/
