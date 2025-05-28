// // // #include<iostream>
// // // using namespace std;
// // // int a;
// // // int b;
// // // float c;
// // // int main(){

// // //     //cout-print, cin - scanf
// // //     cin  >> a;
// // //     cout << "a is: " << a << "\n";
// // //     cout << "c is: " <<endl;
// // //     cin >>  c;
// // //     cout << "c is: "  << c << endl;
// // // }



// // #include <iostream>
// // using namespace std;
// // //using namespace first_var;

// // // first name space
// // namespace first_var
// // {
// // int val = 500;
// // }

// // //Global variable
// // int val = 100;
// // using namespace first_var;
// // int main ()
// // {
// //    // Local variable
// //    int val=200;
// //    cout << ::val <<"\n";
  
// //   return 0;
// // }


// #include <iostream>
// using namespace std;

// // first name space
// namespace first_class
// {
// 	class display_func
// 	{
// 		public:
// 		void display()
// 		 {
// 		 cout<<"display func"<<endl;
// 		 }
// 	};
// }
// using namespace first_class;
// int main ()
// {
//    //first_class::display_func ;
//   //class display_func::display();
//    // obj.display();
  
//   return 0;
// }


#include<iostream>
using namespace std;
int amount=100;
int num=8;
double divv;
int main()
{
	divv = amount / num;
	cout << "avg is:" << divv <<endl ;
		cout << "avg is:" <<static_cast<float>(divv) ;
}