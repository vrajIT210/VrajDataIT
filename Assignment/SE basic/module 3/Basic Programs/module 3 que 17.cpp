#include <stdio.h>

	float calculateInsurancePremium(float salary) {
    float premiumRate = 0.1; // 10% of salary
    float premium = salary * premiumRate;
    return premium;
}

int main() 	//program to calculate insurance premium
{
    float salary, premium;
    printf("Enter the person's salary: ");
    scanf("%f", &salary);

    premium = calculateInsurancePremium(salary);

    printf("Insurance premium: %.2f\n", premium);
	return 0;
}

