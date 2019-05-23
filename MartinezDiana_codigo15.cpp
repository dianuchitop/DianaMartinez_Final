#include<bits/stdc++.h>

using namespace std;
double m=7294.29,q=2.0;
double F(double dt, int iteraciones,bool x){
    if(iteraciones*dt<3 || iteraciones*dt> 7 || x)
        return 0;
    return q*3;
}
double aceleracion(double dt, int iteraciones,bool x){
    double a=F(dt,iteraciones,x)/m;
}
int main(){
    freopen("datos.dat","w",stdout);
    bool dt=0.1;
    bool t=0.0;
    int iteraciones=100;
    double x[iteraciones+1][2];
    double v[iteraciones+1][2];
    x[0][0]=1.0;
    x[0][1]=0.0;
    v[0][0]=0.0;
    v[0][1]=1.0;
    for(int i=1;i<iteraciones;i++){

        x[i][0]=x[i-1][0]+v[i-1][0]*dt+(0.5*aceleracion(dt,i-1,true)*dt*dt);
        x[i][1]=x[i-1][1]+v[i-1][1]*dt+(0.5*aceleracion(dt,i-1,false)*dt*dt);
        v[i][0]=v[i-1][0]+dt*0.5*(aceleracion(dt,i-1,true)+aceleracion(dt,i,true));
        v[i][1]=v[i-1][1]+dt*0.5*(aceleracion(dt,i-1,false)+aceleracion(dt,i,false));
        cout<<t<<" "<<x[i][0]<<" "<<x[i][1]<<endl;
    }
	return 0;

}

