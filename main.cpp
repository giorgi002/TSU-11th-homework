// first task 👇
// #include <iostream>
// #include <fstream>
// #include <vector>
// using namespace std;
// void fill(vector<double> &x, string str){
//     ifstream fin(str);
//     double num;
//     while(fin>> num){
//         x.push_back(num);
//     }
// }
// bool Sum(vector<double> &x, int k, double &sum){
//     sum=0;
//     if(k > x.size() || k<0){
//         return false;
//     }
//     for(int i=x.size()-k;i<x.size();i++){
//         sum+=x[i];
//     }
//     return true;
// }
// int main(){
//     vector<double>vec;
//     fill(vec,"reals.txt");
//     double jami;
//     bool done;
//     int k;
//     cout << "შეიყვანეთ რიცხვების რაოდენობა \n";
//     cin >> k;
//     done =Sum(vec,k, jami);
//     if(done){
//         cout << "ვექტორის ბოლო "<< k<< "რიცხვების ჯამია "<< jami<< endl;
//     }
//     else{
//         cout << "ვექტორში არ არის ამდენი ელემენტი ან შეყვანილი რიცხვი ნაკლებია 0-ზე "<< endl;
//     }
// }



// second task👇
// #include <iostream>
// #include <array>
// #include <algorithm>
// using namespace std;
// const int N =12;
// void print(const array<int, N> &x){
//     for(const auto &m : x){
//         cout << m << " ";
//     }
//     cout << endl;
// }
// int main(){
//     array <int,N>arr;
//     print(arr);
//     cout << "შეიყვანეთ 12 მთელი რიცხვი \n";
//     for(int i=0;i<12;i++){
//         cin >> arr[i];
//     }
//     cout << "ამ მასივში, რიცხვი -3 გვხვდება "<< count(arr.begin(),arr.end(), -3)<< "-ჯერ\n";
//     cout << "მასივი შეიცავს "<< count_if(arr.begin(), arr.end(), [](const int &a){
//         return a>0;
//     });
//     sort(arr.begin(), arr.end());
//     cout << "ზრდადობით დალაგებული მასივია \n";
//     print(arr);
//     cout << "უმცირესი ელემენტია "<< arr[0] << endl;
//     cout << "უდიდესი ელემენტია "<<arr[arr.size()-1] << endl;
// }



// third task 👇
// #include <iostream>
// #include <cmath>
// using namespace std;
// struct triangleInfo{
//     double perimeter;
//     double area;
// };
// triangleInfo calculate(double a,double b,double c){
//     triangleInfo info;
//     info.perimeter=a+b+c;
//     double s= info.perimeter/2.0;
//     info.area = sqrt(s * (s - a) * (s - b) * (s - c));
//     return info;
// }
// int main(){
//     double a,b,c;
//     cout << "შეიყვანეთ სამკუთხედის სამი გვერდი: ";
//     cin >> a >> b >> c;
//     triangleInfo result = calculate(a,b,c);
//     cout << "სამკუთხედის პერიმეტრი: " << result.perimeter << endl;
//     cout << "სამკუთხედის ფართობი: " << result.area << endl;
// }



// fourth task👇
// #include <iostream>
// #include <string>
// using namespace std;
// int min(int a, int b){
//     return a<b?a:b;
// }
// double min(double a, double b){
//     return a<b?a:b;
// }
// char min(char a, char b){
//     return a<b?a:b;
// }
// string min(string a, string b){
//     return a<b?a:b;
// }
// int main(){
//     int n = 45, m = -7;
// 	   double a = 3.65, b = 75.123;
// 	   char p = 'F', q = 'K';
// 	   string s1 = "C++ ena", s2 = "C ena";
//     cout << n<<"-სა და "<< m << "-ს შორის უმცირესია "<< min(n,m)<< endl; 
//     cout << a<<"-სა და "<< b << "-ს შორის უმცირესია "<< min(a,b)<< endl; 
//     cout << p<<"-სა და "<< q << "-ს შორის უმცირესია "<< min(p,q)<< endl;
//     cout << s1<<"-სა და "<< s2 << "-ს შორის უმცირესია "<< min(s1,s2)<< endl;
// }



