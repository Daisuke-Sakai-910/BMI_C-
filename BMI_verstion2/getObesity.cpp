int getObesity(double bmi) 
{
	int Obesity;

	if (bmi < 18.5)
	{
		Obesity = -1;
	}
	else if (bmi < 25.0)
	{
		Obesity = 0;
	}
	else if (bmi < 30.0)
	{
		Obesity = 1;
	}
	else if (bmi < 35.0)
	{
		Obesity = 2;
	}
	else if (bmi < 40.0)
	{
		Obesity = 3;
	}
	else
	{
		Obesity = 4;
	}

	return Obesity;
}