# include <stdio.h>
# include <string.h>


struct Student
{
    char name[20];
    char number[20];
    char major[20];
    char age[5];
    char address[40];
};

int main()
{
    struct Student person[1000];
    int i, j, tot, select, count, common;

    printf("Welcome! You can enter data for 1000 student\n");

    loop:
    {   
        printf("\nPlease enter the number to active(1 : add, 2 : search, 3 : delete, 4 : entire inqury) : ");
        scanf("%d", &select);

        switch (select)
        {
            case 1:
                goto new;
                break;

            case 2:
                goto search;
                break;

            case 3:
                goto delete;
                break;

            case 4:
                goto entire;
                break;

            case 5:
                printf("Quit the program\n");
                break;

            default:
                printf("Error : There is no choice\n");
                break;
        }
    }
    // 신규입력
    new:
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
        j = tot - 1;
        printf("\nSave complete\n");

        goto loop;
    }

    //이름 검색
    search:
    {
        struct Student *p = NULL;   // 구조체의 포인터 변수 p를 생성한다. 현재 아무 주소도 가리키지 않고 있다.

        int size = sizeof(person) / sizeof(person[0]);   // 구조체의 변수 pb[]에 대한 index 개수를 구한다.
        char in_name[20];                     // 입력받을 이름을 저장할 변수이다.

        printf("\nEnter the name for searching : ");
        scanf("%s", &in_name);

        common = 0;
        for(int i = 0; i < tot; i++)
        {          // pb[] 배열을 size(index의 개수) 만큼 반복하며 찾는다.
            if(strcmp(in_name, person[i].name) == 0)
            {   // name과 pb[i].name의 문자열이 같으면 0을 반환한다.
                p = &person[i];
                common++; 
                
                printf("\n%s[%d]'s information", in_name, i);
                printf("\nname : %s", p->name);
                printf("\nnumber : %s", p->number);
                printf("\nmajor : %s", p->major);
                printf("\nage : %s", p->age);
                printf("\naddress : %s\n", p->address);// 구조체의 포인터 변수는 '->'를 이용하여 멤버변수에 접근한다.
                // 그리고 name과 pb[i].name이 같으면 구조체의 포인터 변수 *p에 해당하는 pb[] index의 주소값을 저장한다.
            } 
        }                                // 검색할 이름을 찾았기 때문에 for문을 빠져 나온다.
        
        printf("\nTheir are %d informations\n", common);
        goto loop;
    }

    //삭제 기능
    delete:
    {
        char find[20];

        printf("\nEnter the number for delete : ");
        scanf("%s", &find);

        for (i = 0; i < tot; i++)
        {
            if (strcmp(find, person[i].name) == 0)
            {
                person[i] = person[i+1]; 
            }
        }
        tot = tot - 1; 

        printf("\nDelete complete\n");
        goto loop;
    }

    entire:
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

    return 0;
}