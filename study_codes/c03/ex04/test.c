#include <stdio.h>
char *ft_strstr(char *str, char *to_find);
int    len(char *dest);

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    int s_str = len(str);
    int s_find = len(to_find);
    int control = 0;
    int flag = 0;
    char *ptr = str; 
    
    i = 0;
    //j = 0;
    while (i < s_str)
    {
           j = 0;
           flag = 0;
            if (str[i] != to_find[j]) //procura a primeira letra de find em str
            {   
               //printf("no if\n");
               // printf("str[i] -> string: %c\n", str[i]);
              //  printf("to_find[j] -> sub: %c\n", to_find[j]);
               // printf("ptr: %c\n", *ptr);
              //  printf("control: %c\n", *ptr);
              //  printf("\n");
                control++; //pra saber qtos index o i andou
                 ptr = &str[control]; //vai seguindo junto com control
                 printf("ptr: %c\n", *ptr);
                //break; //sai do loop, incrementa o i pra continuar procurando um match
            }
            else
            { 
                while(str[control] == to_find[j])
                {
                  //  printf("no else\n");
                  //  printf("str[control]: %c\n", str[control]);
                 //   printf("\n");
                    //printf("to_find[j]: %c\n", to_find[j]);
                    //printf("ptr no else\n: %c\n", *ptr);
                    //printf("control no if\n: %c\n", str[control]);
                    j++;
                    control++;
                    flag++;
                    if(flag == s_find)
                        return ptr;
                }
            printf("\n");
          //j++;
        }
        i++;
    }

    return NULL;
}

int    len(char *dest)
{
    int i;

    i = 0;
    while (dest[i])
        i++;
    return i;
}


int main() {
  
    char string8[] = "stringsub";
    char substring8[] = "sub";
    printf("String : %s\n", string8);
    printf("Substring : %s\n", substring8);
    printf("Resultado : %s\n", ft_strstr(string8, substring8));
    printf("\n");
    return 0;
}