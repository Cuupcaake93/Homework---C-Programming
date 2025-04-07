#include <stdio.h>

int main() {
    char date[50];
    char firstName[50];
    char lastName[50];

    printf("Please enter the current date in the \"yyyy-mm-dd\" format: \n");
    scanf("%s", &date);
    printf("Please enter your first name: \n");
    scanf("%s", &firstName);
    printf("Please enter your last name: \n");
    scanf("%s", &lastName);

    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("*                                                                                                       *****\n");
    printf("**                                        [Magrathea ver 0.1]                                            ****\n");
    printf("***                   Magrathea, where a shining planet is created in a wasteland with no grass,          ***\n");
    printf("****           a place where unseen potential is discovered and gems are polished by the hands of experts, **\n");
    printf("*****                                        Welcome to Magrathea.                                          *\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("[User]: %s %s                                   [Execution Time]: %s\n", firstName, lastName, date);
    printf("\n===========================================================================================================\n");

    return 0;
}
