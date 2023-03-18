#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

#include <fstream>
using namespace std;
#define ll long long

class student{

  public:
    int age, id;
    string name;
      
};


void write_student(){

  char ch;
  student s;
  fstream file;
  file.open("Test.txt", ios::app | ios::out);
  do{

    cout << "Enter the name: ";
    cin >> s.name;
    cout << "Enter the age: ";
    cin >> s.age;
    cout << "Enter the id: ";
    cin >> s.id;
    file << s.name << " " << s.age << " " << s.id << "\n";
    cout << "Do you want to continue? (y/n): ";;
    cin >> ch;

  }while(ch == 'Y' or ch == 'y');


}


void read_Text(){

  ifstream in;
  char ch, str[10];
  in.open("Test.txt", ios::in);
  if (in.is_open()){

      in >> str;
      cout << str << "\n";

      in.get(ch);
      cout << ch << '\n';

      in.get(str, 10);
      cout << str << '\n';

      in.close();

   }else{
    cout << "can not open the specified file!..\n";
   }

}

int T = 1;

void print_student(student s){
  cout << "Student number #" << T++ << ":   " << "Name : " << s.name << "\t";
  cout << "Age : " << s.age << "\t" << "Id : " << s.id << "\n";
}


bool search_student(int id){

  student s;
  ifstream in;
  in.open("Test.txt", ios::in);
  if (in.is_open()){
      in >> s.name >> s.age >> s.id;
      while (!in.eof()){

        if (s.id == id){
          print_student(s);
          return true;
        }
        in >> s.name >> s.age >> s.id;

      }

      in.close();

    }else{
      cout << "can not open the specified file!..\n";
    }

  return false;

}

void delete_student(int id){

  student s;
  ifstream in;
  ofstream out;
  in.open("Test.txt", ios::in);
  out.open("temp.txt", ios::out | ios::app);
  if (in.is_open()){

    int need_to_delete = 0;
    in >> s.name >> s.age >> s.id;
    while (!in.eof()){

      if (s.id != id){
        out << s.name << " " << s.age << " " << s.id << "\n";
      }else{
        need_to_delete = s.id;
      }
      in >> s.name >> s.age >> s.id;

    }

    if (need_to_delete == 0){
      cout << "This id is not exist!..\n";
    }else{
      cout << "The student with id " << need_to_delete << " is deleted!..\n";
      in.close();
      out.close();
    }

  }else{
    cout << "can not open the specified file!..\n";
  }

  remove("Test.txt");
  rename("temp.txt", "Test.txt");

}

void read_student(){

  student s;
  ifstream in;
  in.open("Test.txt", ios::in);
  if (in.is_open()){

    in >> s.name >> s.age >> s.id;

    while (!in.eof()){
      print_student(s);
      in >> s.name >> s.age >> s.id;

    }

    in.close();

  }else{
    cout << "can not open the specified file!..\n";
  }
}


void update_student(int id){

  student s;
  ifstream in;
  ofstream out;
  in.open("Test.txt", ios::in);
  out.open("temp.txt", ios::out | ios::app);
  if (in.is_open()){

    int need_to_update = 0;
    in >> s.name >> s.age >> s.id;
    while (!in.eof()){

      if (s.id != id){
        out << s.name << " " << s.age << " " << s.id << "\n";
      }else{
        need_to_update = s.id;
        cout << "Enter the new name: ";
        cin >> s.name;
        cout << "Enter the new age: ";
        cin >> s.age;
        cout << "Enter the new id: ";
        cin >> s.id;
        out << s.name << " " << s.age << " " << s.id << "\n";
      }
      in >> s.name >> s.age >> s.id;

    }

    if (need_to_update == 0){
      cout << "This id is not exist!..\n";
    }else{
      cout << "The student with id " << need_to_update << " is updated!..\n";
      in.close();
      out.close();
    }

  }else{
    cout << "can not open the specified file!..\n";
  }

  remove("Test.txt");
  rename("temp.txt", "Test.txt");

}

int main() {

  int choice, id;
  while (true){

    cout << "1- Write student\n";
    cout << "2- Read student\n";
    cout << "3- Search student\n";
    cout << "4- Delete student\n";
    cout << "5- Update student\n";
    cout << "6- Read Text\n";
    cout << "7- Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice){

      case 1:
        write_student();
        break;

      case 2:
        read_student();
        break;

      case 3:
        cout << "Enter the id: ";
        cin >> id;
        if (!search_student(id)){
          cout << "This id is not exist!..\n";
        }
        break;

      case 4:
        cout << "Enter the id: ";
        cin >> id;
        delete_student(id);
        break;

      case 5:
        cout << "Enter the id: ";
        cin >> id;
        update_student(id);
        break;

      case 6:
        read_Text();
        break;

      case 7:
        exit(0);

      default:
        cout << "Invalid choice!..\n";
        break;

    }

  }

  return 0;
}




