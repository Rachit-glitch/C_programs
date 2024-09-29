#include<stdio.h>
int main()
{
    float actual_value, assessment_value, property_tax;
    //Input the actual value of property
    printf("Enter the actual value of property\n");
    scanf("%f",&actual_value);

    //calculate the assessment value
    assessment_value=actual_value*0.60;
    //calculate the property tax
    property_tax=(assessment_value/100)*0.75;

    //Dispaly results
    printf("Assessment value is %f\n", assessment_value);
    printf("Property Tax is %f\n",property_tax);



}