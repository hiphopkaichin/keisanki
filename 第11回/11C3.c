#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define studentCount 10

typedef struct {
    char studentNumber[9];
    char familyName[12]; /* 姓 */
    char givenName[12]; /* 名 */
    int englishMark;
    int mathMark;
} Student;

void printStudentList (Student *students[], int l)
{
    int i;

    for ( i = 0; i < l; i++ ) {
        printf("%8s: %-10s %-8s: E=%3d, M=%3d, Av=%5.1f\n",
            students[i]->studentNumber,
            students[i]->familyName,
            students[i]->givenName,
            students[i]->englishMark,
            students[i]->mathMark,
            (students[i]->englishMark + students[i]->mathMark) / 2.0);
    }
}

/* function to compare two student numbers, used for sorting by number */
int compareNumbers (const void* a, const void* b)
{
    Student *studentPa = *((Student **) a); /* casts to convert to correct type */
    Student *studentPb = *((Student **) b);

    return strcmp (studentPa->studentNumber,
                   studentPb->studentNumber);
}

int compareNumbersplus (const void* a, const void* b)
{
    Student *studentPa = *((Student **) a); /* casts to convert to correct type */
    Student *studentPb = *((Student **) b);

    return strcmp (studentPb->studentNumber,
                   studentPa->studentNumber);
}

int comparegivenname (const void* a, const void* b)
{
    Student *studentPa = *((Student **) a); /* casts to convert to correct type */
    Student *studentPb = *((Student **) b);

    return strcmp (studentPa->givenName,
                   studentPb->givenName);
}

int comparegivennameplus (const void* a, const void* b)
{
    Student *studentPa = *((Student **) a); /* casts to convert to correct type */
    Student *studentPb = *((Student **) b);

    return strcmp (studentPb->givenName,
                   studentPa->givenName);
}

int comparefamilyname (const void* a, const void* b)
{
    Student *studentPa = *((Student **) a); /* casts to convert to correct type */
    Student *studentPb = *((Student **) b);

    return strcmp (studentPa->familyName,
                   studentPb->familyName);
}

int comparefamilynameplus (const void* a, const void* b)
{
    Student *studentPa = *((Student **) a); /* casts to convert to correct type */
    Student *studentPb = *((Student **) b);

    return strcmp (studentPb->familyName,
                   studentPa->familyName);
}

int compareEnglish (const void* a, const void* b)
{
    Student *studentPa = *((Student **) a); /* casts to convert to correct type */
    Student *studentPb = *((Student **) b);
	
    return studentPb->englishMark - studentPa->englishMark;
}

int compareMath (const void* a, const void* b)
{
    Student *studentPa = *((Student **) a); /* casts to convert to correct type */
    Student *studentPb = *((Student **) b);
	
    return studentPb->mathMark - studentPa->mathMark;
}

int compareAve (const void* a, const void* b)
{
	int asum,bsum;
    Student *studentPa = *((Student **) a); /* casts to convert to correct type */
    Student *studentPb = *((Student **) b);
	bsum = studentPb->mathMark+studentPb->englishMark;
	asum = studentPa->mathMark+studentPa->englishMark;
    return bsum - asum;
}
int compareEnglishplus (const void* a, const void* b)
{
    Student *studentPa = *((Student **) a); /* casts to convert to correct type */
    Student *studentPb = *((Student **) b);
	
    return studentPa->englishMark - studentPb->englishMark;
}

int compareMathplus (const void* a, const void* b)
{
    Student *studentPa = *((Student **) a); /* casts to convert to correct type */
    Student *studentPb = *((Student **) b);
	
    return studentPa->mathMark - studentPb->mathMark;
}

int compareAveplus (const void* a, const void* b)
{
	int asum,bsum;
    Student *studentPa = *((Student **) a); /* casts to convert to correct type */
    Student *studentPb = *((Student **) b);
	bsum = studentPb->mathMark+studentPb->englishMark;
	asum = studentPa->mathMark+studentPa->englishMark;
    return asum - bsum;
}

