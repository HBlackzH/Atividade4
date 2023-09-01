#include<stdio.h>
#include<math.h>

int main(){

int a = 15, b = 10, c= 8, d = 6, maior, menor;

if(a > b && a > c && a > d){
    maior = a;
}else if(b > a && b > c && b > d){
    maior = b;
}else if(c > a && c > b && c > d){
    maior = c;
}else{
    maior = d;
}

if(a < b && a < c && a < d){
    menor = a;
}else if(b < a && b < c && b < d){
    menor = b;
}else if(c < a && c < b && c < d){
    menor = c;
}else{
    menor = d;
}

printf("Maior; %d,. Menor: %d", maior, menor);

}