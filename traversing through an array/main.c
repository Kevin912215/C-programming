#include <stdio.h>
#include <stdlib.h>
int main() {
   double array[10]; // 数组大小应该是10
   int i;
   int n = 0; // 用于统计比平均值小的数的个数
   double sum = 0.0; // 注意：sun 应该是 sum
   double mean;
   printf("Please input ten double:\n");
   for (i = 0; i < 10; i++) {
       scanf("%lf", &array[i]); // 修正了scanf格式和数组输入
   }
   for (i = 0; i < 10; i++) {
       sum = sum + array[i]; // 修正sum的计算
   }
   printf("The sum of your doubles is: %lf\n", sum);
   mean = sum / 10.0; // 确保是浮点除法
   printf("This is the average of your sum: %lf\n", mean);
   for (i = 0; i < 10; i++) { // 遍历数组找到小于平均值的元素
       if (array[i] < mean) {
           n++; // 正确地递增n
       }
   }
   printf("There are %d numbers smaller than mean.\n", n);
   return 0;
}


