 #include<stdio.h>
 int main()
 {
     int purchases,sales;
     float purchasesprice,sales_price;
     
     float turnover;
     scanf("%d%d",&purchases, &sales);
     scanf("%f%f",&purchasesprice,&sales_price);
     turnover=(purchases*purchasesprice)+(sales*sales_price);
     printf("Daily Turnover:Rs %.2f",turnover);
     return 0;
 }