// fifth task 👇
// #include <iostream>
// #include <string>
// using namespace std;
// int min(int a,int b,int c){
//     int min=a;
//     if(b<min) min=b; 
//     if(c<min) min=c;
//     return min;
// }
// double min(double a,double b,double c){
//     double min =a;
//     if(b<min) min=b; 
//     if(c<min) min=c;
//     return min;
// }
// char min(char a,char b,char c){
//     char min =a;
//     if(b<min) min=b; 
//     if(c<min) min=c;
//     return min;
// }
// string min(string a,string b,string c){
//     string min =a;
//     if(b<min) min=b; 
//     if(c<min) min=c;
//     return min;
// }
// int main(){
//     int int1 = 3, int2 = 7, int3 = 1;
//     double double1 = 2.5, double2 = 3.8, double3 = 1.2;
//     string str1 = "Apple", str2 = "Orange", str3 = "Banana";
//     char char1 = 'z', char2 = 'b', char3 = 'm';
//     cout << int1<<"-ს "<< int2<<"-სა და "<<int3<<"-ს შორის უმცირესია "<< min(int1,int2,int3)<< endl;
//     cout << double1<<"-ს "<< double2<<"-სა და "<<double3<<"-ს შორის უმცირესია "<< min(double1,double2,double3)<< endl;
//     cout << char1<<"-ს "<< char2<<"-სა და "<<char3<<"-ს შორის უმცირესია "<< min(char1,char2,char3)<< endl;
//     cout << str1<<"-ს "<< str2<<"-სა და "<<str3<<"-ს შორის უმცირესია "<< min(str1,str2,str3)<< endl;
// }



// fifth task(2) 👇
// #include <iostream>
// #include <string>
// using namespace std;
// template <typename T>
// T minval(T a, T b, T c) {
//     T min = a;
//     if (b < min) min = b;
//     if (c < min) min = c;
//     return min;
// }

// int main() {
//     int int1 = 3, int2 = 7, int3 = 1;
//     double double1 = 2.5, double2 = 3.8, double3 = 1.2;
//     string str1 = "Apple", str2 = "Orange", str3 = "Banana";
//     char char1 = 'z', char2 = 'b', char3 = 'm';

//     cout << int1 << "-ს " << int2 << "-სა და " << int3 << "-ს შორის უმცირესია " << minval(int1, int2, int3) << endl;
//     cout << double1 << "-ს " << double2 << "-სა და " << double3 << "-ს შორის უმცირესია " << minval(double1, double2, double3) << endl;
//     cout << char1 << "-ს " << char2 << "-სა და " << char3 << "-ს შორის უმცირესია " << minval(char1, char2, char3) << endl;
//     cout << str1 << "-ს " << str2 << "-სა და " << str3 << "-ს შორის უმცირესია " << minval(str1, str2, str3) << endl;
// }



//sixth task(1) 👇
// #include <iostream>
// #include <string>
// using namespace std;
// int max(int a,int b,int c){
//     int max;
//     max=a;
//     if(b> max) max =b;
//     if(c> max) max =c;
//     return max;
// }
// double max(double a,double b,double c){
//     double max;
//     max=a;
//     if(b> max) max =b;
//     if(c> max) max =c;
//     return max;
// }
// char max(char a,char b,char c){
//     char max;
//     max=a;
//     if(b> max) max =b;
//     if(c> max) max =c;
//     return max;
// }
// string max(string a,string b,string c){
//     string max;
//     max=a;
//     if(b> max) max =b;
//     if(c> max) max =c;
//     return max;
// }
// int main(){
//     int int1 = 3, int2 = 7, int3 = 1;
//     double double1 = 2.5, double2 = 3.8, double3 = 1.2;
//     string str1 = "Apple", str2 = "Orange", str3 = "Banana";
//     char char1 = 'z', char2 = 'b', char3 = 'm';
//     cout << int1 << "-ს " << int2 << "-სა და " << int3 << "-ს შორის უდიდესია " << max(int1, int2, int3) << endl;
//     cout << double1 << "-ს " << double2 << "-სა და " << double3 << "-ს შორის უდიდესია " << max(double1, double2, double3) << endl;
//     cout << char1 << "-ს " << char2 << "-სა და " << char3 << "-ს შორის უდიდესია " << max(char1, char2, char3) << endl;
//     cout << str1 << "-ს " << str2 << "-სა და " << str3 << "-ს შორის უდიდესია " << max(str1, str2, str3) << endl;
// }



