#include <stdio.h>
#include <string.h>
#include <ctype.h>

//#define COMPILE_C99
#define MAX_ROOM 5
#define MAX_CUST_NAME_LEN 20

typedef struct
{
    int roomID;
    int status;
    char customerName[MAX_CUST_NAME_LEN];
} Room;

void printMenu()
{
    printf("NTU HOTEL ROOM RESERVATION PROGRAM:\n");
    printf("1: listOccupiedRooms()\n");
    printf("2: assignRoom()\n");
    printf("3: removeRoom()\n");
    printf("4: findCustomer()\n");
    printf("5: quit\n");
}

void clearInputBuffer()
{
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void removeNewLine(char str[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (str[i] == '\n' || str[i] == '\r')
        {
            str[i] = '\0';
        }
    }
}

int compareString(char str1[], char str2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (str1[i] == '\0' && str2[i] == '\0')
        {
            return 0;
        }
        else if (tolower(str1[i]) != tolower(str2[i]))
        {
            return 1;
        }
    }
    return 0;
}

int emptyRoomsLeft(Room rooms[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (rooms[i].status == 0)
        {
            count++;
        }
    }
    return count;
}

void printRoomInfo(Room* room)
{
    printf("roomID: %d\ncustomer name: %s\n", room->roomID, room->customerName);
}

void listOccupiedRooms(Room rooms[], int size)
{
    printf("listOccupiedRooms():\n");
    int occupiedRoomCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (rooms[i].status == 1)
        {
            ++occupiedRoomCount;
            printRoomInfo(&(rooms[i]));
        }
    }
    if (occupiedRoomCount == 0)
    {
        printf("The hotel is empty\n");
    }
}

void assignRoom(Room rooms[], int size)
{
    printf("assignRoom():\n");

    if (emptyRoomsLeft(rooms, size) == 0)
    {
        printf("The hotel is full\n");
        return;
    }

    int roomID = 0;
    int roomIndex = 0;
    char customerName[MAX_CUST_NAME_LEN];
    memset(customerName, 0, MAX_CUST_NAME_LEN);

    while (1)
    {
        printf("Enter a roomID between 1 and 5:\n");
#ifdef COMPILE_C99
        scanf("%d", &roomID);
#else
        scanf_s("%d", &roomID);
#endif
        clearInputBuffer();
        
        if (roomID > size || roomID < 1)
        {
            continue;
        }
        
        roomIndex = roomID - 1;
        if (rooms[roomIndex].status == 1)
        {
            printf("Occupied! Enter another roomID\n");
            continue;
        }
        
        break;
    }

    printf("Enter customer name:\n");
    fgets(customerName, MAX_CUST_NAME_LEN, stdin);
    removeNewLine(customerName, MAX_CUST_NAME_LEN);

    rooms[roomIndex].status = 1;
#ifdef COMPILE_C99
    strcpy(rooms[roomIndex].customerName, customerName);
#else
    strcpy_s(rooms[roomIndex].customerName, MAX_CUST_NAME_LEN, customerName);
#endif
    printf("The room has been assigned successfully\n");
}

void removeRoom(Room rooms[], int size)
{
    printf("removeRoom():\n");

    if (emptyRoomsLeft(rooms, size) == size)
    {
        printf("All the rooms are empty\n");
        return;
    }

    int roomID = 0;
    int roomIndex = 0;
    while (1)
    {
        printf("Enter a roomID between 1 and 5:\n");
#ifdef COMPILE_C99
        scanf("%d", &roomID);
#else
        scanf_s("%d", &roomID);
#endif
        clearInputBuffer();

        if (roomID > size || roomID < 1)
        {
            continue;
        }

        roomIndex = roomID - 1;
        if (rooms[roomIndex].status == 0)
        {
            printf("Empty! Enter another roomID for removal\n");
            continue;
        }

        break;
    }

    rooms[roomIndex].status = 0;
    memset(rooms[roomIndex].customerName, 0, MAX_CUST_NAME_LEN);
    printf("Removal is successful\n");
}

void findCustomer(Room rooms[], int size)
{
    printf("findCustomer():\n");
    char customerName[20];
    memset(customerName, 0, MAX_CUST_NAME_LEN);

    printf("Enter customer name:\n");
    fgets(customerName, MAX_CUST_NAME_LEN, stdin);
    removeNewLine(customerName, MAX_CUST_NAME_LEN);

    for (int i = 0; i < size; i++)
    {
        if (rooms[i].status == 1 &&
            compareString(rooms[i].customerName, customerName, 20) == 0)
        {
            printf("The target customer name is found\n");
            printRoomInfo(&(rooms[i]));
            return;
        }
    }
    printf("The target customer name is not found\n");
}

int main()
{
    Room rooms[MAX_ROOM];
    for (int i = 0; i < MAX_ROOM; i++)
    {
        rooms[i].roomID = i + 1;
        rooms[i].status = 0;
        memset(rooms[i].customerName, 0, MAX_CUST_NAME_LEN);
    }

    printMenu();

    while (1)
    {
        printf("Enter your choice:\n");
        int choice;
#ifdef COMPILE_C99
        scanf("%d", &choice);
#else
        scanf_s("%d", &choice);
#endif
        clearInputBuffer();
        switch (choice)
        {
            case 1:
                listOccupiedRooms(rooms, MAX_ROOM);
                break;
            case 2:
                assignRoom(rooms, MAX_ROOM);
                break;
            case 3:
                removeRoom(rooms, MAX_ROOM);
                break;
            case 4:
                findCustomer(rooms, MAX_ROOM);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
