//구조체를 인자로 전달받기
#include <stdio.h>

struct TEST {
    int age;
    int gender;
    char name[20];
};
char copy_str(char *dest, const char *src);
int set_human(struct TEST *a, int age, int gender, char* name);
int main(){
    struct TEST human;
    set_human(&human,10,1, "Dylan");
    printf("AGE : %d // Gender : %d  // name : %s\n",human.age, human.gender,human.name);
    return 0;
}

int set_human(struct TEST *a, int age, int gender, char* name)
{
    a->age = age;
    a->gender = gender;
    copy_str(a->name, name);
    return 0;
}
char copy_str(char *dest, const char *src){
    while (*src){
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    return 1;

}


