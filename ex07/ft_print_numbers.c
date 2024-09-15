void	ft_print_numbers(void)
{
	char	num;
	int		i;

	num = '0';
	i = 0;
	while (i <= 9)
	{
		write(1, &num, 1);
		num++;
		i++;
	}
}
