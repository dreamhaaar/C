#include <stdio.h>

int main()
{
    int phy, chem, math, sumPhyMat, totalMarks, checker;
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &phy);

    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chem);

    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &math);

    sumPhyMat = phy + math;
    totalMarks = sumPhyMat + chem;

    printf("\nTotal marks of Maths, Physics and Chemistry: %d", totalMarks);
    printf("\nTotal marks of Maths and Physics: %d", sumPhyMat);

    checker = ((math >= 65 && phy >= 55 && chem >= 50) ? ((totalMarks >= 190 || sumPhyMat >= 140) ? 1 : 0) : 0);
    (checker == 1) ? printf("\nThe candidate is eligible.") : printf("\nThe candidate is not eligible.");
}