void ft_putchar(char c);
void rush(int x, int y)
{
	int fila;
	fila = 1;
	while (fila <= y)
	{
		int columna;
		columna = 1;
		while (columna <= x)
		{
			if ((fila == 1) && (columna == 1))
				ft_putchar('o');
			else if ((fila == 1) && (columna == x))
				ft_putchar('o');
			else if ((fila == y) && (columna == 1))
				ft_putchar('o');
			else if ((fila == y) && (columna == x))
				ft_putchar('o');
			else if ((fila == 1) && (columna != 1) && (columna != x))
				ft_putchar('-');
			else if ((fila == y) && (columna != 1) && (columna != x))
				ft_putchar('-');
			else if ((columna == 1) && (fila != 1) && (fila != y))
				ft_putchar('|');
			else if ((columna == x) && (fila != 1) && (fila != y))
				ft_putchar('|');
			else 
				ft_putchar(' ');
			columna++;
        }
	fila++;
	ft_putchar('\n');
	}

}
