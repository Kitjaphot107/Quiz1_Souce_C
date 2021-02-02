//ดัชนีมวลกาย//
#include<stdio.h>
int main(){
        float weight,height,calbmi;
        printf("You weight (kg):");
        scanf("%f",&weight);	// รับค่าน้ำหนัก
        printf("You height (cm):");
        scanf("%f",&height);	// รับค่าส่วนสูง เมตร
        height = height/100; 
        calbmi = weight/(height*height);	// คำควณ ค่า BMI
        printf("You BMI :%f\n",calbmi);
        if(calbmi >= 30){	// อ้วน
                printf("Fat\n");
        }else if(calbmi >= 25){	// เกินพิกัด
                printf("Over weight\n");
        }else if(calbmi >= 20){ // น้ำหนักเกิน
                printf("Good health\n");
        }else{	// ต่ำกว่าพิกัด
                printf("Below exactly\n");
        }
}