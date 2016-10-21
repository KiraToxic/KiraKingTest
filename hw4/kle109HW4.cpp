/* Comparison of Calculated Round-Off Errors*/
/* Khoi Le, kle109Hw4*/
/* Function: A program that illustrates round-off errors using trig-identities*/
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cstdio>
using namespace std;
//get radian
long double getrad(long double degree) {
	long double radians = 0;
	radians = ( M_PI / 180) * degree;
	return radians;
}
//intro Prints
void intro() {
	cout << "" << endl;
    cout << "Program: Comparison of Calculated Round-Off Errors.\n";
    cout << "Info: Khoi Le, kle109Hw4. \n";
    cout << "Function: A program that illustrates round-off errors using trig-identities.\n";
    cout << endl;
}
//function1: 1 + cot(u)^2 = csc(u)^2
float function10(long double u) {
    float ans1 = 0;
    float ans2 = 0;
    float ans3 = 0;
    ans1 = 1 + (float)pow((1 / (float)tan((float)u)), 2);
    ans2 = (float)pow((1 / (float)sin((float)u)), 2); 
    ans3 = ans1 - ans2;
    return ans3;
}
double function11(long double u) {
    double ans1 = 0;
    double ans2 = 0;
    double ans3 = 0;
    ans1 = 1 + (double)pow((1 / (double)tan((double)u)), 2);
    ans2 = (double)pow((1 / (double)sin((double)u)), 2); 
    ans3 = ans1 - ans2;
    return ans3;
}
long double function12(long double u) {
    long double ans1 = 0;
    long double ans2 = 0;
    long  double ans3 = 0;
    ans1 = 1 + (long double)pow((1 / (long double)tan((long double)u)), 2);
    ans2 = (long double)pow((1 / (long double)sin((long double)u)), 2); 
    ans3 = ans1 - ans2;
    return ans3;
}
//function2: tan(u)^2 = (1 - cos(2*u)) / ((1 + cos(2*u)) 
float function20(long double u) {
    float ans1 = 0;
    float ans2 = 0;
    float ans3 = 0;
    ans1 = (float)pow((float)tan((float)u), 2);
    ans2 = (1 - (float)cos(2 * (float)u)) / (1 + (float)cos(2 * (float)u)); 
    ans3 = ans1 - ans2;
    return ans3;
}
double function21(long double u) {
    double ans1 = 0;
    double ans2 = 0;
    double ans3 = 0;
    ans1 = (double)pow((double)tan((double)u), 2);
    ans2 = (1 - (double)cos(2 * (double)u)) / (1 + (double)cos(2 * (double)u)); 
    ans3 = ans1 - ans2;
    return ans3;
}
long double function22(long double u) {
    long double ans1 = 0;
    long double ans2 = 0;
    long double ans3 = 0;
    ans1 = (long double)pow((long double)tan((long double)u), 2);
    ans2 = (1 - (long double)cos(2 * (long double)u)) / (1 + (long double)cos(2 * (long double)u)); 
    ans3 = ans1 - ans2;
    return ans3;
}
//function3: sin(u) - sin(v) = 2*cos((u+v)/2)*sin((u-v)/2) 
float function30(long double u, long double v) {
    float ans1 = 0;
    float ans2 = 0;
    float ans3 = 0;
    ans1 = (float)sin((float)u) - (float)sin((float)v);
    ans2 = 2 * (float)cos(((float)u + (float)v) / 2) * (float)sin(((float)u - (float)v) / 2); 
    ans3 = ans1 - ans2;
    return ans3;
}
double function31(long double u, long double v) {
    double ans1 = 0;
    double ans2 = 0;
    double ans3 = 0;
    ans1 = (double)sin((double)u) - (double)sin((double)v);
    ans2 = 2 * (double)cos(((double)u + (double)v) / 2) * (double)sin(((double)u - (double)v) / 2); 
    ans3 = ans1 - ans2;
    return ans3;
}
long double function32(long double u, long double v) {
    long double ans1 = 0;
    long double ans2 = 0;
    long double ans3 = 0;
    ans1 = (long double)sin((long double)u) - (long double)sin((long double)v);
    ans2 = 2 * (long double)cos(((long double)u + (long double)v) / 2) * (long double)sin(((long double)u - (long double)v) / 2); 
    ans3 = ans1 - ans2;
    return ans3;
}
//function4: log10(u^(1/v)) = log10(u)/v
float function40(long double u, long double v) {
	float ans0 = 0;
    float ans1 = 0;
    float ans2 = 0;
    float ans3 = 0;
	ans0 = (1/(float)v);
    ans1 = (float)log10((float)pow((float)u,ans0));
    ans2 = ((float)log10((float)u)) / (float)v; 
    ans3 = ans1 - ans2;
    return ans3;
}
double function41(long double u, long double v) {
	double ans0 = 0;
    double ans1 = 0;
    double ans2 = 0;
    double ans3 = 0;
	ans0 = (1/(double)v);
    ans1 = (double)log10((double)pow((double)u, ans0));
    ans2 = ((double)log10((double)u)) / (double)v; 
    ans3 = ans1 - ans2;
    return ans3;
}
long double function42(long double u, long double v) {
	long double ans0 = 0;
    long double ans1 = 0;
    long double ans2 = 0;
    long double ans3 = 0;
	ans0 = (1/(long double)v);
    ans1 = (long double)log10((long double)pow((long double)u, ans0));
    ans2 = ((long double)log10((long double)u)) / (long double)v; 
    ans3 = ans1 - ans2;
    return ans3;
}
//function5: ln(u^(1/v)) = ln(u)/v
float function50(long double u, long double v) {
	float ans0 = 0;
    float ans1 = 0;
    float ans2 = 0;
    float ans3 = 0;
	ans0 = (1/(float)v);
    ans1 = (float)log((float)pow((float)u,ans0));
    ans2 = ((float)log((float)u)) / (float)v; 
    ans3 = ans1 - ans2;
    return ans3;
}
double function51(long double u, long double v) {
	double ans0 = 0;
    double ans1 = 0;
    double ans2 = 0;
    double ans3 = 0;
	ans0 = (1/(double)v);
    ans1 = (double)log((double)pow((double)u, ans0));
    ans2 = ((double)log((double)u)) / (double)v; 
    ans3 = ans1 - ans2;
    return ans3;
}
long double function52(long double u, long double v) {
	long double ans0 = 0;
    long double ans1 = 0;
    long double ans2 = 0;
    long double ans3 = 0;
	ans0 = (1/(long double)v);
    ans1 = (long double)log((long double)pow((long double)u, ans0));
    ans2 = ((long double)log((long double)u)) / (long double)v; 
    ans3 = ans1 - ans2;
    return ans3;
}
// function6: sin(u)*sin(v) = .5 (cos(u-v) - cos(u+v))
float function60(long double u, long double v) {
    float ans1 = 0;
    float ans2 = 0;
    float ans3 = 0;
    ans1 = (float)sin(u) * (float)sin(v);
    ans2 = (.5) * ((float)cos((float)u-(float)v) - (float)cos((float)u+(float)v));
    ans3 = ans1 - ans2;
    return ans3;
}
double function61(long double u, long double v) {
    double ans1 = 0;
    double ans2 = 0;
    double ans3 = 0;
    ans1 = (double)sin(u) * (double)sin(v);
    ans2 = (.5) * ((double)cos((double)u-(double)v) - (double)cos((double)u+(double)v));
    ans3 = ans1 - ans2;
    return ans3;
}
long double function62(long double u, long double v) {
    long double ans1 = 0;
    long double ans2 = 0;
    long double ans3 = 0;
    ans1 = (long double)sin(u) * (long double)sin(v);
    ans2 = (.5) * ((long double)cos((long double)u-(long double)v) - (long double)cos((long double)u+(long double)v));
    ans3 = ans1 - ans2;
    return ans3;
}
//main function
int main() {
	char userinput = 'y';
	while(userinput == 'y') {	 
    intro();
    long double base = 0;
    long double u1;
    cout << "Please enter a degree value for u (positive degrees): " << endl;
    cin >> u1;
	while (u1 < 0) {
		cout << "Value is non positive" << endl;
		cout << "Please enter a degree value for u (positive degrees): " << endl;
		cin >> u1;
	}
    long double v1;
    cout << "PLease enter a degree value for v (positive degrees): " << endl;
    cin >> v1;
	while (v1 < 0 || v1 == u1) {
		if (v1 == u1){
			cout << "Value cannot equal to u1" << endl;
			cout << "Please enter a degree value for u (positive degrees): " << endl;
			cin >> v1;
		}
		else {	
			cout << "Value is non positive" << endl;
			cout << "Please enter a degree value for u (positive degrees): " << endl;
			cin >> v1;
		}
	}
// radian coversion	
	long double u = getrad(u1);
	long double v = getrad(v1);
//function1 values	
    float a1 = function10(u);
    double b1 = function11(u);
    long double c1 = function12(u);    
//function2 values		
	float a2 = function20(u);
    double b2 = function21(u);
    long double c2 = function22(u); 
//function3 values		
	float a3 = function30(u,v);
    double b3 = function31(u,v);
    long double c3 = function32(u,v); 
//function4 values		
	float a4 = function40(u,v);
    double b4 = function41(u,v);
    long double c4 = function42(u,v);
//function5 values		
	float a5 = function50(u,v);
    double b5 = function51(u,v);
    long double c5 = function52(u,v);	
//function6 values
	float a6 = function60(u,v);
	double b6 = function61(u,v);
    long double c6 = function62(u,v);
//summary
	long double aa1;
	long double aa2;
	long double aa3;
	long double bb1;
	long double bb2;
	long double bb3;
	long double cc1;
	long double cc2;
	long double cc3;
// stats average
	aa1 = ( a1 + a2 + a3 +a4 + a5 + a6) / 5 ;
	bb1 = ( b1 + b2 + b3 +b4 + b5 + b6) / 5 ;
	cc1 = ( c1 + c2 + c3 +c4 + c5 + c6) / 5 ;
// stats average sum	
	aa2 = ((long double)pow(a1,2) + (long double)pow(a2,2) + (long double)pow(a3,2) + (long double)pow(a4,2) + (long double)pow(a5,2) + (long double)pow(a6,2)) / 5	;
	bb2 = ((long double)pow(b1,2) + (long double)pow(b2,2) + (long double)pow(b3,2) + (long double)pow(b4,2) + (long double)pow(b5,2) + (long double)pow(b6,2)) / 5 ;
	cc2 = ((long double)pow(c1,2) + (long double)pow(c2,2) + (long double)pow(c3,2) + (long double)pow(c4,2) + (long double)pow(c5,2) + (long double)pow(c6,2)) / 5	;
// stats average root sum squared	
	aa3 = (long double)pow(aa2, .5);
	bb3 = (long double)pow(bb2, .5);
	cc3 = (long double)pow(cc2, .5);
//Table Output
    cout << "\n" << endl;
	int n = 1;
    printf( "__________________________________________________________________________________________________________________________\n" );
    printf( "|------------------------------Table for Round-off Errors Using Trig-identities------------------------------------------|\n" );
    printf( "|________________________________________________________________________________________________________________________|\n" );
    printf( "|Identity |Identity |u = %5.5g degrees  | %6.4g radian  |Float            |Double            |Long Double               |\n",(float)u1,(float)u );
    printf( "|Number   |LHS      |v = %5.5g degrees  | %6.4g radian  |Error            |Error             |Error                     |\n",(float)v1,(float)v );
    printf( "|_________|_________|___________________|________________|_________________|__________________|__________________________|\n" );
    printf( "|    %d    | 1+cot(u)^2 = csc(u)^2                        | %15.5g | %15.5g  | %15.5Lg          |\n",n++, a1, b1, c1 ); 
	//n = 2;
	printf( "|_________|______________________________________________|_________________|__________________|__________________________|\n" );
    printf( "|    %d    | tan(u)^2 = (1-cos(2*u))/((1+cos(2*u))        | %15.5g | %15.5g  | %15.5Lg          |\n",n++, a2, b2, c2 ); 
	//n = 3;
	printf( "|_________|______________________________________________|_________________|__________________|__________________________|\n" );
	printf( "|    %d    | sin(u)-sin(v) = 2*cos((u+v)/2)*sin((u-v)/2)  | %15.5g | %15.5g  | %15.5Lg          |\n",n++, a3, b3, c3 ); 
	//n = 4;
	printf( "|_________|______________________________________________|_________________|__________________|__________________________|\n" );
	printf( "|    %d    | log10(u^(1/v)) = log10(u)/v                  | %15.5g | %15.5g  | %15.5Lg          |\n",n++, a4, b4, c4 ); 
	//n = 5;
	printf( "|_________|______________________________________________|_________________|__________________|__________________________|\n" );
	printf( "|    %d    | ln(u^(1/v)) = ln(u)/v                        | %15.5g | %15.5g  | %15.5Lg          |\n",n++, a5, b5, c5 ); 
	//n = 6;
	printf( "|_________|______________________________________________|_________________|__________________|__________________________|\n" );
	printf( "|    %d    | sin(u)*sin(v) = (1/2)(cos(u-v)-cos(u+v))     | %15.5g | %15.5g  | %15.5Lg          |\n",n++, a6, b6, c6 ); 
	//n = 7;
	printf( "|_________|______________________________________________|_________________|__________________|__________________________|\n" );
    printf( "|--------------------------------------------------Data Summary----------------------------------------------------------|\n" );
    printf( "|________________________________________________________________________________________________________________________|\n" );	
	printf( "| Stats 1 | Average Errors                               | %15.5Lg | %15.5Lg  | %15.5Lg          |\n", aa1, bb1, cc1);
	printf( "|_________|______________________________________________|_________________|__________________|__________________________|\n" );
	printf( "| Stats 2 | Average Sum(Error^2)                         | %15.5Lg | %15.5Lg  | %15.5Lg          |\n", aa2, bb2, cc2 ); 
	printf( "|_________|______________________________________________|_________________|__________________|__________________________|\n" );
	printf( "| Stats 3 | Average sqrt(sum(Error^2))                   | %15.5Lg | %15.5Lg  | %15.5Lg          |\n", aa3, bb3, cc3 ); 
	printf( "|_________|______________________________________________|_________________|__________________|__________________________|\n" );
// rerun prompt
	cout << "\n Rerun program: (y/n) \n" << endl;
	cin >> userinput;
	cout << endl;
	}
    return 0;
 }
