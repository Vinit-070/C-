/* Program to Print Details in following Format :
        Name : "xyz"
        Collage Name : CGPIT
        Branch Name : Computer Engineering
        Subject: Basics of Logic Development
        Enrolment No.: 201204101510005
*/
#include<stdio.h>
void main()
{
    char name[20] = "xyz", c_name[20] = "CGPIT", b_name[40] = "Computer Engineering",
     sub[40] = "Basics of Logic Development", enroll_no[30] = "201204101510005" ;
    
    printf("Name : %s\n",name);
    printf("Collage Name : %s\n",c_name);
    printf("Branch Name : %s\n",b_name);
    printf("Subject : %s\n",sub);
    printf("Enrolment No. : %s\n",enroll_no);
}
    