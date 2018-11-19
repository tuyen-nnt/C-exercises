#include <stdio.h>
#include <string.h>
#include <malloc.h>


void chenX(char* s)
{
    int n = (int) strlen(s);
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == ' ' && s[i + 1] == ' ')
        {
            strcpy(&s[i], &s[i+1]);
            i--;
        }
    }
}

void daughngang(char* s)
{
    int n = (int) strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '-')
            s[i] = ' ';
    }
    chenX(s);
}

void nvat(char* s)
{
    int n = (int) strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '\n' || s[i] == '\t')
            s[i] = ' ';
    }
    chenX(s);
}

int demsotu(char *s)
{
    int n = (int) strlen(s), i;
    int dem = 0;

    if (s[0] != ' ')
        dem = 1;
    for (i = 0; i < n-1; i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            dem++;
    }
    return dem;
}

/*int countStr(char* s)
{
    int dem = 0;
    int n = (int) strlen(s);
    if (s == NULL)
    {
        return 0;
    }
    if (s[0] != ' ')
    {
        dem = 1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if ((s[i] == ' ' || s[i] != ',' || s[i] != '.' || s[i] != '?' || s[i] != '!') && (s[i+1] != ' '));
        {
            dem++;
        }
    }
    return dem;
}*/

void vietHoa(char* s)
{
    int n = (int) strlen(s), i;
    while (s[0] >= 'a' && s[0] <= 'z')
    {
        int k = (int) s[0] - 32;
        s[0] = (char) k;
    }
    for (i = 1; i < n-1; i++) {
        while (s[i] == ' ' && s[i + 1] != ' ')
        {
            if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
            {
                int k = (int) s[i + 1] - 32;
                s[i + 1] = (char) k;
            }
        }
    }
}




int main() {
    char s[100] = {};

    printf("Nhap vao xau s: ");
    gets(s);

    int n = (int) strlen(s);

    /*for (int i = 0; i < n-1; i++)
    {
        if ((s[i]) == ' ' && s[i+1] == ' ')
            chenx(s);
    }*/

    while (s[0] == ' ')
    {
        strcpy(&s[0], &s[1]);
    }

    while (s[n - 1] == ' ')
    {
        s[n-1] = '\0';
    }

    chenX(s); //Truong hop cau a
    daughngang(s);
    nvat(s);

    vietHoa(s);
    printf("Chuan hoa chuoi viet hoa chu cai dau: %s\n", s);

    int d = demsotu(s);

    printf("Xau s co %d tu.", d);

    return 0;
}


/*
#include <stdio.h>

#include <string.h>
int demsotu(char *s);
void main()
{
    char s[90];
    printf("nhap chuoi ");
    gets(s);
    int kq=demsotu(s);
    printf("\nSo tu trong chuoi la: %d",kq);

}

int demsotu(char *s)
{
    int n=strlen(s),i;
    int dem=0;
    if(s[0]!=' ')
        dem=1;
    for( i=0;i<n-1;i++)
    {
        if(s[i]==' ' && s[i+1]!=' ')
            dem++;
    }
    return dem;
}*/