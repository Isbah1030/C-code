/*Program Name: Calculate grade using switch case by following daffodil grading methods.
ID: 221-35-1030 */

   #include<stdio.h>
    int main()

    {
        int number;

            printf("Enter the number: ");
            scanf("%d",&number);

            switch(number)
            {
            case 80 ... 100:
                printf("A+");
                break;
            case 75 ... 79:
                printf("A");
                break;
            case 70 ... 74:
                printf("A-");
                break;
            case 65 ... 69:
                printf("B+");
                break;
            case 61 ... 64:
                printf("B");
                break;
            case 56 ... 60:
                printf("B-");
                break;
            case 50 ... 55:
                printf("C+");
                break;
            case 45 ... 49:
                printf("C");
                break;
            case 40 ... 44:
                printf("D");
                break;
            default:
                printf("Fail");
                break;

            }
        return 0;
    }
