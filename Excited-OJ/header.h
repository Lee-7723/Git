int readd(int a)
{
	int result=10;
	if (a!=1) result = readd(a-1)+2;
	else return(result);
}
