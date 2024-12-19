#include <stdio.h>
struct sinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    struct sinhVien sv1;
    printf("Nhap ten sinh vien: ");
    fgets(sv1.name, sizeof(sv1.name), stdin);
    printf("Nhap tuoi: ");
    scanf("%d", &sv1.age);
    printf("Nhap so dien thoai: ");
    scanf("%s", sv1.phoneNumber);
    printf("Ten: %s", sv1.name);
    printf("Tuoi: %d\n", sv1.age);
    printf("So dien thoai: %s\n", sv1.phoneNumber);

    return 0;
}

