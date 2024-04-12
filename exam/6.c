#include <stdio.h>
#include <string.h>

struct mobile
{
    char company_name[20];
    char color[20];
    int model;
    int price;
};

int main()
{
    int n;
    printf("enter number of mobile : ");
    scanf("%d", &n);
    struct mobile m[n];

    for (int i = 0; i < n; i++)
    {
        printf("name: ");
        scanf("%s", &m[i].company_name);
        printf("color: ");
        scanf("%s", &m[i].color);
        printf("model: ");
        scanf("%d", &m[i].model);
        printf("price: ");
        scanf("%d", &m[i].price);
    }

    for (int i = 0; i < n; i++)
    {
        printf("nanme: %s\n", m[i].company_name);
        printf("color: %s\n", m[i].color);
        printf("model: %d\n", m[i].model);
        printf("price: %d\n", m[i].price);
    }

    return 0;
}