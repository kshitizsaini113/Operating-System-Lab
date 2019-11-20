#include<stdio.h>
#include<stdlib.h>
int buffer,empty,full=0,mutex=1,op,x=0;

int wait(int s){
    while(s<=0);
    return --s;
}
int signal(int s){
    return ++s;
}
void produce(){
    if(mutex==1 && empty!=0){
        mutex=wait(mutex);
        full=signal(full);

        empty=wait(empty);
        mutex=signal(mutex);
        ++x;
        printf("\n Producer produces an item %d \n\n",x);
    }else
        printf("\n Buffer is Full , cannot produce\n");

}

void consume(){
    if(mutex==1 && full!=0){
        mutex=wait(mutex);

        full=wait(full);
        empty=signal(empty);

        mutex=signal(mutex);

        printf("\n Consumer consumed an item %d \n\n",x);
        --x;
    }else
        printf("\n Buffer is Empty , cannot consume\n");

}


void main(){

    printf("Enter the buffer size ");
    scanf("%d",&buffer);
    empty=buffer;

    while(1){
        printf("\n \t choose the operation : ");
        printf("\n1.produce\n2.consume\n3.exit\t>>>:");
        scanf("%d",&op);
        switch(op){
        case 1: produce();
                break;
        case 2: consume();
                break;
        case 3: exit(0);
        }
    }
}