int main (void)
{
    int i,a;
    int select;

    static Student students[] = {
        { "12345678", "Reigai",     "Taro",     80,  62 }, /* 例外 　　太郎 */
        { "12349875", "Reidai",     "Hanako",   76,  65 }, /* 例題 　　花子 */
        { "12349458", "Gambare",    "Manabu",   56,  66 }, /* 頑張 　　学 */
        { "12342584", "Sample",     "Tatoe",    34,  70 }, /* サンプル 例恵 */
        { "12348347", "Sugaku",     "Tokeko",   55, 100 }, /* 数学 　　解子 */
        { "12341948", "Girigiri",   "Tariyasu", 60,  60 }, /* ぎりぎり 足康 */
        { "12348463", "English",    "Perfect", 100,  56 }, /* 英語 　　完璧 */
        { "12347628", "Asobi",      "Saboro",   20,  25 }, /* 遊日 　　サボ郎 */
        { "12344924", "Kurikaeshi", "Mawaroh",  77,  30 }, /* 繰返 　　回郎 */
        { "12341369", "Seiretu",    "Junko",    69,  80 }  /* 整列 　　順子 */
    };

    /* array of pointers used for sorting by number */
    Student *byNumber[studentCount];

    /* initializing the array of pointers */
    for (i=0; i<studentCount; i++)
        byNumber[i] = &students[i];

    /* sorting the array of pointers */
	
    /* input by user/output of student lists */
    while (1) {
        printf ("Select order (0=original order, 1=by number (inc), 2=by given name (inc),\n"
                "    3=by family name (inc), 4=by English (dec), 5=by Math (dec), 6=by average (dec),\n"
                "    7=by English (inc), 8=by Math (inc), 9=by average (inc), 10=by number (dec),\n"
                "    11=by given name (dec), 12=by family name (dec)): ");

        if (scanf("%d", &select) != 1)
            return 0;
        putchar ('\n');
		if (select==0)
		{
			for ( i = 0; i < studentCount; i++ ) {
				printf("%8s: %-10s %-8s: E=%3d, M=%3d, Av=%5.1f\n",
					students[i].studentNumber,
					students[i].familyName,
					students[i].givenName,
					students[i].englishMark,
					students[i].mathMark,
					(students[i].englishMark + students[i].mathMark) / 2.0);
			}
		}
        else if (select == 1)
		{
			qsort(byNumber, studentCount, sizeof(Student*), compareNumbers);

            printStudentList(byNumber, studentCount);
		}
		else if (select == 2)
		{
			qsort(byNumber, studentCount, sizeof(Student*), comparegivenname);

            printStudentList(byNumber, studentCount);
		}
		else if (select == 3)
		{
			qsort(byNumber, studentCount, sizeof(Student*), comparefamilyname);

            printStudentList(byNumber, studentCount);
		}
		else if (select == 4)
		{
			qsort(byNumber, studentCount, sizeof(Student*), compareEnglish);

            printStudentList(byNumber, studentCount);
		}
		else if (select == 5)
		{
			qsort(byNumber, studentCount, sizeof(Student*), compareMath);

            printStudentList(byNumber, studentCount);
		}
		else if (select == 6)
		{
			qsort(byNumber, studentCount, sizeof(Student*), compareAve);

            printStudentList(byNumber, studentCount);
		}
		else if (select == 7)
		{
			qsort(byNumber, studentCount, sizeof(Student*), compareEnglishplus);

            printStudentList(byNumber, studentCount);
		}
		else if (select == 8)
		{
			qsort(byNumber, studentCount, sizeof(Student*), compareMathplus);

            printStudentList(byNumber, studentCount);
		}
		else if (select == 9)
		{
			qsort(byNumber, studentCount, sizeof(Student*), compareAveplus);

            printStudentList(byNumber, studentCount);
		}
		else if (select == 10)
		{
			qsort(byNumber, studentCount, sizeof(Student*), compareNumbersplus);

            printStudentList(byNumber, studentCount);
		}
		else if (select == 11)
		{
			qsort(byNumber, studentCount, sizeof(Student*), comparegivennameplus);

            printStudentList(byNumber, studentCount);
		}
		else if (select == 12)
		{
			qsort(byNumber, studentCount, sizeof(Student*), comparefamilynameplus);

            printStudentList(byNumber, studentCount);
		}
        else
            return 0;
    }
}
