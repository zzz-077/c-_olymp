#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string.h>
using namespace std;
#include <algorithm>
#include <string>
#include <conio.h>
#include <stdio.h>

int main(){
 				//week 1 	
/*
 //number 1          +

int N;
cin>>N;
cout<<N/10+N%10;
*/
/*
int N,res;
cin>>N;
res=N/100+(N%100)/10+N%10;
cout<<res;
*/


 //number 2          +
 /*
float A,B;
cin>>A>>B;
cout<<(A+B)/2;
*/

//number 3           +
/*
float N, A,B; // A--futi; B--diumi
cin>>A;
cin>>B;
A=A*30.48;
B=B*2.54;
cout<<A+B;
  */
  //number 4         +
/*
int N,a, b,c;
cin>>N;
a=N%10;
b=(N%100)/10;
c=N/100 ;
N=a*100+b*10+c;
cout<<N;
*/


//number 5           +
/*
int N;
cin>>N;
cout<<N/3600<<":"<<(N%3600)/60<<":"<<N%60;
 */



				//week 2

//number 6           +
/*
int a1,b1,c1,a2,b2,c2,x,y;
cin>>a1>>b1>>c1;
cin>>a2>>b2>>c2;
x=a1*3600+b1*60+c1;
y=a2*3600+b2*60+c2;
cout<<y-x;
*/
//number 7           +
/*
int m,n;

cout<<"enter numbers:";
cin>>m>>n;
cout<<"Answer:"<<(m*n)/2;
*/
//number 8           + 
/*
int n,m, a;
cout<<"Enter numbers:";
cin>>n>>m>>a;
cout<<"Answer:"<<((m+a-1)/a+(n+a-1)/a );
*/
//number 9          +
/*
int m,n;
cout<<"Enter numbers";
cin>>n>>m;
cout<<"Answer:"<<n*m/1.5 ;
*/


//number 10         + ver mivxvdi kargad ints ratom aklebs !
/*
int A,B;
double x;
cout<<"Enter numbers:";
cin>>A>>B; 
x=(double)A/B-(int) A/B;
cout<<fixed<<setprecision(3)<<"Answer:"<<x;
*/

						//week 4 

//number 17  
 /*
double A, B;
int N,a,b,c,d,s;
cout<<"sheiyvane ricxvi";
cin>>A>>B;
A=A-B;
N=A*100;
a=N/100;
b=(N%100)/20;
c=(N%20)/5;
d=N%5;
s=a+b+c+d;
cout<<s;
 
*/

//number 18      
/*
int a,i;
cout<<"Enter numbers:";
cin>>a>>i; 
   cout<<a*1-(a+1);
*/
   
   
//number 19     +
/*
int  N,A,B;
cout<<"Enter numbers:";
cin>>N>>A>>B; 
N=(N/(A-B))-1;
cout<<N;
*/

//number 20     +
/*
int a,b,c,s;
cout<<"Enter numbers:";
cin>>a>>b>>c;
s=(b+c-1)*(a-1)+b*c;
cout<<"answer:"<<s;
*/
					//week 5
// number 21   +
/*
int S,V,N;
cout<<"enter numbers:";
cin>>V>>N;
S=V/N;
if (S<3){
	cout<<"Yes"<<" "<<S-1;
}
else
cout<<"No";
*/
//number 22   +
/*
int s, n,m,k;
cout<<"Enter Numbers:";
cin>>n>>m>>k;
s=(n*60+m)*16;
k*=1024;
if (s>k){
	cout<<"No\n"<<"You need even "<<s-k<<" "<<"kilobite";
}
else
cout<<"Yes";
*/
//number 23  +
/*
int s,k, num;
cout<<"enter number:";
cin>>num;
s=(num/10)*(num%10);
k=(num%100)*(num/100);
if(s>k){
cout<<"Answer:"<<s;	
}
else
cout<<"Answer:"<<k;
*/
//number 24   +
/*
int w;
cout<<"Enter number:";
cin>>w;
if(w%2==0){
	cout<<"Yes";
}
else
cout<<"No";
*/

//number 25   +
/*
int a,b,c;
cout<<"Enter numbers:";
cin>>a>>b>>c;
if(a+b>c && a+c>b && b+c>a){
	cout<<"Yes";		
}
 else
cout<<"No";
*/
				//week 6
//number 26   +
/*
int n,a,b;
cout<<"Enter numbers:";
cin>>n>>a>>b;
cout<<"answer:"<<n-a;
*/
//number 27   +
/*
int x,y,x1,y1;
cout<<"Enter I Number:";
cin>>x>>y;
cout<<"Enter II Number:";
cin>>x1>>y1;
if(x<x1&&y>=y1|| x>x1&&y<=y1 ){
cout<<"Yes";	
}
else
cout<<"No";
*/
//number 28 +
/*
int x1,x2,x3,y1,y1,y3;
cin>>x1>>y1;
cin>>x2>>y2;
cin>>x3>>y3;
if(x1==x2)cout<<x3;
if(x1==x3)cout<<x2;
if(x2==x3)cout<<x1;
if(y1==y2)cout<<y3;
if(y1==y3)cout<<y2;
if(y2==y3)cout<<y1;
*/
//number 29   +
/*
int a,b,c;
cout<<"enter numbers:";
cin>>a>>b>>c;

if(a+b==c){
cout<<a<<"+"<<b<<"="<<c;
}
else if(a==b+c){
cout<<a<<"="<<b<<"+"<<c;
}
else if(a==b/c){
cout<<a<<"="<<b<<"/"<<c;
}
else if(a/b==c){
cout<<a<<"/"<<b<<"="<<c;
}
else if(a-b==c){
	cout<<a<<"-"<<b<<"="<<c;
}
else if(a==b-c){
cout<<a<<"="<<b<<"-"<<c;
}
else if(a==b*c){
	cout<<a<<"="<<b<<"*"<<c;
}
 else if(a*b==c){
	cout<<a<<"*"<<b<<"="<<c;
}
else
cout<<"no result";
*/
//number 30   +
/*
int j, i, a,b,c;
cin>>a>>b>>c;
i=c-(b+1);
j=c-(b+a);
if(j>=0 && i>=0){
cout<<i<<"  "<<j;
}
 else if(j<0 && i>0){
	cout<<i<<"  "<<"incorect numbers";
}

}
*/
				//week 7
//number31        +
/*
int R, x=2,y=-1;
cin>>R;
if(R<0){
	cout<<-R;
}
else if(R/x==0){
cout<<R/x;	
}
else
cout<<((R+1)/x)+1;
*/
//number 32       +
/*
int A,B,C,AM,BM,CM;
cin>>A>>B>>C;
cin>>AM>>BM>>CM;
if(A<=AM &&B<=BM&&C<=CM ){
	cout<<"yes";
}
else
cout<<"no";
*/
//number 33       +
/*
int n,k;
cin>>n>>k;
cout<<n-(k-(n*2));	
*/
//number 34      +
/*
int n,x,y, S;
cin>>n>>x>>y;
S=n*y/100;
cout<<S-x;
*/
//number 35      +
/*
cin>>A>>B>>C>>D;
	if (A<B) {x=A; y=B; }  else {x=B; y=A;}
	if (C<D) {m=C; n=D; }  else {m=D; n=D;}
	if (x<m) {k1=x; k2=m;} else {k1=m; k2=x;}
	if (y<n) {k3=y; k4=n;} else {k3=n; k4=y;}
       	if (k3<k2) {p=k2; k2=k3; k3=p;}
	cout<<k1*k3;
*/
					//week 8
//number 36      +
/*
int c,d,e,f,g,a,h,i ;                                                                                                                                                                  
cin>>c>>d>>e>>f>>g>>a>>h>>i ;
 if(c==1,d==2,e==3,f==4,g==5,a==6,h==7,i==8){
 	cout<<"ascending";
}
else if(c==8,d==7,e==6,f==5,g==4,a==3,h==2,i==1){
		cout<<"descending";
}
 else
 cout<<"mixed";
*/

//number 37      +
/*
int Troom,Tcond;
string type ;
cin>>Troom>>Tcond;
cin>>type;
if(type=="freeze"&&Troom<Tcond){
	cout<<"answer:"<<Troom;
}

else if(type=="freeze"&&Troom>Tcond){
	cout<<"answer:"<<Troom;
}

if(type=="heat"&&Troom<Tcond){
	cout<<"answer:"<<Tcond;
}

else if(type=="heat"&&Troom>Tcond){
	cout<<"answer:"<<Tcond;
}
else if(type=="auto"){
	cout<<"answer:"<<Tcond;
}
else if(type=="fan"){
	cout<<"answer:"<<Troom;
}
*/
//number 38       +
/*
int n,k=0,s;
cin>>n;
while(n>0){
	cin>>s;
k=s+k;
	n--;
}
if(k%4==0){
	cout<<k/4;
}
else
cout<<k/4+1;
*/
                     //number 38  meore xerxi
/*
int i,n,s,a1,a2,a3,a4,ans;
cin>>n;
for(i=1;i<=n;i++){
cin>>s;
switch(s){
case 1: a1++; break;
case 2: a2++; break;
case 3: a3++; break;
case 4: a4++; break;
}
}
*/	

//number 39      +
/*
int k1,k2;
char symb ; 
cin>>k1>>k2;
cin>>symb;
switch(symb){
	case '+':
	cout<<k1+k2;
	break;
	case '-':
	cout<<k1-k2;
	break;
	case '*':
	cout<<k1*k2;
	break;
	case '/':
	cout<<k1/k2;
	break;

}
*/
//number40       +
/*
int a,b,c,d,num=0;
cin>>a;
if(a==0){a=126;}
else if(a==1){a=48;}
else if(a==2){a=109;}
else if(a==3){a=121;}
else if(a==4){a=51;}
else if(a==5){a=91;}
else if(a==6){a=95;}
else if(a==7){a=112;}
else if(a==8){a=127;}
else if(a==9){a=123;}
cin>>b;
if(b==0){b=126;}
else if(b==1){b=48;}
else if(b==2){b=109;}
else if(b==3){b=121;}
else if(b==4){b=51;}
else if(b==5){b=91;}
else if(b==6){b=95;}
else if(b==7){b=112;}
else if(b==8){b=127;}
else if(b==9){b=123;}
c=a-b;
if(c>0){c=c;}
else {c=c*(-1);	}
while(c>0){
	d=c%2;
	num=num+d;
	c/=2;
}
cout<<num;
*/
                                   //number40  meore xerxi 
                     /*       
 int a, b, p0, p1, p2, p3, p4, p5, p6;
  cin >> a >> b;
 switch(a){
 	case 0: p0++;p1++;p2++;p3++;p4++;p5++; break;
 	case 1: p2++;p3++; break;
 	case 2: p1++;p2++;p4++;p5++;p6++; break;
 	case 3: p1++;p2++;p3++;p4++,p6++; break;
 	case 4: p0++;p2++;p3++;p6++; break;
 	case 5: p0++;p1++;p3++;p4++;p6++; break;
 	case 6: p0++;p1++;p3++;p4++;p5++;p6++; break;
 	case 7: p1++;p2++;p3++; break;
 	case 8: p0++;p1++;p2++;p3++;p4++;p5++;p6++; break;
 	case 9: p0++;p1++;p2++;p3++;p4++;p6++; break;
 }
 switch(b){
 	case 0: p0++;p1++;p2++;p3++;p4++;p5++; break;
 	case 1: p2++;p3++; break;
 	case 2: p1++;p2++;p4++;p5++;p6++; break;
 	case 3: p1++;p2++;p3++;p4++; break;
 	case 4: p0++;p2++;p3++;p6++; break;
 	case 5: p0++;p1++;p3++;p4++;p6++; break;
 	case 6: p0++;p1++;p3++;p4++;p5++;p6++; break;
 	case 7: p1++;p2++;p3++; break;
 	case 8: p0++;p1++;p2++;p3++;p4++;p5++;p6++; break;
 	case 9: p0++;p1++;p2++;p3++;p4++;p6++; break;
 }
cout<<p0%2+p1%2+p2%2+p3%2+p4%2+p5%2+p6%2;
*/

					//week 9
//number 41      +
/*
int k,w,a1,b1,a2,b2,a3,b3;
cin>>k>>w;
cin>>a1>>b1>>a2>>b2>>a3>>b3;

if(a1+a2<=w&&a1+a3<=w&&a2+a3<=w){
	cout<<3;
}
else if(a1+a2<=w&&a1+a3<=w&&a2+a3>=w){
	cout<<2;
}
else if(a1+a2<=w&&a1+a3>=w&&a2+a3<=w){
	cout<<2;
}
else if(a1+a2>=w&&a1+a3<=w&&a2+a3<=w){
	cout<<2;
}
else if(a1+a2<=w&&a1+a3>=w&&a2+a3>=w){
	cout<<1;
}
else if(a1+a2>=w&&a1+a3>=w&&a2+a3<=w){
	cout<<1;
}
else if(a1+a2>=w&&a1+a3<=w&&a2+a3>=w){
	cout<<1;
}
else
cout<<0;
*/
								//meore xerxi
/*
   int w,k,a1,b1,a2,b2,a3,b3,sum=0;
    cin>>w>>k;
    cin>>a1>>b1>>a2>>b2>>a3>>b3;
    if(a1+a2<=w&&b1+b2>=k){sum++;}
    if(a1+a3<=w&&b1+b3>=k){sum++;}
    if(a2+a3<=w&&b2+b3>=k){sum++;}
    if(a1+a2+a3<=w&&b1+b2+b3>=k){sum++;}
    cout<<endl;
    cout<<sum<<endl;
*/

// number 42       +
/*
int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
float N, N2, n; 
cin>>N;
N2=2*N;
n=N/2;
if(n+n+n+n==N2){
sum1++;
}
 if(n+n+N==N2){
sum2++;

}
 if(n+n+N==N2){
sum3++;

}
 if(N+n+n==N2){
sum4++;

}
 if(N+N==N2){
sum5++;

}
cout<<sum1+sum2+sum3+sum4+sum5;
*/
//number 43       +
/*
int x1,y1,x2,y2;
cin>>x1>>y1;
cin>>x2>>y2;
if((x1+x2)%2!=(x2+y2)%2){
	cout<<0;
}
else if(abs(x1-x2)==abs(y1-y2)){
	cout<<1;
}
else
cout<<2;
*/
					//week 10
//number 44     +
  /*  
int a,b,i,sum=0;
cin>>a>>b;
for(i=a;i<=b; i++){
	if(i%2!=0){
		sum+=i;
		
	}
}
cout<<sum;
*/
//number 45      +
/*
int n,sum=0,i;
cin>>n;
for(i=1;i<=n;i++){
if(n%i==0){
	sum++;
}

}
cout<<sum;
*/
//number 46        +
/* 
int i,n,sum=0 ;
cin>>n;
for(i=1;i<=n;i++){
	if(n%i==0){
		sum+=i;
	}
}
cout<<sum;
 */
 //number 47      +
 /*
 int n,k,i,sum=0 ;
 cin>>n;
 for(i=0;i<n;i++){
 	cin>>k;
	
 	cout<<k%10<<k/10<<" ";
 }
 */
 //number 48     +
/* 
 int i,n,w,h,k;
 cin>>n>>w>>h;
for(i=1;i<=n;i++){
	cin>>k;
	if(k<=h||pow(w,2)+pow(h,2)==pow(k,2)){
		cout<<"Da"<<" ";
	}
	else
	cout<<"Ne"<<" ";
}
*/
								//week 11
								
//-----------number 49      +

/*
int n,k,i,sum=0,max=0;
cin>>n;
for(i=0;i<n;i++){
	cin>>k;
	if(k%2==0){
		sum++;
	}
	else
	sum=0;
	if(max<sum){
		max=sum;
	}
}
cout<<max;

*/

//--------------number 50      +

/*
int sum=0,n,a,b,max=0;
cin>>n;
cin>>a;
for(int i=1;i<n;i++){
	cin>>b;
	if(a==b){
		sum++;
	}
	else{	
	sum=0;
}
a=b;
if(max<sum){
	max=sum;
}

}
cout<<max+1;
*/

//-------------number 51     +

/*
int n,a[1000],b[1000],i,min=0,sum=0;
cin>>n;
for(i=1;i<n;i++){
cin>>a[i]>>b[i];
if(a[i]!=0&&b[i]!=0){
if(a[i]+b[i]<a[i+1]+b[i+1]){
	cout<<a[i]+b[i];
}
}
else if(a[i]==0||b[i]==0){
if(a[i]+b[i]<a[i+1]+b[i+1]){
	cout<<a[i]+b[i];
}
}

}
*/

//-----------number 52    +

/*
int k=0,n,i,x[100],y[100],z[100];
cin>>n;
for(i=1;i<=n;i++){
	cin>>x[i]>>y[i]>>z[i];

	k+=x[i]+y[i]+z[i];
}
if(k==0){
	cout<<"YES";
}
else
cout<<"NO";
*/
//-----------meore xerxi
/*
int i,n,x=0,y=0,z=0,s;
cin>>n;
for(i=0;i<n;i++){
	cin>>s;
	x+=s;
	cin>>s;
	y+=s;
	cin>>s;
	z+=s;
}
if(x==0&&y==0&&z==0){
	cout<<"YES";
}
else
cout<<"NO";
*/

//-------------number 53     +

/*
int n,i,k;
cin>>n;
for(i=1;i<=n;i++){
if(i%13==0){
continue;
}

}	
cout<<i<<" ";
*/

//-------------meore amonaxsni

/*
int n,i,ans=0;
cin>>n;
for(i=1;i<=n;i++){
ans++;
if(ans%13==0){
	ans++;
}

}
cout<<ans;
*/

//-------------mesame xerxi

/*
int n,k;
cin>>n; 
k=n/13;
cout<<n+k+((n+k)/13-k);
*/

						//week 12
//------------numer 54      +

/*
int r,g,i,n,r1,g1;
cin>>r>>g;
if(r>g){
	n=r;
}
else
n=g;

for(i=1;i<=n;i++){
if(r%i==0&&g%i==0){
r1=r/i;
g1=g/i;
	cout<<i<<"\t"<<r1<<"\t"<<g1<<"\t"<<endl;

}	
	
}
*/

//------------number 55       +

/*
int k,n,i;
cin>>k>>n;
n=n/2;
for(i=1;i<=n;i++){
k*=2;
}
cout<<k;
*/

//------------number 56       + 

/*
int n,k,i;
cin>>n>>k;
	cout<<(k-1)*2*n;

*/

//------------number 57        +

/*
int k=0,i,n;
cin>>n;
for(i=1;i<=n;i++){
	
	if(n%i==0){
k+=i;
}

}
if(k-n==n){	
cout<<"YES";
}
else
cout<<"NO";
*/
//------------number 58        +
/*
int k,l,m,n,d,i,sum=0;
cin>>k;
cin>>l;
cin>>m;
cin>>n;
cin>>d;
for(i=0;i<d;i++){
	if(i%k==0||i%l==0||i%m==0||i%n==0){		
	sum++;
	}
}

cout<<sum;
*/
							//week 13
//------------number 59     +
/*
int n,sum=0,m;
cin>>n;
while(n>0){
	m=n%10;
	sum+=m;
	n/=10;

}
cout<<sum;
*/
//------------number 60     +
/*
int n,m,k,sum=0;
cin>>n;
while(n!=1){
if(n%2==0){
	n=n/2;
}
else if(n%2!=0)
{
n=n*3+1;
}
cout<<n<<" ";
sum++;

}
cout<<endl<<sum;
*/
//------------number 61     +
/*
int n,k=0,min,max,num;
cin>>n;
for(int i=1;i<=15;i++){
	k=pow(2,i);
	cout<<k<<" ";
	if(n>k){
	
		min=k;
	}
 else if(n<k){
		max=k;
	}
	if(n>max&&n>min){
	num=k+k;
	}
}
cout<<endl<<min<<" "<<num;
*/
//------------number 62     +
/*
int a[1000], n, i=0;
cin>>n;
while(n>0){
	a[i]=n%2;
	n/=2;
	i++;
}

i--;
while(i>=0){
	if(a[i]==1){
		cout<<pow(2,i)<<" ";
		i--;
	}
}
*/
//------------number 63     +
/*
int n,a=0,sum=0,b=1;
cin>>n;
while(a!=n){
	for(b=1;a<n;b*=2){
		a+=b;
		sum++;
		cout<<a<<" ";
	}
	
	for(b=1;a>n;b*=2){
		a-=b;
		sum++;		
	cout<<a<<" ";
	}
}
cout<<endl<<sum;

*/
							//week 14
//------------number 64     +
/*
int n,a=2;
cin>>n;
while(a<=n){
	while(n%a==0){
		cout<<a<<" ";
		n/=a;
	}
	a++;
}
*/
//------------number 66    +
/*
int n,m,k=1,sum=0;
cin>>n>>m;
while(n%2!=0&&m%2!=0){
	sum+=k;
	n/=2;
	m/=2;
	k*=4;
	
}
cout<<sum;
*/
//------------number 67    +
/*
int n,i,sum=0;
cin>>n;
i=n-1;
while(i>0){
if(n%i==0){
sum++;
break;
}
sum++;
i--;
}
cout<<sum;
*/
//------------number 68      +
/*
int n,k,c,a[100],b,i=0,sum=0;
cin>>n>>k;
c=n;
while(n>0){
	cin>>a[i];
	n--;
i++;
}
i-=1;
while(i>-1){
	for(b=3;b>0;b--){
		a[i]-=k;
		if(a[i]<0){
			a[i]+=k;
			break;
		}
	}
	i--;
}
	i+=1;
	while(i<c){
		sum+=a[i];
		i++;
	}
	cout<<sum;
	*/
							//week 15
							
							
//------------number 69 +
/*
int i,n,m,area,sum=1;
cin>>n>>m;

while(m>n){
	m=m-n; 
	sum++;
}

while(m<n){
	n=n-m;
	sum++;
}

cout<<sum;
*/
//------------number 70





//------------number 71  +
/*
int a,b,i,j;
cin>>a>>b;
for(i=0;i<a;i++){
	cout<<"*";
	
	for(j=0;j<b;j++){
		cout<<"*";
	}
	cout<<endl;
}*/
//------------number 72  +
/*
int n,i,j;
cin>>n;

for(i=0;i<n;i++){
	
for(j=0;j<=i;j++){
	cout<<"*";
}


cout<<endl;
}
*/
//------------number 73  +
/*
int i,j,n,sum=0;
cin>>n;
for(i=0;i<=n;i++){


for(j=0;j<=n;j++){
	sum+=j+i;

}

}
cout<<sum;
*/

//------------number 74   +
/*
int i,j,points,members,max=0,sum,row=0;

for(i=1;i<=5;i++){	

sum=0;
for(j=1;j<=4;j++){

cin>>points;

sum+=points;

}
if (max<sum){
	max=sum;
	row=i;
}

}
cout<<endl<<"max="<<max<<endl<<"row:"<<row;
*/
//------------number 75   +
/*
int x,t,a,b,da,db;
cin>>x>>t>>a>>b>>da>>db;
for(int i=0;i<t;i++){
	for(int j=0;j<t;j++){
		if(x==a-i*da+b-j*db||x==a-i*da||x==b-j*db||x==0){
			cout<<"YES";
			return 0;
		}
		else{
			cout<<"NO";
			return 0;
		}
	}
}
*/
							//week 16
							
							
//------------number 76   +
/*
int i,j, n,sum=0;
cin>>n;
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if(pow(i,2)+pow(j,2)==n){
			sum++;
		}
	}
}
cout<<sum/2;
*/
 //------------number 77  +
 /*
int m,n,a,b,sum=0;
cin>>n>>m;
for(a=0;a<=1000;a++){
for(b=0;b<=1000;b++){
if(pow(a,2)+b==n&&a+pow(b,2)==m){
	sum++;
}
}

}
cout<<sum;
*/
 //------------number 78   +
/*
int a,b,dev,i,j,sum=0;
cin>>a>>b;
a+=1;
for(a;a<b;a++){
	dev=0;
	for(j=1;j<=a;j++){
		if(a%j==0){
			dev++;
		}
	}
	if(dev==2){
			sum++;
				if(a>10){
					sum++;
						if(a>100){
							sum++;
								if(a>1000){
									sum++;
										if(a>10000){
											sum++;	
										}
								}
						}
				}  
	}

}
cout<<sum;

*/
 //------------number 79  +
 /*
 int i,m,t,u,f,d;
 char c;
cin>>m>>t>>u>>f>>d;
 for(i=0;i<t;i++){
cin>>c;
 if(c=='f'){
 	m-=2*f;
 }
 else{
 	m-=u+d;
 }
 if(m<0){
 	break;
 }
 }
 cout<<i;
 */
 
 
 
 //------------number 80   +
 /*
 int i,j,k, jnum[9],count=0;

for(i=0;i<9;i++){
cin>>jnum[i];	
count+=jnum[i];
}
for(j=0;j<9;j++){
	
	for(k=0;k<9;k++){
	
		if(count-(jnum[j]+jnum[k])==100){
		if(jnum[j]==jnum[k]){
			continue;
		}
			break;
		}
		
	
	}
		if(count-(jnum[j]+jnum[k])==100){
			break;
		}	
}
for(i=0;i<9;i++){
if(jnum[i]!=jnum[j]&&jnum[i]!=jnum[k]){
	cout<<jnum[i]<<" ";	
}	
}
*/
							//week 17
							
 //------------number 81	 +
 /*						
int n,mx=0,i,s[1000],sum=0;
cin>>n;
mx=s[0];
for(i=0;i<n;i++){

	cin>>s[i];
if(mx<s[i]){
	mx=s[i];
	sum=i;
}
}
cout<<sum<<endl<<mx;
*/
 //------------number 82   +
/*
int hgsum,hgsum2,i,j,sum[7],mx=0,mx2=0,s[6],n;
sum[1]=0;
sum[2]=0;
sum[3]=0;
sum[4]=0;
sum[5]=0;
sum[6]=0;
cin>>n;

int a=n;
for(i=1;i<=n;i++){
	cin>>s[i];

}


for(i=1;i<=a;i++){

switch(s[i]){

case 1:
		sum[1]++;
	break;
case 2:
		sum[2]++;
	break;
case 3:
		sum[3]++;
	break;
case 4:
		sum[4]++;
	break;
case 5:
		sum[5]++;
	break;			
case 6:
		sum[6]++;
	break;	   
}

}
for(i=1;i<=6;i++){
	
	if( mx<sum[i]){
		mx=sum[i];
		hgsum=i;
	}
}


for(i=1;i<=6;i++){
if(mx==sum[i]){
	cout<<i<<' ';
}
}
*/
/*
for(i=0;i<n;i++){
num=s[0];
	hgnum=sum;
	sum=0;
	k=0;
	cin>>s[i];
		if(num==s[i]){
			sum++;
			k=s[i];
			if(sum>=hgnum ){
				cout<<k;
			break;
			}
		
		}

} 
*/
/*
//------------number 83   +

int i,n,a[20],sum=0;
cin>>n;

for(i=1;i<=n;i++){
cin>>a[i];
} 

for(i=1;i<n;i++){
	if(a[i]<=a[i-1]&&a[i]<a[i+1]){
		sum++;
	}
}
cout<<sum;
*/

/*
//------------number 84   +

int n,i,a[20],sum=0;
cin>>n;
for(i=1;i<=n;i++){
cin>>a[i];
}

for(i=1;i<n;i++){
if(a[i]>a[i-1]&&a[i]>a[i+1])
sum++;
}
cout<<sum;
*/

//------------number 85(120)  +
/*
int n,i;
long long int fact=1;
cin>>n;
for(i=0;i<n;i++){
	fact*=(n-i);

}
	cout<<fact<< " ";
*/

							//week 18
	/*						
//------------number 86  +

int g,ii, n,k,a[100],i,mx=0,sumo=0,sumb=0;
cin>>n;
for(i=0;i<n;i++){
	cin>>a[i];
}
ii=0;
g=n-1;
i=0;
while(i<1000){
	if(i+ii==n){
	break;
	}
	else{
		if(a[ii]>a[g-i]){
			sumo+=a[ii];
			ii++;	
		}
		else{
			sumo+=a[g-i];
			i++;
		}
	}
cout<<"\n"<<sumo<<" "<<sumb;
	if(i+ii==n){
	break;
	}
	else{
		if(a[ii]>a[g-i]){
			sumb+=a[ii];
		ii++;
		}
		else{
			sumb+=a[g-i];
		i++;
		}
	}
cout<<"\n"<<sumo<<" "<<sumb;
}
cout<<endl<<sumo<<" "<<sumb;	
*/

//------------number 87   +

/*
int kn=1,lzr=1,etl=2,ku=2,mxdr=2,paik=8,king,lazier,etli,kuu,mxedari,paiki;
cin>>king>>lazier>>etli>>kuu>>mxedari>>paiki;
cout<<kn-king<<" "<<lzr-lazier<<" "<<etl-etli<<" "<<ku-kuu<<" "<<mxdr-mxedari<<" "<<paik-paiki;
*/

/*
//------------number 88  +

int i,k,g,a[43],ans=10;

for(i=0;i<=41;i++){
	a[i]=0;
}
for(i=0;i<10;i++){
	cin>>g;
	k=g%42;
	a[k]++;
}
for(i=0;i<=41;i++){
	if(a[i]>1){
		ans-=(a[i]-1);
	}
}
cout<<"number"<<ans;
*/

/*
//------------number 89  +

int i,j,t1,t2,p[4],a[105],ans;

for(i=1;i<=3;i++){
cin>>p[i];
}
	for(i=1;i<=3;i++){
		cin>>t1>>t2;
		for(j=t1;j<t2;j++){
			a[j]++;
		}
	}
	for(i=0;i<100;i++){
		ans=ans+a[i]*p[a[i]];
	}
	cout<<ans;
*/

/*
//------------number 90 +
int i,p[3];
cin>>p[0]>>p[1]>>p[2];
for(i=0;;i++){
	p[i%3]-=2;
	if(p[0]<=0 && p[1]<=0&&p[2]<=0){
		break;
	}
}
cout<<i+30;
*/

							//week 19
//------------number 91	+



/*
//------------number 92	+
int n,a[100],t,j,i;
cin>>n;
	for(i=1;i<=n;i++){
		cin>>t;
		a[t]=i;
	}
	
	for(i=1;i<=n;i++){
	 cout<<a[i]<<" ";
		}
	
*/


	/*	
//------------number 93	 +
int n,a[1000],j,i,avg=0,sum=0;
cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
		avg+=a[i];
	}
	avg/=n;				
	for(i=1;i<=n;i++){
		for(i=1;j<=n;j++){
			if(i==j||a[i]<=avg||a[j]>=avg){
				continue;
			}
			else{
				if(a[j]<avg){
					while(a[i]!=avg&&a[j]!=avg){
						a[i]--;
						a[j]++;
						sum++;
					}
				}
			}
		}
	}	
cout<<endl<<sum;
*/
			
/*						
//------------number 94 +
int i,j,n, a[10][10],sum1=0,sum2=0;
cin>>n;
for(i=0;i<n;i++){	
	for(j=0;j<n;j++){
		cin>>a[i][j];
	}
}

for(i=0;i<n;i++){	
	for(j=0;j<n;j++){
	if(i==j){
			sum1+=a[i][j];
	}
	if(i+j==n-1){
			sum2+=a[i][j];
	}
	
	}
}
cout<<endl<<"diag1:"<<sum1<<endl<<"diag2:"<<sum2;
*/


/*
//------------number 95   +
int i,j,n, a[10][10],sum1=0,sum2=0;
cin>>n;
srand(time(0));
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		//cin>>a[i][j];
		a[i][j]=10+rand()%41;	
		cout<<a[i][j]<<" ";
	}
	cout<<endl;
}
cout<<endl;

for(i=0;i<n;i++){	
	for(j=0;j<n;j++){
		if(a[i][j]==a[0][j]){
			sum1+=a[0][j];
			cout<<a[i][j]<<" ";
		}	
		
		if(a[i][j]==a[i][n-1]){
			sum2+=a[i][j];
			cout<<a[i][j]<<"  ";
		}
	}	
}
cout<<endl<<sum2+sum1-a[0][0]-a[0][n-1]-a[n-1][n-1];
*/

/*
//------------number 95(meore xerxi)   +
int i,j,n, a[10][10],sum;
cin>>n;
srand(time(0));
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		//cin>>a[i][j];
		a[i][j]=10+rand()%41;	
		cout<<a[i][j]<<" ";
		if(i<j){
			sum+=a[i][j];
		}
	}
	cout<<endl;
}
cout<<endl<<sum;
*/



							//week 20

/*
//------------number 96  +
	
int n,i,j,a[101][101],x[11][11],sum=0;
cin>>n;
for(i=1;i<=n;i++){
	for(j=1;j<=3;j++){
		cin>>x[i][j];	
	}
}

cout<<endl;
for(i=1;i<=100;i++){
	for(j=1;j<=100;j++){
	a[i][j]=0;
	}	
}

for(i=1;i<=n;i++){
        for(int h=0;h<=x[i][3]-1;h++){
            for(j=0;j<=x[i][3]-1;j++){
                    a[x[i][2]+j][x[i][1]+h]=1;
            }
        }
    }
   
for(i=1;i<=100;i++){
	for(j=1;j<=100;j++){
	cout<<a[i][j]<<" ";	
	if (a[i][j]==1){
		sum++;
	}
	}	
cout<<endl;
}

cout<<endl<<sum;
 */
/*
 //------------number 96(meore amoxsna)  +	
int n,i,j,a,b,c,arr[101][101],x,sum=0;

cin>>n;
for(x=1;x<=n;x++){
	cin>>a>>b>>c;
	for(i=a;i<a+c;i++){
		for(j=b;j<b+c;j++){
			arr[i][j]=1;
		}	
	}
}
for(i=0;i<=100;i++){
		for(j=0;j<=100;j++){
			if(arr[i][j]==1){
				sum++;				
			}
		}		
	}
 cout<<endl<<sum;	
 */
	 		 		 						
/*
//------------number 97  +
int i,j,n=3,sum=0;
char a[100][100];
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		cin>>a[i][j];
	}
}
cout<<endl;
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		
if(a[i][0]=='+'){
	cout<<"FIRST";
	break;
}
if(a[i][1]=='+'){
	cout<<"FIRST";
	break;
}
if(a[i][2]=='+'){
	cout<<"FIRST";
	break;
}
if(a[i][j]=='+'){
	cout<<"FIRST";
	break;
}
if(i==j&&a[i][j]=='+'){
	cout<<"FIRST";
	break;
}
if(i+j==n-1&&a[i][j]=='+'){
	cout<<"FIRST";	
	break;
}
if(a[i][0]=='0'){
	cout<<"SECOND";
	break;
}
if(a[i][1]=='0'){
	cout<<"SECOND";
	break;
}
if(a[i][2]=='0'){
	cout<<"SECOND";
	break;
}
if(a[i][j]=='0'){
	cout<<"SECOND";
	break;
}	
if(i==j&&a[i][j]=='0'){
	cout<<"SECOND";
	break;
}
if(i+j==n-1&&a[i][j]=='0'){
	cout<<"SECOND";	
	break;
}
	}	
break;
}
*/

/*
//------------number 98  +
int i,j,n=3,sum=0, a[100][100];
cin>>n;
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		cin>>a[i][j];
	}
}

cout<<endl;
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if((i+j)%2!=0){
			sum+=a[i][j];
			cout<<a[i][j]<<" ";
		}
	}
	cout<<endl;
}

cout<<sum;
*/
/*
//------------number 99  +
int  xw,yw,xb,yb,i,j;
cin>>xw>>yw;
cout<<endl;
cin>>xb>>yb;
if(xw+yw==xb+yb||xw==xb||yw==yb){
	cout<<"YES";
}
else if(xw==yw&&xb==yb){
	cout<<"YES";
}
else if(yw-yb==xw-xb||xb-xw==yb-yw){
	cout<<"YES";
}
else{
	cout<<"NO";
}
*/
							//week 21

/*
//------------number 101  +

int n,m,i,j,a[11][11],x[101],y[101],sum=0,sumarr=0,cubesum=0;
cin>>n>>m;
for(i=1;i<=m;i++){
	cin>>x[i]>>y[i];	
}

cout<<endl;

for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
		a[i][j]=0;
	}
}

for(i=1;i<=m;i++){
		a[x[i]][y[i]]=1;
}

for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
	cout<<a[i][j]<<" ";
	}
	cout<<endl;
}

for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
		if(a[i][j]==1){
			sum++;
			cubesum++;
			if(sum==3){
				sumarr++;
			}
			else if (sum>3){
				sumarr==sumarr;
			}
		}
		else{
			sum=0;
		}

	}
		if(sum=0&& sumarr!=0){
			sumarr=sumarr;
		}
		
		if(sumarr==3){
			cout<<cubesum;
			break;
		}

}
if(sumarr<3){
	cout<<"-1";
}
*/

/*
//------------number 101   +
int n,i,j,sum=0;
cin>>n;
for(i=500;i>0;i--){	

	for(j=1;j<=500;j++){
		if((i*i)-(j*j)==n){
			sum++;
			cout<<i<<" "<<j<<endl;
		}
	}
}
cout<<endl<<sum;
*/



}





    
