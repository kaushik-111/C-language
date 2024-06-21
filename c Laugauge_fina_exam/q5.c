#include <stdio.h>

struct House
{
    int room_quantity;
    int established_year;
    char city[50];
};

int main()
{

    printf("Quetion: 5.develop a cprogram that defines a structure representing a house (with attributes like room_quantity , established_year , and city). list n Number of house details using array of object s.\n\n\n");
    int Number;
    printf("Enter the number of houses: ");
    scanf("%d", &Number);

    struct House houses[Number];

    for (int index = 0; index < Number; ++index)
    {
        printf("\nHouse %d:\n", index + 1);

        printf("Enter number of rooms: ");
        scanf("%d", &houses[index].room_quantity);

        printf("Enter established year: ");
        scanf("%d", &houses[index].established_year);

        // City
        printf("Enter city: ");
        scanf(" %[^\n]", houses[index].city);
    }

    printf("\nDetails of Houses:\n");
    for (int index = 0; index < Number; ++index)
    {
        printf("\nHouse %d:\n", index + 1);
        printf("Rooms: %d\n", houses[index].room_quantity);
        printf("Established Year: %d\n", houses[index].established_year);
        printf("City: %s\n", houses[index].city);
    }

    return 0;
}