//sixth task (2)👇
// #include <iostream>
// #include <string>
// using namespace std;
// template <typename T>
// T maxval( T a, T b, T c){
//     T max =a;
//     if(b > max) max =b;
//     if(c > max) max =c;
//     return max;
// }
// int main(){
//     int int1 = 3, int2 = 7, int3 = 1;
//     double double1 = 2.5, double2 = 3.8, double3 = 1.2;
//     string str1 = "Apple", str2 = "Orange", str3 = "Banana";
//     char char1 = 'z', char2 = 'b', char3 = 'm';
//     cout << int1 << "-ს " << int2 << "-სა და " << int3 << "-ს შორის უდიდესია " << maxval(int1, int2, int3) << endl;
//     cout << double1 << "-ს " << double2 << "-სა და " << double3 << "-ს შორის უდიდესია " << maxval(double1, double2, double3) << endl;
//     cout << char1 << "-ს " << char2 << "-სა და " << char3 << "-ს შორის უდიდესია " << maxval(char1, char2, char3) << endl;
//     cout << str1 << "-ს " << str2 << "-სა და " << str3 << "-ს შორის უდიდესია " << maxval(str1, str2, str3) << endl;
// }



// seventh task👇
// #include <iostream>
// using namespace std;
// int func(int a){
//     return -a;
// }
// double func(double a){
//     return -a;
// }
// int main(){
//     int a = 5;
//     double b = -3.5;
//     cout << "რიცხვის შებრუნებული  მნიშვნელობაა "<< func(a)<< endl;
//     cout << "წერტილის შებრუნებული მნიშვნელობაა "<< func(b)<< endl;
// }



// seventh task (2) 👇
// #include <iostream>
// using namespace std;
// template <typename T>
// T func(T a){
//     return -a;
// }
// int main(){
//     int a = 5;
//     double b = -3.5;
//     cout << "რიცხვის შებრუნებული  მნიშვნელობაა "<< func(a)<< endl;
//     cout << "წერტილის შებრუნებული მნიშვნელობაა "<< func(b)<< endl;
// }



// eighth task👇
// #include <iostream>
// #include <string>
// using namespace std;
// int Mult (double a,double b){
//     return a * b;
// }
// int Mult(int a,int b,int c){
//     return a*b*c;
// }
// int Mult(string k){
//     return 2 * k.size();
// }
// int main(){
//     int a,b,c;
//     double d,e;
//     string s;
//     cout << "შეიყვანეთ ორი ნამდვილი რიცხვი \n";
//     cin >> d>> e;
//     cout << Mult(d,e)<< endl;
//     cout << "შეიყვანეთ 3 მთელი რიცხვი \n";
//     cin >> a >> b >> c;
//     cout << Mult(a, b, c) << endl;
//     cout << "შეიყვანეთ სტრიქონი \n";
//     cin >> s;
//     cout << Mult(s) << endl;
// }



// nine task👇
// #include <iostream>
// using namespace std;
// struct squaredata{
//     int perimeter;
//     double area;
// };
// squaredata square(const double &side){
//     squaredata result;
//     result.area= side *side;
//     result.perimeter= side*4;
//     return result;
// }
// int main(){
//     double side = 2.5;
//     squaredata sq = square(side);
//     cout << "Square with side " << side << " has perimeter " << sq.perimeter << " and area " << sq.area << endl; 
//     side +=2.5;
//     cout << "Square with new side " << side << " has perimeter " << square(side).perimeter << " and area " << square(side).area << endl;
//     cout << "Enter new side: ";
//     cin >>side;
//     sq= square(side);
//     cout << "Square with new side " << side << " has perimeter " << sq.perimeter << " and area " << sq.area << endl;
// }



// tenth task👇
// #include <iostream>
// using namespace std;
// class Squareinfo{
//     public:
//     double side;
//     double Area(){
//         return side *side;
//     }
//     double Perimeter(){
//         return side *4;
//     }
//     double diagonal(){
//         return side *1.414;
//     }
//     void print(){
//         cout << "Square with side " << side << " has perimeter "
//         << Perimeter() << " and area " << Area() << " and diagonal " 
//         << diagonal() << endl;
//     }
// };
// int main(){
//     Squareinfo square;
//     square.side=2.5;
//     square.print();
//     cout <<"Enter new side: "<< endl;
//     cin >> square.side;
//     cout << "Square with new side " << square.side << " has perimeter ";
//     square.print();
// }



