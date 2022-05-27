# include <stdio.h>
# include <string.h>


struct Student // struct type
{
    char name[20];
    char number[20];
    char major[20];
    char age[5];
    char address[40];
};

int main()
{
    struct Student person[1000]; // 1000 students are maximum to save
    int i, j, tot, select, count, common;

    printf("Welcome! You can enter data for 1000 student\n");

    loop: // select action
    {   
        printf("\nPlease enter the number to active\n");
        printf("(1 : add, 2 : search, 3 : delete, 4 : entire inqury, 5 : Quit)\n: ");
        scanf("%d", &select);

        switch (select) // switch ~ case statement
        {
            case 1:
                goto new; // enter the new data of students
                break;

            case 2:
                goto search; // find students for searching name
                break;

            case 3:
                goto delete; // delete student data 
                break;

            case 4:
                goto entire; // inqury entire students data
                break;

            case 5:
                goto exit; // program off
                break;

            default:
                printf("Error : There is no choice. Enter number again.\n"); // error
                goto loop;
                break;
        }
    }
    
    new: // new loop
    {
        printf("How many students do you want to enter? : ");
        scanf("%d", &count);

        for (tot = j; tot < j + count; tot++) 
        {
            printf("\nname[%d] : ", tot);
            scanf("%s", person[tot].name);

            printf("number[%d] : ", tot);
            scanf("%s", person[tot].number);

            printf("major[%d] : ", tot);
            scanf("%s", person[tot].major);

            printf("age[%d] : ", tot);
            scanf("%s", person[tot].age);

            printf("address[%d] : ", tot);
            scanf("%s", person[tot].address);
        }
        j = tot - 1; // save data at next array
        printf("\nSave complete\n");

        goto loop;
    }

    search: // searching name loop
    {
        struct Student *p = NULL; // pointer p
        char in_name[20];  // save input name data

        printf("\nEnter the name for searching : ");
        scanf("%s", &in_name);

        common = 0; // count common name
        for(int i = 0; i < tot; i++)
        {
            if(strcmp(in_name, person[i].name) == 0) // if in_name and person[i].name are same
            {
                p = &person[i];
                common++; 
                
                printf("\n%s[%d]'s information", in_name, i);
                printf("\nname : %s", p->name); // access name memory
                printf("\nnumber : %s", p->number); // access number memory
                printf("\nmajor : %s", p->major); // access major memory
                printf("\nage : %s", p->age); // access age memory
                printf("\naddress : %s\n", p->address); // access address memory
            } 
        }
        
        printf("\nTheir are %d informations\n", common); // print the number of same name
        goto loop;
    }

    delete: // delete loop
    {
        char find[20];

        printf("\nEnter the number for delete : "); 
        scanf("%s", &find);

        for (i = 0; i < tot; i++)
        {
            if (strcmp(find, person[i].name) == 0) // if find and person[i].name are same
            {
                person[i] = person[i+1]; // overwrite following data
            }
            person[i+1] = person[i+2]; // overwrith following data others too
        }
        tot = tot - 1; // total number of student is decrease (-1)
        printf("\nDelete complete\n");

        goto loop;
    }

    entire: // inqury all loop
    {
        for (i = 0; i < tot; i++)
        {   
            printf("\nstudent[%d]", i);
            printf("\nname : %s", person[i].name);
            printf("\nnumber : %s", person[i].number);
            printf("\nmajor : %s", person[i].major);
            printf("\nage : %s", person[i].age);
            printf("\naddress : %s\n", person[i].address);
        }

        printf("\nDon't have any more information\n");

        goto loop;
    }

    exit:
    {
        printf("Quit the program\n");
    }

    return 0;
}