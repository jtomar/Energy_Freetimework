#include <stdio.h>
/* C = (5/9)(F - 32)
print 0 to 300 F to celsius and increase by 20 at each loop
*/

//void Faren_to_celsius(void);
//void Celsius_to_Faren(void);

int main(int argc, char *argv[])
{
	float temp_in_f;
	float temp_in_c;
	int max_temp = 300;
	int min_temp = 0;
	int choice = 0;
	
	temp_in_f = min_temp;
	temp_in_c = min_temp;
	
	void Faren_to_celsius()
	{
		while (temp_in_f <= max_temp)
		{
			printf("Temperatue in Farenheit : %f", temp_in_f);
			
			temp_in_c = (5.0/9.0)*(temp_in_f - 32);
			
			printf("\tTemperature in Celsius : %f\n", temp_in_c);
			
			temp_in_f += 20;
		}
	}
	
	void Celsius_to_Faren()
	{
		while(temp_in_c <= 148.0)
		{
			printf("Temperatue in Celsius : %f", temp_in_c);
			
			temp_in_f = (9.0/5.0)*(temp_in_c + 32);
			
			printf("\tTemperature in Farenheit : %f\n", temp_in_f);
			
			temp_in_c += 20;
		}
	}
	
	printf("Please choose: for Farenheit to Celsius press 1 else press any");
	scanf("%d", &choice);
	//printf("\nyou have opted : %d\n", choice);
	
	if(choice == 1)
	{
		Faren_to_celsius();
		temp_in_f = min_temp;
		temp_in_c = min_temp;
	}
	else
	{
		Celsius_to_Faren();
		temp_in_f = min_temp;
		temp_in_c = min_temp;
	}
	
	
	
	
	
	return 0;
}