// eleventh task👇
// #include <iostream>
// using namespace std;
// const double PI=3.14159;
// class Circle{
//     public:
//     double radius;
//     double Area(){
//         return PI *radius*radius;
//     }
//     double length(){
//         return 2*PI*radius;
//     }
//     void print(){
//         cout <<"Circle with radius "<<radius<< " has area "<<Area()
//         <<" and length is "<< length()<< endl;
//     }
// };
// int main(){
//     Circle circle1;
//     circle1.radius=2.5;
//     circle1.print();
//     Circle circle2;
//     cout << "Enter new radius: \n";
//     cin >> circle2.radius;
//     circle2.print();
//     if(circle1.Area()> circle2.Area()){
//         cout <<"Circle1 area is bigger than circle2"<< endl;
//     }
//     else if(circle1.Area()< circle2.Area()){
//         cout << "Circle1 area is smaller than circle2\n";
//     }
//     else{
//         cout <<"Circle1 area is equal to circle2\n";
//     }
// }



//  twelfth task👇
// #include <iostream>
// #include <string>
// using namespace std;
// class Country{
//     public:
//     string country;
//     double population;
//     double area;
//     void print(){
//         cout <<"Country "<< country<< " with its population "<< population
//         << "and area "<< area << endl;
//     }
// };
// int main(){
//     Country country1;
//     country1.country="Georgia";
//     country1.population= 3.7;
//     country1.area= 69.7;
//     Country country2;
//     country2.country="USA";
//     country2.population= 331;
//     country2.area= 9834;
//     country1.population > country2.population ? country1.print() : country2.print();
//     country1.area < country2.area ? country1.print() : country2.print();
// }



// thirteenth task👇
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// class Student{
//     public:
//     string name;
//     string surname;
//     int number;
//     double grade;
//     void print(){
//         cout << "Student "<< name << " "<< surname << " with number "
//         <<number << " has grade "<< grade << endl;
//     }
// };
// int main(){
//     Student student1;
//     ifstream fin("Students.txt");
//     fin>> student1.name>>student1.surname>> student1.number>> student1.grade;
//     Student student2;
//     fin >>student2.name>> student2.surname>> student2.number>> student2.grade;
//     cout << "Student with higher grade is\n";
//     student1.grade >student2.grade ? student1.print(): student2.print();
// }



// fourteenth task👇
// #include <iostream>
// #include <string>
// using namespace std;
// class Computer{
//     public:
//     string name;
//     int memory;
//     double price;
//     void print(){
//         cout <<"The computer "<< name<< " with memory "
//         << memory <<" and price "<< price << endl;
//     }
// };
// int main(){
//     Computer C1,C2,C3;
//     cout<< "Enter name,memory and price of first computer\n";
//     cin >> C1.name>> C1.memory>> C1.price;
//     cout<< "Enter name,memory and price of second computer\n";
//     cin >> C2.name>> C2.memory>>C2.price;
//     cout<< "Enter name,memory and price of third computer\n";
//     cin >>C3.name>>C3.memory>>C3.price;
//     Computer max=C1;
//     if(C2.price >max.price) max=C2;
//     if(C3.price> max.price) max=C3;
//     cout <<"the most expensive computer is \n";
//     max.print();
// }



// fifteenth task👇
// #include <iostream>
// using namespace std;
// class Box{
//     public:
//     double length;
//     double width;
//     double height;
//     void print(){
//         cout <<"Box with length "<< length
//         <<" with width "<<width<< " and height "<< height<< endl;
//     }
//     double dimension(){
//         return width*length*height;
//     }
// };
// int main(){
//     Box box;
//     box.length=2.5;
//     box.width =3.5;
//     box.height=4.5;
//     box.print();
//     cout <<"Box's dimension is "<< box.dimension()<< endl;
// }



//laboratory work 1
// #include <iostream>
// using namespace std;
// const double PI=3.14159;
// struct Circle {
//     double area;
//     double length;
// };
// Circle circleinfo(const double &radius){
//     Circle result;
//     result.area= PI *radius*radius;
//     result.length= 2*PI*radius;
//     return result;
// }
// int main(){
//     Circle c;
//     double radius;
//     cout << "Enter radius: ";
//     cin>> radius;
//     c=circleinfo(radius);
//     cout << "Circle with radius "<< radius << " has area "<< c.area << " and length "<< c.length << endl;
// }



