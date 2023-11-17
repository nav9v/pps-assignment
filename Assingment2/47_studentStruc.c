#include <stdio.h>

struct student_record {
    char name[50];
    int roll_no;
    int marks[5];
    float total_marks;
};
int main() {
    int n = 10;
    struct student_record s[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll no: ");
        scanf("%d", &s[i].roll_no);
        printf("Marks in 5 subjects: ");
        for (int j = 0; j < 5; j++) {
            scanf("%d", &s[i].marks[j]);
            s[i].total_marks += s[i].marks[j];
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i].total_marks < s[j].total_marks) {
                struct student_record temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("Rank %d: %s (Roll no: %d) - Total Marks: %.2f\n", i + 1, s[i].name, s[i].roll_no, s[i].total_marks);
    }
    return 0;
}
