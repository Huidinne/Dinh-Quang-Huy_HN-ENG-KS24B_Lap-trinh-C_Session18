#include <stdio.h>
struct sinhVien {
    char name[50];
    int age;
    char phoneNumber[20];
};
int main() {
    struct sinhVien sv1={"Dinh Quang Huy",18,"0325321298"};
    printf("\nThong tin sinh vien:\n");
    printf("Ten: %s\n", sv1.name);
    printf("Tuoi: %d\n", sv1.age);
    printf("So dien thoai: %s", sv1.phoneNumber);
    return 0;
}

