#include <stdio.h>
#include "lr.h"
#define A 1000/3600;
#define YES 1
#define NO 0
float babushka(int x){
    int x1=1;
for(int i=x;i>1;i--){
    x1*=i;
}
return x1;
}
float pristroika(int x, int y){
    int x1=x;
if (y==0){
    return 1;
}
for(int i=1;i<y;i++){
    x1*=x;
}
return x1;
}


int lab1() {
float v1, L, t;
    scanf("%f", &v1);
    scanf("%f", &L);
    v1 = v1 * 1000/3600;
    t = L/v1;
    printf("%.3f", t);
    return 0;
}

int lab11(){
float v1, L, t;
    scanf("%f", &v1);
    scanf("%f", &L);
    v1 = v1 * A;
    t = L/v1;
    printf("%.3f", t);
return 0;
}


int lab2() {
float babushka(int x){
    int x1=x;
for(int i=1;i<x;i++){
    x1*=i;
}
return x1;
}
float pristroika(int x, int y){
    int x1=x;
if (y==0){
    return 1;
}
for(int i=1;i<y;i++){
    x1*=x;
}
return x1;
}
float n,i=1,x,s=1,a;
    scanf("%f", &n);
    scanf("%f", &x);
    while (n>0){
    a=pristroika(x,i)/babushka(i);
    s+=a;
    i+=1;
    n-=1;
    }
    printf("%.2f", s);
return 0;
}

int lab22(){
 float n,i,x,s=1,a;
    scanf("%f", &n);
    scanf("%f", &x);
    i=n;
    while (n>0){
    a=pristroika(x,i)/babushka(i);
    s+=a;
    i--;
    n-=1;
    }
    printf("%.2f", s);
return 0;
}


int lab3(){
int c;
int flag;
int cnt;
int found;
cnt = 0;
flag = NO;
found = NO;

while((c = getchar()) !=  EOF)
{
if( c == ' ' || c == '\n' || c == '.' || c == ',' || c == '?' || c == '!')
{

if( flag == YES )
{

if( found == YES )
{

cnt = cnt + 1;
}
}
flag = NO;
}
else
{
if( c == 'y' || c == 'o' || c == 'e' || c == 'a' || c == 'i' || c == 'u' || isdigit( c ) )
found = NO;
else
found = YES;
flag = YES;
}

}
printf("number of words = %d\n", cnt );
return 0;
}


int lab4(){
int i = 0;
 char str[1000];
 char c;
 while((c = getchar()) != EOF)
 {
  str[i] = c;
  i++;
 }
 str[i] = '\0';

 int back_count_space = 0;
 int back_length = 0;

 while(back_count_space < 2 && back_length < i)
 {

  if(str[i - 1 - back_length] == ' ')
  {
   back_count_space++;

  }
  back_length++;

 }

 int flag = 0;
 int x = i + 1 - back_length;
 int y = i + 1 - back_length;
 int z = 0;

 for(; x < i; x++)
 {
  if(str[x] == ' ') flag = 1;
  if(flag)
  {
   str[z+y] = str[x];
   z++;
  }
 }
 str[z+y] = '\0';

 printf("%s\n", str);

 return 0;
}

int lab44() {
    char str[100];
    int i, j;
    fgets(str, sizeof(str), stdin);
    i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            j = i + 1;
            while (str[j] != ' ' && str[j] != '\0') {
                j++;
            }
            if (str[j] == '\0') {
                str[i] = '\0';
                break;
            }
        }
        i++;
    }
    i = 0;
    while (str[i] != EOF) {
        if (str[i] == ' ') {
            j = i + 1;
            while (str[j] != ' ' && str[j] != '\0') {
                j++;
            }
            if (str[j] == ' ') {
                i = j + 1;
                break;
            }
        }
        i++;
    }
    j = i;
    while (str[j] != '\0') {
        str[j] = str[j + 1];
        j++;
    }
    printf("%s\n", str);
    return 0;
}


struct s{
int i;
double max;
};
int lab5(){
    int arr[10],i=0,index,max=0;
    for (i=0;i<10;i++){
        scanf("%d", &arr[i]);
        if (arr[i]>max){
            max=arr[i];
            index=i;
        }
    }
    for(i=0;i<10;i++){
        if(i<index){
                arr[i]=0;
        }
        else{
            arr[i]=max;
        }
        printf("%d ", arr[i]);
    }
    return 0;
}

int lab55() {
    struct s x;
    int arr[10],index;
    x.i=0;
    x.max=0;
    for (x.i=0;x.i<10;x.i++){
        scanf("%d", &arr[x.i]);
        if (arr[x.i]>x.max){
        x.max=arr[x.i];
        index=x.i;
        }
    }
    for(x.i=0;x.i<10;x.i++){
    if(x.i<index){
        arr[x.i]=0;
    }
    else{
        arr[x.i]=x.max;
    }
    printf("%d ", arr[x.i]);
    }
 return 0;
}


int lab6() {
    int N=3, sumV = 0, sumN = 0;
    int arr[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i < j) {
                sumV += arr[i][j];
            }
            if (i > j) {
                sumN += arr[i][j];
            }
        }
    }
    if (sumV < sumN) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i < j) {
                    arr[i][j] = 0;
                }
            }
        }
    } else { if(sumN < sumV){
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i > j) {
                    arr[i][j] = 0;
                }
            }
        }
    }
}
printf("\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int lab66() {
int n=3,k=3,b,key,c = 0;
    int arr[n][k],array[n*k];
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            scanf("%d", &arr[i][j]);
        }
    }printf("\n");
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            array[c++] = arr[i][j];
        }
    }
    for (int i = 1; i < n*k; i++) {
        key = array[i];
        b = i - 1;
        while (b >= 0 && array[b] > key) {
            array[b + 1] = array[b];
            b = b - 1;
        }
        array[b + 1] = key;
    }
    c=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            arr[i][j] = array[c++];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
return 0;
}


int lab7 () {
    long long int n =123456789012345;
    unsigned char *b = &n;
    int k = b[1] - b[0];
    for (int i = 1; i < sizeof(n); i++) {
        if (b[i] - b[i-1] != k) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
