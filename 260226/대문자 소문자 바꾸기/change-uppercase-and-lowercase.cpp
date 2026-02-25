#include <iostream>
#include <cmath>

using namespace std;

//큐브 정보
char cube0[3][3]={{'w','w','w'}, {'w','w','w'}, {'w','w','w'}};
char cube1[3][3]={{'o','o','o'}, {'o','o','o'}, {'o','o','o'}};
char cube2[3][3]={{'y','y','y'}, {'y','y','y'}, {'y','y','y'}};
char cube3[3][3]={{'r','r','r'}, {'r','r','r'}, {'r','r','r'}};
char cube4[3][3]={{'g','g','g'}, {'g','g','g'}, {'g','g','g'}};
char cube5[3][3]={{'b','b','b'}, {'b','b','b'}, {'b','b','b'}};

void rotateOneside(int n){
    char tempcube[3][3]={};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(n==0) tempcube[y][abs(2-i)]=cube0[i][j];
            if(n==0) tempcube[y][abs(2-i)]=cube0[i][j];
            if(n==0) tempcube[y][abs(2-i)]=cube0[i][j];            
        }
    }
}

void rotate(char side, char dir){
    //왼쪽면
    if(side=='L'&&side=='R'){
        if(side=='L'){
            if(dir=='+'){
                char temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9;
                temp1=cube0[0][0];
                temp2=cube0[1][0];
                temp3=cube0[2][0];
                temp4=cube3[0][0];
                temp5=cube3[1][0];
                temp6=cube3[2][0];
                temp7=cube2[0][0];
                temp8=cube2[1][0];
                temp9=cube2[2][0];
                cube0[0][0]=cube1[2][0];
                cube0[1][0]=cube1[1][0];
                cube0[2][0]=cube1[0][0];
                cube1[0][0]=temp7;
                cube1[1][0]=temp8;
                cube1[2][0]=temp9;
                cube2[0][0]=temp6;
                cube2[1][0]=temp5;
                cube2[2][0]=temp4;
                cube3[0][0]=temp1;
                cube3[1][0]=temp2;
                cube3[2][0]=temp3;
            }
            else if(dir=='-'){
                char temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9;
                temp1=cube0[0][0];
                temp2=cube0[1][0];
                temp3=cube0[2][0];
                temp4=cube1[0][0];
                temp5=cube1[1][0];
                temp6=cube1[2][0];
                temp7=cube2[0][0];
                temp8=cube2[1][0];
                temp9=cube2[2][0];
                cube0[0][0]=cube3[0][0];
                cube0[1][0]=cube3[1][0];
                cube0[2][0]=cube3[2][0];
                cube1[0][0]=temp3;
                cube1[1][0]=temp2;
                cube1[2][0]=temp1;
                cube2[0][0]=temp4;
                cube2[1][0]=temp5;
                cube2[2][0]=temp6;
                cube3[0][0]=temp9;
                cube3[1][0]=temp8;
                cube3[2][0]=temp7;            
            }
        }
        else if(side=='R'){
            if(dir=='+'){
                char temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9;
                temp1=cube0[0][2];
                temp2=cube0[1][2];
                temp3=cube0[2][2];
                temp4=cube3[0][2];
                temp5=cube3[1][2];
                temp6=cube3[2][2];
                temp7=cube2[0][2];
                temp8=cube2[1][2];
                temp9=cube2[2][2];
                cube0[0][2]=cube1[2][2];
                cube0[1][2]=cube1[1][2];
                cube0[2][2]=cube1[0][2];
                cube1[0][2]=temp7;
                cube1[1][2]=temp8;
                cube1[2][2]=temp9;
                cube2[0][2]=temp6;
                cube2[1][2]=temp5;
                cube2[2][2]=temp4;
                cube3[0][2]=temp1;
                cube3[1][2]=temp2;
                cube3[2][2]=temp3;
            }
            else if(dir=='-'){
                char temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9;
                temp1=cube0[0][2];
                temp2=cube0[1][2];
                temp3=cube0[2][2];
                temp4=cube1[0][2];
                temp5=cube1[1][2];
                temp6=cube1[2][2];
                temp7=cube2[0][2];
                temp8=cube2[1][2];
                temp9=cube2[2][2];
                cube0[0][2]=cube3[0][2];
                cube0[1][2]=cube3[1][2];
                cube0[2][2]=cube3[2][2];
                cube1[0][2]=temp3;
                cube1[1][2]=temp2;
                cube1[2][2]=temp1;
                cube2[0][2]=temp4;
                cube2[1][2]=temp5;
                cube2[2][2]=temp6;
                cube3[0][2]=temp9;
                cube3[1][2]=temp8;
                cube3[2][2]=temp7;            
            }           
        }
    }
    //윗면 또는 아랫면
    else if(side=='U'&&side=='D'){
        if(side=='U'){
            if(dir=='+'){
                char temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9;
                temp1=cube1[0][0];
                temp2=cube1[0][1];
                temp3=cube1[0][2];
                temp4=cube5[0][0];
                temp5=cube5[0][1];
                temp6=cube5[0][2];
                temp7=cube3[0][0];
                temp8=cube3[0][1];
                temp9=cube3[0][2];
                cube1[0][0]=cube4[0][0];
                cube1[0][1]=cube4[0][1];
                cube1[0][2]=cube4[0][2];
                cube4[0][0]=temp9;
                cube4[0][1]=temp8;
                cube4[0][2]=temp7;
                cube3[0][0]=temp4;
                cube3[0][1]=temp5;
                cube3[0][2]=temp6;
                cube5[0][0]=temp3;
                cube5[0][1]=temp2;
                cube5[0][2]=temp1;
            }
            else if(dir=='-'){
                char temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9;
                temp1=cube1[0][0];
                temp2=cube1[0][1];
                temp3=cube1[0][2];
                temp4=cube4[0][0];
                temp5=cube4[0][1];
                temp6=cube4[0][2];
                temp7=cube3[0][0];
                temp8=cube3[0][1];
                temp9=cube3[0][2];
                cube1[0][0]=cube5[0][2];
                cube1[0][1]=cube5[0][1];
                cube1[0][2]=cube5[0][0];
                cube4[0][0]=temp1;
                cube4[0][1]=temp2;
                cube4[0][2]=temp3;
                cube3[0][0]=temp6;
                cube3[0][1]=temp5;
                cube3[0][2]=temp4;
                cube5[0][0]=temp7;
                cube5[0][1]=temp8;
                cube5[0][2]=temp9;          
            }
        }
        else if(side=='D'){
            if(dir=='+'){
                char temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9;
                temp1=cube1[2][0];
                temp2=cube1[2][1];
                temp3=cube1[2][2];
                temp4=cube5[2][0];
                temp5=cube5[2][1];
                temp6=cube5[2][2];
                temp7=cube3[2][0];
                temp8=cube3[2][1];
                temp9=cube3[2][2];
                cube1[2][0]=cube4[2][0];
                cube1[2][1]=cube4[2][1];
                cube1[2][2]=cube4[2][2];
                cube4[2][0]=temp9;
                cube4[2][1]=temp8;
                cube4[2][2]=temp7;
                cube3[2][0]=temp4;
                cube3[2][1]=temp5;
                cube3[2][2]=temp6;
                cube5[2][0]=temp3;
                cube5[2][1]=temp2;
                cube5[2][2]=temp1;
            }
            else if(dir=='-'){
                char temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9;
                temp1=cube1[2][0];
                temp2=cube1[2][1];
                temp3=cube1[2][2];
                temp4=cube4[2][0];
                temp5=cube4[2][1];
                temp6=cube4[2][2];
                temp7=cube3[2][0];
                temp8=cube3[2][1];
                temp9=cube3[2][2];
                cube1[2][0]=cube5[2][2];
                cube1[2][1]=cube5[2][1];
                cube1[2][2]=cube5[2][0];
                cube4[2][0]=temp1;
                cube4[2][1]=temp2;
                cube4[2][2]=temp3;
                cube3[2][0]=temp6;
                cube3[2][1]=temp5;
                cube3[2][2]=temp4;
                cube5[2][0]=temp7;
                cube5[2][1]=temp8;
                cube5[2][2]=temp9;          
            }        
        }      
    }
    //앞면 또는 뒷면
    else if(side=='F'&&side=='B'){
        if(side=='F'){
            if(dir=='+'){
                char temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9;
                temp1=cube0[2][0];
                temp2=cube0[2][1];
                temp3=cube0[2][2];
                temp4=cube5[0][0];
                temp5=cube5[1][0];
                temp6=cube5[2][0];
                temp7=cube2[2][0];
                temp8=cube2[2][1];
                temp9=cube2[2][2];
                cube0[2][0]=cube4[2][0];
                cube0[2][1]=cube4[1][0];
                cube0[2][2]=cube4[0][0];
                cube4[0][0]=temp7;
                cube4[1][0]=temp8;
                cube4[2][0]=temp9;
                cube2[2][0]=temp6;
                cube2[2][1]=temp5;
                cube2[2][2]=temp4;
                cube5[0][0]=temp1;
                cube5[1][0]=temp2;
                cube5[2][0]=temp3;
            }
            else if(dir=='-'){
                char temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9;
                temp1=cube0[2][0];
                temp2=cube0[2][1];
                temp3=cube0[2][2];
                temp4=cube4[0][0];
                temp5=cube4[1][0];
                temp6=cube4[2][0];
                temp7=cube2[2][0];
                temp8=cube2[2][1];
                temp9=cube2[2][2];
                cube0[2][0]=cube5[0][0];
                cube0[2][1]=cube5[1][0];
                cube0[2][2]=cube5[2][0];
                cube4[0][0]=temp3;
                cube4[1][0]=temp2;
                cube4[2][0]=temp1;
                cube2[2][0]=temp4;
                cube2[2][1]=temp5;
                cube2[2][2]=temp6;
                cube5[0][0]=temp9;
                cube5[1][0]=temp8;
                cube5[2][0]=temp7;         
            }
        }
        else if(side=='B'){
            if(dir=='+'){
                char temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9;
                temp1=cube0[0][0];
                temp2=cube0[0][1];
                temp3=cube0[0][2];
                temp4=cube5[0][2];
                temp5=cube5[1][2];
                temp6=cube5[2][2];
                temp7=cube2[0][0];
                temp8=cube2[0][1];
                temp9=cube2[0][2];
                cube0[0][0]=cube4[2][2];
                cube0[0][1]=cube4[1][2];
                cube0[0][2]=cube4[0][2];
                cube4[0][2]=temp7;
                cube4[1][2]=temp8;
                cube4[2][2]=temp9;
                cube2[0][0]=temp6;
                cube2[0][1]=temp5;
                cube2[0][2]=temp4;
                cube5[0][2]=temp1;
                cube5[1][2]=temp2;
                cube5[2][2]=temp3;
            }
            else if(dir=='-'){
                char temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9;
                temp1=cube0[0][0];
                temp2=cube0[0][1];
                temp3=cube0[0][2];
                temp4=cube4[0][2];
                temp5=cube4[1][2];
                temp6=cube4[2][2];
                temp7=cube2[0][0];
                temp8=cube2[0][1];
                temp9=cube2[0][2];
                cube0[0][0]=cube5[0][2];
                cube0[0][1]=cube5[1][2];
                cube0[0][2]=cube5[2][2];
                cube4[0][2]=temp3;
                cube4[1][2]=temp2;
                cube4[2][2]=temp1;
                cube2[0][0]=temp4;
                cube2[0][1]=temp5;
                cube2[0][2]=temp6;
                cube5[0][2]=temp9;
                cube5[1][2]=temp8;
                cube5[2][2]=temp7;         
            }       
        }       
    }
}

int main() {
    int T;
    cin >> T;
    for(int i=0; i<T; i++){
        int N;
        cin >> N;
        for(int j=0; j<N; j++){
            string str;
            cin >> str;
            rotate(str[0], str[1])
        }
    }
    return 0;
}