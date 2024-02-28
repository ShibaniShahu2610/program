#include <stdio.h>
#define size 7
int array[size];

void init() {
    int i;
    for (i = 0; i < size; i++)
        array[i] = -1;
}

void insert(int val) 
{
    int key = val % size;

    if (array[key] == -1) 
    {
        array[key] = val;
        printf("%d inserted at array[%d]\n", val, key);
    } 
    else 
    {
        printf("Collision : array[%d] has element %d already!\n", key, array[key]);
        printf("Unable to insert %d\n", val);
    }
}

void del(int val) 
{
    int key = val % size;
    if (array[key] == val)
        array[key] = -1;
    else
        printf("%d not present in the hash table\n", val);
}

void search(int val) 
{
    int key = val % size;
    if (array[key] == val)
        printf("Search Found\n");
    else
        printf("Search Not Found\n");
}

void print() 
{
    int i;
    for (i = 0; i < size; i++)
        printf("array[%d] = %d\n", i, array[i]);
}

int main() 
{
    init();
    int val, choice;
    do {
        printf("\n1. Insert\n2. Delete\n3. Search\n4. Print\n5. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &val);
                insert(val);
                break;
            case 2:
                printf("Enter the value to delete: ");
                scanf("%d", &val);
                del(val);
                break;
            case 3:
                printf("Enter the value to search: ");
                scanf("%d", &val);
                search(val);
                break;
            case 4:
                printf("Hash table:\n");
                print();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
