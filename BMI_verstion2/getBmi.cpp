double getBmi(double height, double weight) 
{
	double bmi;

	//cm�P�ʂ�m�P�ʂɕς���
	height /= 100;

	bmi = weight / height / height;

	//�߂�l��bmi
	return bmi;
}