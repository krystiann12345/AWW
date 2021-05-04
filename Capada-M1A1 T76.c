#include <stdio.h>
#include <conio.h>


// C program that calculate the average of students grades(five subjects)//

int main()
{
    float science1,english2,math3,TLE4,filipino5,ave;
    char name;


//input name of the student//
    printf("Enter students name:");
    scanf("%s",&name);

//five subject of the student//

    printf("\nGrades in science:");
    scanf("%f",&science1);

    printf("Grades in english:");
    scanf("%f",&english2);

    printf("Grades in math:");
    scanf("%f",&math3);

    printf("Grades in TLE:");
    scanf("%f",&TLE4);

     printf("Grades in filipino:");
    scanf("%f",&filipino5);

//calculating average of grades//
    ave=(science1+english2+math3+TLE4+filipino5)/5;
//output of the calculated average.I  use %0.2f to add the decimal number//
    printf("\nave: %0.2f\n",ave);
//Nested if statement  for student if failed or not//
    if (ave>=90)
    printf("Grade A");

    else if (ave>=80)
    printf("Grade B");

    else if (ave>=70)
    printf("Grade C");

    else if (ave>=60)
    printf("Grade D");

    else
    printf("Grade F");


    return 0;
}
