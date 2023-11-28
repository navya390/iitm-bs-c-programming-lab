#include <stdio.h>
#include <stdlib.h>
#define MAX_STUDENTS 100
#define MAX_STRING   200

typedef struct {
    // Following members needed in struct:
    char name[MAX_STRING];// - name: string
    char rollno[MAX_STRING];// - roll number: string
    int marks;// - marks: integer
    char grade;// - grade: char

} student_t;

void print_student(student_t s) {
    // Output should look like the following:
    // Nitin C (abc123) got grade D with 50 marks

    // Fill in the correct info for the "_" values and the "..."
    printf("%s (%s) got grade %c with %d marks\n", .name, .rollno, .grade, .marks);
}

void compute_grade(student_t* sptr) {
    if (sptr->marks >= 90) sptr->grade = 'S';
    else if (sptr->marks >= 80) sptr->grade = 'A';
    else if (sptr->marks >= 70) sptr->grade = 'B';
    else if (sptr->marks >= 60) sptr->grade = 'C';
    else if (sptr->marks >= 50) sptr->grade = 'D';
    else if (sptr->marks >= 40) sptr->grade = 'E';
    else sptr->grade = 'U';
}

int read_csv(char* filename, student_t s_array[MAX_STUDENTS]) {
    // Open a file for reading
    FILE* fp = fopen(filename, "r");
    if (fp==NULL){
        printf("Failed to open file\n");
    return 0;
    }

    int num = 0;
    char buf[MAX_STRING];
    while (fgets(buf, MAX_STRING, fp) != NULL && num < MAX_STUDENTS) {
        student_t* sptr = &s_array[num];
        sscanf(buf, "%[^,],%[^,],%d", sptr->name, sptr->rollno, sptr->marks);
        compute_grade(sptr);
        num ++;
    }
    fclose(fp);
    return num;
}

int main() {
    student_t s_array[MAX_STUDENTS];
    
    int num = read_csv("students.csv", s_array);

    for (int i = 0; i < num; i++) {
        print_student(s_array[i]);
    }
    return 0;
}
