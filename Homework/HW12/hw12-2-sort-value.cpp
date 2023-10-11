/*
    สร้าง Struct เพื่อเก็บข้อมูลของคน 2 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ
    
    Test case:
        Student A
        Name : 
            Yorn
        Score : 
            21.42

        Student B
        Name : 
            Omen
        Score : 
            56.00

        Student C
        Name : 
            Alice
        Score : 
            80.75

        Student D
        Name : 
            Violet
        Score : 
            67.76

    Output:
        Alice Violet Omen Yorn
        80.75 67.76 56.00 21.42

    Test case:
        Student A
        Name : 
            Payna
        Score : 
            77.77
            
        Student B
        Name : 
            Zanis
        Score : 
            88.88

        Student C
        Name : 
            Lubu
        Score : 
            66.66

        Student D
        Name : 
            Krixi
        Score : 
            99.99

    Output:
        Krixi Zanis Payna Lubu
        99.99 88.88 77.77 66.66

*/

#include <stdio.h>

#define MAX_STUDENTS 4

struct Student {
    char Name[50];
    float Score;
};

int main() {
    struct Student students[MAX_STUDENTS];

    // Input information for each student
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %c\n", 'A' + i);
        printf("Name : ");
        scanf(" %[^\n]s", students[i].Name);
        printf("Score : ");
        scanf("%f", &students[i].Score);
    }

    // Display names
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("%s ", students[i].Name);
    }
    printf("\n");

    // Display scores
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("%.2f ", students[i].Score);
    }
    printf("\n");

    return 0;
}
