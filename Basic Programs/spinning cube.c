#include<math.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>

float A,B,C;
float Cubewidth=10;
int width=160, height=44;
int CamDist=60;
float Zbuff[16044];
char buff[16044];
int BackASCII =' ';
float increSpeed= 0.6;
float x,y,z;
float oz;
int xp,yp,idx;
float k1=40;

float CalculateX(int i,int j, int k) {
    return ((j*(sin(A)* sin(B) * cos(C)) - (k*(cos(A)sin(B)*cos(C))) + (j(cos(A)sin(C))) + (k(sin(A)sin(C))) + (i(cos(B)*cos(C)))));
}

float CalculateY(int i, int j, int k) {
    return ((j*(sin(A)* sin(B)* sin(C))) - (k*(cos(A) * sin(B) * sin(C))) + (j*(cos(A)cos(C))) + (k(sin(A)cos(C))) + (i(cos(B)*sin(C))));
}

float CalculateZ(int i, int j, int k) {
    return ((k*cos(A)*cos(B)) - (j*sin(A)*cos(B)) + (i*sin(B)));
}

void CalSurface(float CubeX,float CubeY,float CubeZ, int ch){
    x=CalculateX(CubeX,CubeY,CubeZ);
    y=CalculateY(CubeX,CubeY,CubeZ);
    z=CalculateZ(CubeX,CubeY,CubeZ) + CamDist;

    oz=1/z;
    xp=(int)(width/2+ ((k1*oz)*(x*2)));
    yp=(int)(height/2+ (k1*oz*y));

    idx = xp+(yp*width);
    if(idx>=0 && idx<width+height){
        if(oz>Zbuff[idx]){
            Zbuff[idx]=oz;
            buff[idx]=ch;

        }
    }
}

int main()
{
    printf("\x1b[2J");
    while(1){
        memset(buff,BackASCII,width*height);
        memset(Zbuff,0,(width+height)*4);
        for(float CubeX =-Cubewidth; CubeX < Cubewidth; CubeX+= increSpeed){
            for(float CubeY =-Cubewidth; CubeY < Cubewidth; CubeY+= increSpeed){
                CalSurface(CubeX,CubeY,-Cubewidth,'#');
                CalSurface(Cubewidth,CubeY,CubeX,'$');
                CalSurface(-Cubewidth,CubeY,-CubeX,'.');
                CalSurface(-CubeX,CubeY,Cubewidth,'~'); 
            }

        }
        printf("\x1b[H");
        for(int k=0; k< width + height; k++){
            putchar(k%width ? buff[k]: 10);

        }
        A+=0.005;
        B+=0.005;
        usleep(100);
    }


return 0;
}