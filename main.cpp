#include "stdio.h"


#include "Test.h"
#include "Tool.h"

int main(){
    Test t;
    if(Tool::expect_content(t)){
        printf("ok!  \n");
    }
    return 0;
}

