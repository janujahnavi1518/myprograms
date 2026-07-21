#include<stdio.h>
int main()
{
    int choice;
    printf("====== restarant menu ======\n");
    printf("1. dum biryani (non-veg)\n");
    printf("2. fry biryani (non-veg)\n");
    printf("3. vegtable biryani (veg)\n");
    printf("4. paneer biryani (veg)\n");
    printf("\n enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("you ordered dum biryani (non-veg).\n");
        break;
        case 2:
        printf("you ordered fry biryani (non-veg).\n");
        break;
        case 3:
        printf("you ordered vegitable biryani (veg).\n");
        break;
        case 4:
        printf("you ordered paneer biryani (veg).\n");
        break;
        defalt:
        printf("invalid choice\n");
    }
    return 0;
}