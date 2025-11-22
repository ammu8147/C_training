#include<stdio.h>
void fake_swap (float ca, float cb)
{
    float temp = 0;
    temp = ca;
    ca = cb;
    cb = temp;
    printf("fake swap in function: ca = %f \n", ca,cb);
}
void real_swap(float *pca, float *pcb)
{
    float temp = 0;
    temp = *pca;
    *pca = *pcb;
    *pcb = temp;
    printf("real swap in function: ca = %f cb = %f\n",*pca,*pcb);
} 
void main()
{
    float ca,cb;
    printf("enter the value of ca:");
    scanf("%f",&ca);
    printf("enter the value of cb:");
    scanf("%f",&cb);

    fake_swap(ca,cb);
    printf("fake_swap : ca =%f  cb =%f \n",ca,cb);

    real_swap(&ca,&cb);
    printf("real_swap : cb =%f  cb =%f",ca,cb);
}