//CS2211a 2020
//Assignment number 2
//Brendan Bain
//251086487
//bbain7
//Date completed Oct 5th 

#include <stdio.h>
#include <stdbool.h>

void kiloMileConversion (void){
	char option;
	float conversion, result;

	printf("K for conversion from Kilometer to Mile \nM for conversion from Mile to Kilometer\n");
	scanf(" %c", &option);

	while (option != 'K' && option != 'M'){
		printf("K for conversion from Kilometer to Mile \nM for conversion from Mile to Kilometer\n");
		scanf(" %c", &option);
	}
	printf("Input value: ");
	scanf("%f", &result);
		
	if (option == 'K'){
		printf("%f in Kilometers is %f in Miles\n", result, result*0.62137);
	}
	if (option == 'M'){
		printf("%f in Miles is %f in Kilometers\n", result, result*1.609344);
	}
}

void litreGallonConversion (void){
	char option;
	float conversion, result;

	printf("L for conversion from Litre to Gallon\nG for conversion from Gallon to Litre\n");
	scanf(" %c", &option);

	while (option != 'L' && option != 'G'){
		printf("L for conversion from Litre to Gallon\nG for conversion from Gallon to Litre\n");
		scanf(" %c", &option);
	}
	printf("Input value: ");
	scanf("%f", &result);

	if (option == 'L'){
		printf("%f in Litres is %f in Gallons\n", result, result*0.26417205);
	}
	if (option == 'G'){
		printf("%f in Gallons is %f in Litres\n", result, result*3.78541178);
	}

}

void centiInchConversion (void){
	char option;
	float conversion, result;

	printf("C for conversion from Centimetre to Inch\nI for conversion from Inch to Centimetre\n");
	scanf(" %c", &option);

	while (option != 'C' && option != 'I'){
		printf("C for conversion from Centimetre to Inch\nI for conversion from Inch to Centimetre\n");
		scanf(" %c", &option);
	}
	printf("Input value:\n");
	scanf("%f", &result);

	if (option == 'C'){
		printf("%f in Centimetres is %f in Inches\n", result, result*0.393701);
	}
	if (option == 'I'){
		printf("%f in Inches is %f in Centimetres\n", result, result*2.54);
	}
	
}

void celsiusFahrenheitConversion (void){
	char option;
	float conversion, result;
	bool keepLooping = true;

	printf("C for conversion from Celsius to Fahrenheit\nF for conversion from Farenheit to Celsius\n");
	scanf(" %c", &option);

	while(option != 'C' && option != 'F'){
		printf("C for conversion from Celsius to Fahrenheit\nF for conversion from Farenheit to Celsius\n");
		scanf(" %c", &option);
	}
	printf("Input value: ");
	scanf("%f", &result);

	if (option == 'C'){
		printf("%f in Celsius is %f in Fahrenheit\n", result, (result/5.0)*9 + 32); 
	}
	if (option == 'F'){
		printf("%f in Fahrenheit is %f in Celsius\n", result, ((result - 32)*5)/9);		
	}
}

int main (void){
	char option;

	printf("1 for conversion between Kilometer and Mile\n2 for conversion between Litre and Gallon\n");
	printf("3 for conversion between Centimetre and Inch\n4 for conversion between Celsius and Fahrenheit\n");
	printf("5 for quit\n");
	scanf(" %c", &option);

	while (option != '5'){
		
		switch (option){
			case '1': 
				kiloMileConversion();
				break;
			case '2':
				litreGallonConversion();
				break;
			case '3':
				centiInchConversion();
				break;
			case '4':
				celsiusFahrenheitConversion();
			case '5':
				break;			
		}
		printf("1 for conversion between Kilometer and Mile\n2 for conversion between Litre and Gallon\n");
		printf("3 for conversion between Centimetre and Inch\n4 for conversion between Celsius and Fahrenheit\n");
		printf("5 for quit\n");
		scanf(" %c", &option);
	}
       	
}

