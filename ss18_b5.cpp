#include <stdio.h>
#include <string.h>
struct sinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    struct sinhVien sv[50] = {
        {1, "Dinh Quang Huy", 18, "0325321298"},
        {2, "Huy Dinh Ne", 17, "0123456789"},
        {3, "Ne Huy Dinh", 16, "0987654321"},
        {4, "Banh Mi Thit", 15, "066771508"},
        {5, "Hoang Van E", 14, "077668805"}
    };
    int n = 5;
    int searchId, found = -1;
    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &searchId);
    for (int i = 0; i < n; i++) {
        if (sv[i].id == searchId) {
            found = 1;
            printf("Nhap ten moi: ");
            fflush(stdin);
            fgets(sv[i].name, sizeof(sv[i].name), stdin);
            printf("Nhap tuoi moi: ");
            scanf("%d", &sv[i].age);
            break;
        }
    }
    if (found==-1) {
        printf("Khong tim thay sinh vien voi ID %d.\n", searchId);
    }
    printf("\nThong tin tat ca sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n\n", sv[i].phoneNumber);
    }
    return 0;
}

