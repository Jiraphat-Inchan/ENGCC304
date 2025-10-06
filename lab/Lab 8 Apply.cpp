#include <stdio.h>

int main() {

    float Junior_PG = 20000;
    float ML_PG = 35000;
    float SER_PG = 50000;
    int select;
    float salary = 0;
    float bonus = 0;
    int project;
    float bu_project = 0;
    float sum_salary;
    int experience;

    do {

    printf("******************");
    printf("\nกรุณาเลือกตำแหน่งงาน");
    printf("\n1. Junior Programmer");
    printf("\n2. Mid-Level Programmer");
    printf("\n3. Senior Programmer");
    printf("\n******************");
    printf("\nกรุณาเลือก : ");
    scanf("%d", &select);

    if(select == 1){
        printf("คุณคือ Junior Programmer\n");
        salary = Junior_PG;
    } else if (select == 2){
        printf("คุณคือ Mid-Level Programmer\n");
        salary = ML_PG;
    } else if (select == 3){
        printf("คุณคือ Senior Programmer\n");
        salary = SER_PG;
    } else {
        printf("กดผิดครับ Hello !!!!!!!!!\n");
    }

    } while(select < 1 || select > 3);
    

    printf("กรุณากรอกประสบการณ์การทำงาน (ปี): ");
    scanf("%d", &experience);

    if(experience < 1){
        bonus = 0;
        printf("คุณไม่ได้รับโบนัส\n");
    } else if (experience >= 1 && experience <= 3) {
        bonus = salary * 0.10;
    } else if (experience >= 4 && experience <= 5) {
        bonus = salary * 0.15;
    } else{
        bonus = salary * 0.20;
    }

    printf("กรุณากรอกจำนวนโปรเจกต์ที่คุณเคยทำ : ");
    scanf("%d", &project);
    
    if(project >= 5){
        bu_project = bonus * 0.05; 
    }

    printf("เงินเดือนขั้นต้น: %.2f\n", salary);
    printf("โบนัสตามประสบการณ์: %.2f\n", bonus);
    printf("โบนัสโปรเจกต์: %.2f\n", bu_project);

    sum_salary = salary + bonus + bu_project;
    printf("เงินเดือนรวม: %.2f\n", sum_salary);

    return 0;
}
