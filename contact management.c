#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#include<conio.h> 
typedef struct list add; 
struct list 
{ 
    char name[40]; 
    char country_code[4]; 
    char num[20]; 
    char gmail[40]; 
    char fb[40]; 
    add* next; 
}; 
void Insert(add** head); 
void Search(add*head); 
void Delete(add** head); 
void Display(add* head); 
int i=1,size=0; 
void Insert(add** head) 
{ 
    add* temp=(add*)malloc(sizeof(add)); 
    printf("\n\n\n\t\t\tContact name : "); 
    gets(temp->name); 
    system("CLS"); 
    printf("\n\n\n\t\t\tContact Name : "); 
    gets(temp->name); 
    printf("\n\n\n\t\t\tCountry code : "); 
    gets(temp->country_code); 
     
    printf("\n\n\n\t\t\tMobile Number : "); 
    gets(temp->num); 
     
    printf("\n\n\n\t\t\tGmail id : "); 
    gets(temp->gmail); 
     
    printf("\n\n\n\t\t\tFacebook Account : "); 
    gets(temp->fb); 
     
    temp->next = NULL; 
    size++; 
    if(size == 10000) 
    { 
        system("CLS"); 
        printf("\n\n\n\t\t\tPhone Memory is full!!!"); 
        printf("\n\t\tIf you want to add more contact,You have to delete some contact from your list...\n\n\n"); 
        return; 
    } 
    else 
    { 
        if(*head == NULL) 
        { 
            *head = temp; 
            system("CLS"); 
            printf("\n\n\t\t\t\t\tDone!!!\n\n"); 
            return; 
        } 
        else 
        { 
            add* p = *head; 
            while(p->next != NULL) 
            { 
                p = p->next; 
            } 
            p->next = temp; 
            system("CLS"); 
            printf("\n\t\t\t\t\tDone!!!\n\n"); 
        } 
        return; 
    } 
} 
void Search(add*head) 
{ 
    char ch[40]; 
 
    printf("\n\n\n\t\tContact name : "); 
    gets(ch); 
    system("CLS"); 
    printf("\n\n\n\t\tContact name : "); 
    gets(ch); 
    system("CLS"); 
    if(head == NULL) 
    { 
        system("CLS"); 
        printf("\n\n\n\t\tNo Contact exists in this Phone Book List!!!\n\n"); 
        return; 
    } 
   
  else 
    { 
        add*p = head; 
        while(p != NULL) 
        { 
            if(strcmp((p->name),ch) == 0) 
            { 
                system("CLS"); 
                printf("\n\t\t\tName %s",p->name); 
                printf("\n\t\t-------------------------"); 
                printf("\n\t\tCountry code :%s",p->country_code); 
                printf("\n\t\tNumber : %s",p->num); 
                printf("\n\t\tGmail ID : %s",p->gmail); 
                printf("\n\t\tFacebook Account : %s\n\n",p->fb); 
                return; 
            } 
            p = p->next; 
        } 
        system("CLS"); 
        printf("\n\n\n\t\tThis Contact is not exists in the list! "); 
    } 
} 

void Delete(add** head) 
{ 
    char ch[40]; 
    printf("\n\t\tContact name : "); 
    gets(ch); 
    system("CLS"); 
    printf("\n\t\tContact name : "); 
    gets(ch); 
    system("CLS"); 
   
  if(*head == NULL) 
    { 
        system("CLS"); 
        printf("\n\t\t\t\t\tNo Contact exists in this Phone Book List!\n\n"); 
        return; 
    } 
    else 
    { 
        if(strcmp(((*head)->name),ch) == 0) 
        { 
            add*p=*head; 
            *head = (*head)->next; 
            free(p); 
            printf("\n\t\t\t\t\tDone!!!\n\n\n\n"); 
            return; 
        } 
        else 
        { 
            add*p = *head; 
            while(p->next != NULL) 
            { 
                if(strcmp((p->next->name),ch) == 0) 
                { 
                    p->next = p->next->next; 
                    size--; 
                    return; 
                } 
                p = p->next; 
            } 
            system("CLS"); 
      
       printf("\n\t\t\t\t\tInvalid Contact!!!\n\n"); 
        } 
    
 } 
} 
void Display(add* head) 
{ 
    if(head == NULL) 
    { 
        system("CLS"); 
        printf("\n\n\n\t\tNo Contact exists in this Phone Book List!"); 
        return; 
    } 
    else 
    { 
        add*p = head; 
        while(p != NULL) 
        { 
        
printf("\n\t\t\t\t*********************************************************\n"); 
        printf("\t\t\t\t*           Here is all records listed in phonebook        *\n");            
        
printf("\t\t\t\t**********************************************************\n\n\n"); 
            printf("\n\t\t\t\t%d.%c%s",i,32,p->name); 
            printf("\n\t\t\t-------------------------"); 
            printf("\n\t\t\tCountry code : %s",p->country_code); 
            printf("\n\t\t\tNumber : %s",p->num); 
            printf("\n\t\t\tGmail ID : %s",p->gmail); 
            printf("\n\t\t\tFacebook Account : %s\n\n",p->fb); 
            p = p->next; 
            i++; 
        } 
    i=1; 
    return; 
    } 
} 
void main() 
{ 
    add* head=NULL; 
     char c[40]; 
                mainhome: 
             system("CLS"); 
                printf("\n\t\t|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|"); 
                printf("\n\t\t||                  !!!!!!!!!!!!!!!!!!!!!!!!!!!!                ||");  
                printf("\n\t\t|!!!!!!!!!!!!!!!!!!! WELCOME TO OUR PHONE BOOK 
!!!!!!!!!!!!!!!!!|"); 
                printf("\n\t\t||                 !!!!!!!!!!!!!!!!!!!!!!!!!!!!                 ||"); 
                printf("\n\t\t|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n\n\n"); 
    while(1) 
    { 
 
        printf("\n\n\t\t\t\t\t\tMenu"); 
        printf("\n\t\t\t-------------------------------------------------"); 
        printf("\n\t\t\t1)Create A Contact\t\t2)Remove A Contact"); 
        printf("\n\t\t\t3)Show The Contact List\t\t4)Find A Contact"); 
        printf("\n\t\t\t5)Exit"); 
        printf("\n\t\t\tEnter your choice :"); 
        int ch; 
        scanf("%d",&ch);        
       
        if(ch ==5) 
        { 
            break; 
        } 
        else 
        { 
             switch(ch) 
            { 
                case 1 :system("CLS"); 
                        Insert(&head); 
                        break; 
                case 2 :system("CLS"); 
                        Delete(&head); 
                        break; 
                case 3 :system("CLS"); 
                        Display(head); 
                        break; 
                case 4 :system("CLS"); 
                        Search(head); 
                        break; 
                default :printf("\n\t\tInvalid Choice!Try again!!!"); 
                         break; 
            } 
        } 
    } 
} 
 
 
