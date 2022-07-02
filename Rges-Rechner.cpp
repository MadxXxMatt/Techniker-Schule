#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

int main()
{ double U   ;
  double R1  ;
  double R2  ;
  double R3  ; 
  double R4  ;
  double R   ;
  double R_2_3;
  double U_R1;
  double U_R2_3;
  double U_R4;
  double I   ;
  double I_R2  ;
  double I_R3  ;


    cout 
<<"                    ----" << endl 
<<"          ---------| R2 |---------" << endl 
<<"         |          ----          |" << endl
<<"  ----   |                        |  ----" << endl
<<"-| R1  |-|                        |-| R4  |-" << endl
<<"  ----   |                        |  ----" << endl
<<"         |          ----          |" << endl 
<<"          ---------| R3 |---------" << endl 
<<"                    ----" << endl
<<"-------------------------------------------------------" <<endl 
<<"Please enter U (in Volt)" <<endl 
<<"-------------------------------------------------------" <<endl ;

cin>>U ;

cout <<"Please enter R1 (in Ohm) " <<"U = " <<U <<endl
<<"-------------------------------------------------------" <<endl ;

cin>> R1;


cout <<"Please enter R2 (in Ohm) " <<"U = " <<U <<"  " <<"R1 = " <<R1 <<endl
<<"-------------------------------------------------------" <<endl ;

cin>> R2;


while (R2<=0) {  
cout <<"R2 must be greater than 0" <<endl 
<<"-------------------------------------------------------" <<endl
<<"Please enter R2 (in Ohm) " <<"U = " <<U <<"  " <<"R1 = " <<R1 <<endl
<<"-------------------------------------------------------" <<endl ;
cin>> R2; 
;}


cout <<"Please enter R3 (in Ohm) " <<"U = " <<U <<"  " <<"R1 = " <<R1 <<"  " <<"R2 = " <<R2 <<endl
<<"-------------------------------------------------------" <<endl ;

cin>> R3;
while (R3<=0) {  
cout <<"R2 must be greater than 0" <<endl 
<<"-------------------------------------------------------" <<endl
<<"Please enter R3 (in Ohm) " <<"U = " <<U <<"  " <<"R1 = " <<R1 <<"  " <<"R2 = " <<R2 <<endl
<<"-------------------------------------------------------" <<endl ;
cin>> R3 ;
;}


cout <<"Please enter R4 (in Ohm) " <<"U = " <<U <<"  " <<"R1 = " <<R1 <<"  " <<"R2 = " <<R2 <<"  " <<"R3 = " <<R3 <<endl
<<"-------------------------------------------------------" <<endl ;

cin>> R4;


R_2_3= 1/((1/R2)+(1/R3)) ;
R = R_2_3 + R1 + R4 ;
I = U / R ;
U_R1 = R1 * I ;
U_R4 = R4 * I ;
U_R2_3 = R_2_3 * I ;
I_R2 = U_R2_3 / R2 ;
I_R3 = U_R2_3 / R3 ;

cout
<<"Results" <<endl
<<"-------------------------" <<endl
<<"R = " << R <<"Ohm" <<endl
<<"-------------------------" <<endl
<<"I = " << I <<"A" <<endl
<<"-------------------------" <<endl
<<"U_R1 = " << U_R1 <<"V" <<endl
<<"-------------------------" <<endl
<<"U_R4 = " << U_R4 <<"V" <<endl
<<"-------------------------" <<endl
<<"U_R2_3 = " << U_R2_3 <<"V" <<endl
<<"-------------------------" <<endl
<<"I_R2 = " << I_R2 <<"A" <<endl
<<"-------------------------" <<endl
<<"I_R3 = " << I_R3 <<"A" <<endl
<<"-------------------------" <<endl
;


return 0;
}