//laboratory work 2
// #include <iostream>
// #include <string>
// using namespace std;
// int max(int a, int b) {
//     return a > b ? a : b;
// }
// double max(double a, double b, double c) {
//     double max = a;
//     if (b > max) max = b;
//     if (c > max) max = c;
//     return max;
// }
// string max(string a, string b) {
//     return a > b ? a : b;
// }
// char max(char a, char b, char c) {
//     char max = a;
//     if (b > max) max = b;
//     if (c > max) max = c;
//     return max;
// }
// int main() {
//     int n = 45, m = -7;
//     double a = 3.65, b = 75.123, c = 1.23;
//     char p = 'F', q = 'K', r = 'A';
//     string s1, s2;
//     cout << "Enter first string: ";
//     getline(cin, s1);
//     cout << "Enter second string: ";
//     getline(cin, s2);
//     cout << n << " and " << m << " max is " << max(n, m) << endl;
//     cout << a << ", " << b << " and " << c << " max is " << max(a, b, c) << endl;
//     cout << p << ", " << q << " and " << r << " max is " << max(p, q, r) << endl;
//     cout << s1 << " and " << s2 << " max is " << max(s1, s2) << endl;
// }



//laboratory work 3
// #include <iostream>
// using namespace std;
// struct Rectangle{
//     int perimeter;
//     int diagonal;
// };
// Rectangle info(const int &side){
//     Rectangle sq;
//     sq.perimeter= 4*side;
//     sq.diagonal= side*1.414;
//     return sq;
// }
// void rect(const int side,int &perimeter,int &diag){
//     perimeter=4*side;
//     diag= side*1.414;
// }
// int main(){
//     Rectangle rec;
//     int side;
//     cout <<"Enter square's side:";
//     cin >> side;
//     rec=info(side);
//     cout << "Square with side "<< side
//     << " has perimeter "<< rec.perimeter
//     << " and diagonal "<< rec.diagonal << endl;
//     int per,di;
//     rect(side,per,di);
//     cout <<"Enter new side\n";
//     cin >>side;
//     cout << "Square with side "<< side
//     << " has perimeter "<< per
//     << " and diagonal "<< di << endl;
// }



//laboratory work 4
// #include <iostream>
// #include <fstream>
// using namespace std;
// struct Rectangle{
//     double area;
//     double perimeter;
// };
// Rectangle rec(const int &length,const int &width){
//     Rectangle info;
//     info.area= length* width;
//     info.perimeter=2*(length+width);
//     return info;
// }
// int main(){
//     Rectangle r;
//     ifstream fin("Rectangles.txt");
//     int length,width;
//     fin>>length>>width;
//     r=rec(length,width);
//     cout << "First rectangle's with length "<< length
//         << " and width "<< width<< " has area "<< r.area
//         <<" and perimeter "<< r.perimeter<< endl;
//     fin >>length>> width;
//     r=rec(length,width);
//     cout <<"Second rectangle's with length "<< length
//         << " and width "<< width<< " has area "<< r.area
//         <<" and perimeter "<< r.perimeter<< endl;
// }



//laboratory work 5
// #include <iostream>
// #include <fstream>
// using namespace std;
// class Rectangle{
//     public:
//     int length;
//     int width;
//     double Area(){
//         return length*width;
//     }
//     double Perimeter(){
//         return 2*(length+width);
//     }
//     void print(){
//         cout << "Rectangle with length "<<length
//         << " and width "<< width<< " has area "
//         << Area()<< " and perimeter "<< Perimeter()<< endl;
//     }
// };
// int main(){
//     Rectangle rec1,rec2;
//     ifstream fin("Rectangle.txt");
//     fin >> rec1.length>>rec1.width;
//     fin >> rec2.length>>rec2.width;
//     rec1.Perimeter()> rec2.Perimeter() ? rec1.print(): rec2.print();
// }



//laboratory work 6
// #include <iostream>
// #include <string>
// using namespace std;
// class Student{
//     public:
//     string name;
//     string surname;
//     int grade;
//     void print(){
//         cout << "Student "<< name<< " "<< surname 
//         << " has grade "<< grade << endl; 
//     }
// };
// int main(){
//         Student student;
//         cout << "Enter student's information\n";
//         cin >> student.name >> student.surname>>student.grade;
//         student.print();
// }



//laboratory work 7
// #include <iostream>
// using namespace std;
// class Circle{
//     public:
//     double radius;
//     double Area(){
//         return radius*radius*3.14159;
//     }
//     double length(){
//         return 2*radius*3.14159;
//     }
//     void print(){
//         cout<< "Circle with radius "<< radius
//         <<" has area "<< Area()<< " and length "
//         <<length()<< endl;
//     }
// };
// int main(){
//     Circle circ1;
//     circ1.radius=2.5;
//     circ1.print();
//     circ1.radius*=2;
//     circ1.print();
//     Circle circ2;
//     cout << "Enter new radius: ";
//     cin >>circ2.radius;
//     circ2.print();
// }




