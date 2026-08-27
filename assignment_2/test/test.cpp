#include <iostream>

int foo(int a, int& a, int * a, int a []){ // syntax error nahi aana chahiye int a [][][][] 
}
// && error nahi aana chaiye

int foo(int a=20,int b=20){ // error nahi aana chahiye dono case mei, int b;

}

const int foo() const{ // error nahi aana chahiye (2nd const ki wajah sey)

}

class A(){

}; // class nahih haiiiiii

struct A(){

}; // struct ke end mei aana chaiye, kya bkcd haiiii

// class B() : public B {

// };

int main(){
// a=b=c=d=d=3;
10+=20; // yeh sahi hai syntax sey
// // 10a = 20;
// a+10=20; // error nahi hona 
// a+b=102; // error nahi hoa chahiey
 const a; // error hona chahiye!!!!!!!!!!!!!!!!!!!!! also constexpr kaaa
 const int al;
 constexpr int al;


}
// +10 += 20;
// 10 += 20; // yeh error nahi hona chahiye semantic hai
// main ke bahaar, sab kuch error de raha hai , onyl func decl is allwoed
// lexical error ke baad khatam