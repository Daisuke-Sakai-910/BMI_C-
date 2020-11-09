double getBmi(double height, double weight) 
{
	double bmi;

	//cm’PˆÊ‚ðm’PˆÊ‚É•Ï‚¦‚é
	height /= 100;

	bmi = weight / height / height;

	//–ß‚è’l‚ªbmi
	return bmi;
}