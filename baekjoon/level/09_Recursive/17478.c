// ����Լ��� ������?
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sayProfessor(int cnt, int n){
    if(cnt==0)printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
    sayAnswer1(cnt, n);
    if(cnt!=n)sayProfessor(cnt+1,n);
    sayAnswer2(cnt);
}

void sayAnswer1(int cnt, int n){
    int i;
    for(i=0;i<cnt*4;i++)printf("_");    
    printf("\"����Լ��� ������?\"\n");
    for(i=0;i<cnt*4;i++)printf("_");
    if(cnt==n){

        printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
    }
    else {
        printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
        for(i=0;i<cnt*4;i++)printf("_");
        printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
        for(i=0;i<cnt*4;i++)printf("_");
        printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
    }
    
}

void sayAnswer2(int n){
    int i;
    for(i=0;i<n*4;i++)printf("_");
    printf("��� �亯�Ͽ���.\n");
}

int main(){
    int n;

    scanf("%d",&n);

    sayProfessor(0,n);

    return 0;
}