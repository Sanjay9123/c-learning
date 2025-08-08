#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int r1,r2,c1,c2,sum=0;
    printf("enter the row and col for matric A : ");
    scanf("%d%d",&r1,&c1);
    printf("enter the row and col for matric b : ");
    scanf("%d%d",&r2,&c2);
    
    if(c1!=r2){
    printf("matrix multiplication not possible ");
    return 0;
        
    }
     int i,j,k;
    //alocare memory for matrix
    int **m1=(int **)malloc(r1*sizeof(int*));
    for(i=0;i<r1;i++)
    m1[i]=(int*)malloc(sizeof(int)*c1);
    
    int **m2=(int **)malloc(r2*sizeof(int*));
     for(i=0;i<r2;i++)
    m2[i]=(int*)malloc(sizeof(int)*c2);
    
    int **m3=(int **)malloc(r1*sizeof(int*));
    for(i=0;i<r1;i++)
    m3[i]=(int*)malloc(sizeof(int)*c2);
    
   
    
    printf("enter the element for matrix A  :");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    
    printf("enter the element for matrix b :");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    //multiplication
    
    for(i=0;i<r1;i++)
    {  
        for(j=0;j<c2;j++)
        {m3[i][j]=0;
            for(k=0;k<r2;k++)
            {
            m3[i][j]+=m1[i][k]*m2[k][j];
            }
        }
        
    }
    //display the matrix
    printf("matrix A :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",m1[i][j]);
        }printf("\n");
    }
    //display the matrix
    printf("matrix B :\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",m2[i][j]);
        }printf("\n");
    }

printf("matrix c :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",m3[i][j]);
        }printf("\n");
    }
    
    for(i=0;i<r1;i++){
        free(m1[i]);
        free(m3[i]);
    }
     
    for(i=0;i<r2;i++){
        free(m2[i]);
    }
    free(m1);
    free(m2);
    free(m3);
}
