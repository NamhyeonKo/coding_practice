// 1011 : [기초-입출력] 문자 1개 입력받아 그대로 출력하기(설명)
#include <stdio.h>

int main(){
    char x; //문자(character)를 저장할 수 있도록 x 라는 이름의 변수 준비
    scanf("%c", &x); //키보드로 입력되는 값을 문자(character)로 읽어 변수 x에 저장
    printf("%c", x); //변수 x에 저장되어 있는 값을 문자(%c)로 출력
}
