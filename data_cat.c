//a simple program to perform students exam result analysis, by Joseph
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define all 300

//function prototypes
void mean_grade(double);
void maximum(int);
void minimum(int);
//end of function prototypes

int main()

{
    start:;
    double mean, total = 0;
    int maxi, mini, score;
    int number, students, marks[all];
    //mean grade
    printf("Enter the Number of Students 'Not more than 300':\n");
    scanf("%d", &number);
    printf("Enter The Marks of the Students:\n");
//if(marks[students] <= 100 && marks[students] >= 0)
 //   {
    for(students = 0; students < number; students ++){
        scanf("%d", &marks[students]);
    }


    for(students = 0; students < number; students ++){
        total = total + marks[students];
        mean = total / number;
    }
    mean_grade(mean);//calls the procedure for mean grade
   //maximum and minimum
    for(students = 0; students < number; students ++){
        maxi = marks[0];
        mini = marks[0];
    }
    for(students = 0; students < number; students ++){
        if (maxi < marks[students]){
            maxi = marks[students];
        }
        else if(mini > marks[students]){
            mini = marks[students];
        }
    }
    maximum(maxi);//this calls for the procedure maximum and procedure minimum
    minimum(mini);

//the following function constitutes a function for distribution of grades

     int first = 0;
     int second_up = 0;
     int second_lw = 0;
     int pass = 0;
     int fail = 0;
     int count = 0;

 //  for(students = 0; students < number; students ++){
  //  score = marks[students];
  // }

   for(students = 0; students < number; students ++){
    score = marks[students];

    count ++;
    if (score >= 70 && score <= 100){
        first ++;
    }
    else if (score >= 60 && score < 70){
        second_up ++;
    }
    else if (score >= 50 && score < 60){
        second_lw ++;
    }
    else if (score >= 40 && score < 50){
        pass ++;
    }
    else if (score < 40){
        fail ++;
    }
   }

    printf("\nGRADE DISTRIBUTION:\n\nTotal Grades: \t\t%.2d", count);
    printf("\nAs:\t'A's =\t%.2d", first);
    printf("\nB+s:\t'B's =\t%.2d", second_up);
    printf("\nSecond_Lower:\t'C's =\t%.2d", second_lw);
    printf("\nPass:\t\t'D's =\t%.2d", pass);
    printf("\nFails:\t\t'F's =\t%.2d\n\n", fail);
 //   }
//else{
//    printf("Invalid Entry");
//}
//end of grade distribution function
    char y;
    printf("To continue press Y to terminate press any other key\n");
    scanf(" %c", &y);
    if(y == 'y' || y == 'Y'){
        goto start;
    }
    else{
        printf("good bye\n");
    }
    return 0;
}




void (mean_grade(double mean))//beginning of the procedure to find the mean grade
{

    if (mean >= 70){
        printf("Mean Grade    = A\tof\t%.3f Marks\n", mean);
    }
    else if (mean < 70 && mean >= 60){
       printf("Mean Grade    = B\tof\t%.3f Marks\n", mean);
    }
    else if (mean < 60 && mean >= 50){
        printf("Mean Grade    = C\tof\t%.3f Marks\n", mean);
    }
    else if (mean < 50 && mean >= 40){
        printf("Mean Grade    = PASS\tof\t%.3f Marks\n", mean);
    }
    else {
        printf("Mean Grade    = FAIL\tof\t%.3f Marks\n", mean);
    }
} //end of procedure mean grade

//beginning of procedure maximum and minimum
void (maximum(int maxi))
{

    if (maxi >= 70){
        printf("Maximum Grade = A\tof\t%.3d Marks\n", maxi);
    }
    else if (maxi < 70 && maxi >= 60){
       printf("Maximum Grade = B\tof\t%.3d Marks\n", maxi);
    }
    else if (maxi < 60 && maxi >= 50){
        printf("Maximum Grade = C\tof\t%.3d Marks\n", maxi);
    }
    else if (maxi < 50 && maxi >= 40){
        printf("Maximum Grade = PASS\tof\t%.3d Marks\n", maxi);
    }
    else {
        printf("Maximum Grade = FAIL\tof\t%.3d Marks\n", maxi);
    }
}
//end of the procedure to find maximum and grade

//beginning of procedure to find the minimum grade

void (minimum(int mini))
{
    if (mini >= 70){
        printf("Minimum Grade = A\tof\t%.3d Marks\n", mini);
    }
    else if (mini < 70 && mini >= 60){
       printf("Minimum Grade = B\tof\t%.3d Marks\n", mini);
    }
    else if (mini < 60 && mini >= 50){
        printf("Minimum Grade = C\tof\t%.3d Marks\n", mini);
    }
    else if (mini < 50 && mini >= 40){
        printf("Minimum Grade = PASS\tof\t%.3d Marks\n", mini);
    }
    else {
        printf("Minimum Grade = FAIL\tof\t%.3d Marks\n", mini);
    }
}
//end of procedure find the minimum grade

//the above function is confirmed to be working


