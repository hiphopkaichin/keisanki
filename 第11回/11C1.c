#include <stdio.h>

#define maxStudents 10

typedef struct students{
	int english;
	int math;
}Student;


int calcAve(Student input[], double *englishAverage, double *mathAverage, double *totalAverage)
{
	int i=0, math_cal=0, eng_cal=0;
	double n=0;
	for(i=0;i<maxStudents;i++)
	{
		if((input[i].english==-1)||(input[i].math==-1))
		{
			break;
		}
		eng_cal += input[i].english;
		math_cal += input[i].math;
	}
	if(i==0)
	{
		*mathAverage=0;
		*englishAverage=0;
		*totalAverage=0;
	}
	else
	{
		*mathAverage = (double)math_cal/(double)i;
		*englishAverage = (double)eng_cal/(double)i;
		*totalAverage = (*englishAverage+*mathAverage)/2.0;
	}
	return i;
}

int main(void)
{
    Student students[maxStudents];
    double mathAve, engAve, totalAve;
    
    int i=0;
    int student_count;
    
    while (i<maxStudents) {
        if (scanf("%d %d", &students[i].english, &students[i].math) != 2)
            break;
        i++;
    }
    students[i].english = students[i].math = -1;
    
    student_count = calcAve(students, &engAve, &mathAve, &totalAve);
    
    printf ("Number of students is  %2d\n", student_count);
    printf ("English average is %6.2f\n", engAve);
    printf ("Math    average is %6.2f\n", mathAve);
    printf ("Total   average is %6.2f\n", totalAve);

    return 0;
}
