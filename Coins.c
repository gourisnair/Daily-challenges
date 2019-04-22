#include<stdio.h>
#define size 10
#define max 20
int a[size] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};

int coinExchange(int amt) {
  int list[max], j = 0;
  for(int i = size-1; i >= 0; i--) {
    while(amt >= a[i]) {
      amt = amt - a[i];
      list[j++] = a[i];
    }
  }

  printf("Number of coins needed = %d\n", j);
  for(int i = 0; i < j; i++) {
    printf("%d\t", list[i]);
  }
}

int main()
{
  int amt;
  printf("Enter the amount for change: ");
  scanf("%d", &amt);
  coinExchange(amt);
}
