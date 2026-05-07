// #include <stdio.h>
// // using while loop
// int main()
// {
//     int n;
//     printf("Enter a natural number: ");
//     scanf("%d", &n);
//     while (n >= 1)
//     {
//         printf("%d\n", n);
//         n--;
//         // n-- → n is decreased by 1
//         // n++ → n is increased by 1
//     }

//     return 0;
// }

// #include <stdio.h>\
// int main()
// {
//     int skip = 5;
//     int i = 0;
//     while (i < 10)
//     {
//         if (i == skip)
//         {
//             i++;
//             continue; // skips the rest of the loop body for i == 5
//         }
//         printf("%d\n", i);
//         i++;
//     }
//     return 0;
// }

// #include <stdio.h>
// // using do while loop
// int main()
// {
//     int n, i;

//     printf("Enter a natural number: ");
//     scanf("%d", &n);

//     i = n; // initialize i with n

//     do {
//         printf("%d\n", i);
//         i--;
//     } while (i >= 1);

//     return 0;
// }
