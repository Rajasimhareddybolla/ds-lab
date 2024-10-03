#include <stdio.h>
#define SIZE 2
int array[SIZE];
int k = -1;
void push(int val){
    if(k < SIZE){
        array[++k] = val;
    }
    else{
        printf("stack is full -- stack overflow  %d \n" , val);
    }
}
int pop(){
    if (k>=0){
        return array[k--];
    }
    else{
        printf("stack is empty -- stack ");
        return -1;
    }
}
void display(){
    printf("display :: \n");
    for(int i =0 ; i <=k ; i++){
        printf("%i \n",array[i]);
    }
}
int main(){
    int no ;
    int input;
    do {
        printf("  1 for push \n 2 for pop \n 3 for display array \n 4 for exit \n");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            printf("push -- ");
            scanf("%d",&no);
            push(no);
            printf("k = %d \n",k);
            break;
        case 2:
            printf("%d \n", pop());
                        printf("k = %d \n",k);

            break;
        case 3:
            display();
                        printf("k = %d \n",k);

            break;
        case 4:
            break;
        default:
            printf("invalid input exit .. ");
            input =4;
        }
    }while (input != 4);
    


}