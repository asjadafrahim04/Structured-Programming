        #include<stdio.h>
        int main(){
         float num4, num5 ;
            int choice;
            printf("Enter two numbers: ");
            scanf("%f %f", &num4, &num5);
            printf("1.ADDITION         4.DIVISION\n");

            printf("2.SUBTRACTION      5.REMAINDER\n");

            printf("3.MULTIPLICATION\n\n");
            printf("Enter your choice (1-5): ");
            scanf("%d", &choice);
            switch (choice)
            {
                case 1:
                    printf("Addition: %f\n", num4 + num5);
                    break;
                case 2:
                    printf("Subtraction: %f\n", num4 - num5);
                    break;
                case 3:
                    printf("Multiplication: %f\n", num4 * num5);
                    break;
                case 4:
                    printf("Division: %f\n", num4 / num5);
                    break;
                case 5:
                    printf("Remainder: %d\n", (int)num4 % (int)num5);
                    break;
                default:
                    printf("Invalid choice\n");
                    break;
            }
        }
