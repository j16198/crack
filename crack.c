#include <cs50.h>
#include <stdio.h>
#include <crypt.h>
#include <string.h>

const char ASCII[52] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};

int main(int argc, string argv[])
{
    if(argc != 2)
        {
            printf("Usage: ./crack key \n");
            return 1;
        }
    char salt[3] = {argv[1][0], argv[1][1], '\0'};
            
    string encrypt = argv[1];
    
    char check[6];
    
    for(int i = 0; i < 52;i++)
    {
        check[0] = ASCII[i];
        check[1] = '\0';
        if (!strcmp(crypt(check,salt) ,encrypt))
        {
            printf("%s \n", check);
            return 0;
        }
    }
    
    for(int i = 0; i < 52;i++)
    {
        check[0] = ASCII[i];
        for(int j = 0; j < 52;j++){
            check[1] = ASCII[j];
        
            check[2] = '\0';
            if (!strcmp(crypt(check,salt) ,encrypt))
            {
                printf("%s \n", check);
                return 0;
            }
        }
    }
    
    for(int i = 0; i < 52;i++)
    {
        check[0] = ASCII[i];
        for(int j = 0; j < 52;j++){
            check[1] = ASCII[j];
            for(int k = 0; k < 52; k++){
                check[2] = ASCII[k];
                check[3] = '\0';
                if (!strcmp(crypt(check,salt) ,encrypt))
                {
                    printf("%s \n", check);
                    return 0;
                }
            }
        }
    }
    
    for(int i = 0; i < 52;i++)
    {
        check[0] = ASCII[i];
        for(int j = 0; j < 52;j++){
            check[1] = ASCII[j];
            for(int k = 0; k < 52; k++){
                check[2] = ASCII[k];
                for(int v = 0; v < 52; v++){
                    check[3] = ASCII[v];
                    check[4] = '\0';
                    if (!strcmp(crypt(check,salt) ,encrypt))
                    {
                        printf("%s \n", check);
                        return 0;
                    }
                }
            }
        }
    }
    
    for(int i = 0; i < 52;i++)
    {
        check[0] = ASCII[i];
        for(int j = 0; j < 52;j++){
            check[1] = ASCII[j];
            for(int k = 0; k < 52; k++){
                check[2] = ASCII[k];
                for(int v = 0; v < 52; v++){
                    check[3] = ASCII[v];
                    for(int z = 0; z < 52; z++){
                        check[4] = ASCII[z];
                        check[5] = '\0';
                        if (!strcmp(crypt(check,salt) ,encrypt))
                        {
                            printf("%s \n", check);
                            return 0;
                        }
                    }
                }
            }
        }
    }
    
}


