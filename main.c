#include <stdio.h>
#include <math.h>


void task0(){
    int i;
    scanf("%i",&i);
    printf("+!");
    for (int start=1; start<=i/2; start++) {
        printf("*!");
    }
    for (int start=i/2; start<=i-1; start++){
        printf("-!");
    }
}

void task1(){
    int n,m;
    int s = 0;
    printf("Введите n\n");
    scanf("%d", &n);
    printf("Введите m\n");
    scanf("%d", &m);
    for (int i=m; i>=n ; i++){
        s+=i;
        printf("Выполнено %d раз\n", i+1-m);
    }
    printf("Результат %d\n", s);
}

void task2(){
    float n;
    float x;
    printf("y=|lg x|-(x-2)**2\n");
    scanf("%f",&x);
    printf("Введите шаг табуляции\n");
    scanf("%f",&n);
    int cn = 0;
    
    for (float i = x; i<=4.1;i+=n){
        cn+=1;
    }
    float x1=x+(n*cn/2);
    printf("_______________________ _______________________\n");
    printf("|     X    |    F(x)  | |    X1    |    F(x)  |\n");
    for (float i = x; i<=cn/2 && x1<=4.1;i+=n){
        float y = fabs(log10(x))-(x-2)*(x-2);
        float y1 = fabs(log10(x1))-(x1-2)*(x1-2);
        printf("|%7.2f   |%7.2f   | |%7.2f   |%7.2f   |\n",x,y,x1,y1);
        x+=n;
        x1+=n;
        
    }
    printf("----------------------- -----------------------\n");
    printf("\n");
    printf("|");
    
}

void hw(){
    int n;
    double s;
    s=1;
    printf("Введите факториал\n");
    scanf("%i",&n);
    for (int i=1; i<=n;i++){
        s*=i;
    }
    printf("Факториал %i = %.0f\n",n,s);
}

int main(int argc, const char * argv[]) {
    hw();
}
