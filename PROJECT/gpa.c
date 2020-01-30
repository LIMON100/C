#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
	int dummy;

	FILE* spGrades;

	float credits;
	float GPA;
	char name;
	char grade;
	char course[25];
	char string[60];

	float count = 0;
	float totalPoints = 0;
	float totalCredits = 0;
	float totalTOTALcredits = 0;

	printf("This program will read and print the students name, the course names,\n");
	printf("the letter grades of that course and the number of credits each course is worth.");
	printf("It will then calculate the GPA of the courses.");

	spGrades = fopen("grades.txt", "r");
	if (!spGrades)
	{
		printf("\n\nCould not open file grades.txt \a\n");
		exit(101);
	}

	fgets(string, 60, spGrades);
	printf("\n\nStudent name: %s\n\n", string);
	printf("     |Course Name| |Grade Earned| |Credits Hours|\n\n");

	while (fscanf(spGrades, "%s %c %f \n", &course, &grade, &credits) != EOF)
	{
		printf("%15s      %3c     %12.1f \n\n", course, grade, credits);

		if (grade == 'A'){
			totalPoints += 4.0;
		}
		else if (grade == 'B'){
			totalPoints += 3.0;
		}
		else if (grade == 'C'){
			totalPoints += 2.0;
		}
		else if (grade == 'D'){
			totalPoints += 1.0;
		}
		else if (grade == 'F'){
			totalPoints += 0.0;
		}

		totalCredits = credits*totalPoints;
		++count;
	}
	GPA = totalCredits / count;

		fclose(spGrades);


	printf("----------------------------------------------------------------------\n");
	printf("\nThe Total Credits earned by this student are:  %.1f \n", totalCredits);
	printf("\nThe GPA for this Student is:  %.1f \n\n\n", GPA);
	printf("----------------------------------------------------------------------\n");


	printf("\n\n\nThe program has finished. Press enter to exit. \n");
	scanf_s("%d", &dummy);
	return 0;
}
