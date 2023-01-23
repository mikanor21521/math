#include <stdio.h>
#include <math.h>
#include <complex.h>

int main(void) {
    float a, b, c;
    float discriminant;
    float ans1, ans2, ans3, ans4;
    int i, j;

    printf("実行回数を指定してください:");
    scanf("%d", &i);
    for (j = 1; j <= i; j++){
        printf("定数を入力してください:\n");
        printf("a = ");
        scanf("%f", &a);
        printf("b = ");
        scanf("%f", &b);
        printf("c = ");
        scanf("%f", &c);

        discriminant = b * b - 4 * a * c;
        if (discriminant > 0){
            ans1 = ( -b + sqrt(discriminant)) / (2*a);
            ans2 = ( -b - sqrt(discriminant)) / (2*a);
            printf("2次方程式の解は x = %.2f, %.2f\n", ans1, ans2);
        }else if (discriminant == 0){
            ans1 = ans2 = -b / (2 * a);
            printf("2次方程式の解は　x = %.2f (重解)\n", ans1);
        }else{
            ans3 = -b / (2 * a);
            ans4 = sqrt(-discriminant) / 2 * a;
            printf("2次方程式の解は x = %.2f ± %.2f i\n", ans3, ans4); 
        }
    }
    return 0;
}