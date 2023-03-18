### class student 
```cpp
class student{

  public:
    int age, id;
    string name;

};
```

<hr>

### Write student
```cpp
// the function to write the student in the file
void write_student(){

  char ch;
  student s; // the object of the class student
  fstream file; // the file object
  file.open("Student.txt", ios::app | ios::out); // open the file in append mode and write mode

  // the loop to write the student in the file
  // the loop will continue until the user enter n or N
  // the loop will ask the user to enter the name, age and id of the student
  // then the loop will write the student in the file

  do{

    cout << "Enter the name: ";
    cin >> s.name; // read the name of the student
    cout << "Enter the age: ";
    cin >> s.age; // read the age of the student
    cout << "Enter the id: ";
    cin >> s.id; // read the id of the student
    file << s.name << " " << s.age << " " << s.id << "\n"; // write the student in the file
    cout << "Do you want to continue? (y/n): ";;

    cin >> ch; // read the user choice to continue or not

  }while(ch == 'Y' or ch == 'y'); // the loop will continue until the user enter n or N

  cout << '\n';

}
```

<hr>

### Read student

```cpp
int T = 1; // the variable to print the student number

// the function to print the student
void print_student(student s){
  cout << "Student number #" << T++ << ":   " << "Name : " << s.name << "\t";
  cout << "Age : " << s.age << "\t" << "Id : " << s.id << "\n";
}


// the function to read the student from the file
void read_student(){

  student s;
  ifstream in;
  in.open("Student.txt", ios::in);
  if (in.is_open()){

    in >> s.name >> s.age >> s.id;

    while (!in.eof()){
      print_student(s); // call the function to print the student
      in >> s.name >> s.age >> s.id;
    }

    in.close();

  }else{
    cout << "can not open the specified file!..\n";
  }
}
```

<hr>

### Search student

```cpp
// the function to search for the student in the file
bool search_student(int id){

  student s;
  ifstream in;
  in.open("Student.txt", ios::in);

  if (in.is_open()){ // check if the file is opened or not
      // the loop will read the student from the file
      in >> s.name >> s.age >> s.id;

      while (!in.eof()){ // the loop will continue until the end of the file

        // check if the id of the student is equal to the id that the user entered or not
        if (s.id == id){
          // if the id is equal to the id that the user entered then print the student
          print_student(s);
          return true; // return true to indicate that the student is found
        }
        // read the next student from the file
        in >> s.name >> s.age >> s.id;
      }

      in.close();

    }else{ // if the file is not opened then print the message
      cout << "can not open the specified file!..\n";
    }

  cout << "The student with id " << id << " is not found!..\n";
  return false; // return false to indicate that the student is not found
}
```
<hr>

### Delete student

```cpp
// the function to delete the student from the file
void delete_student(int id){

  student s;
  ifstream in; // the input file object
  ofstream out; // the output file object
  in.open("Student.txt", ios::in);
  out.open("temp.txt", ios::out | ios::app);

  // in the following code we will read the student from the file and write the student in the temp file
  // except the student that the user want to delete
  // then we will delete the original file and rename the temp file to the original file
  // so the student will be deleted from the file

  if (in.is_open()){

    bool is_found = false;
    in >> s.name >> s.age >> s.id;
    while (!in.eof()){

      if (s.id != id){
        out << s.name << " " << s.age << " " << s.id << "\n";
      }else{
        is_found = true;
      }
      in >> s.name >> s.age >> s.id;

    }

    // if the student is not found then print the message
    if (is_found == false){
      cout << "This id is not exist!..\n";
    }else{
      // if the student is found then print the message
      cout << "The student with id " << id << " is deleted!..\n";
      in.close();
      out.close();
    }

  }else{
    cout << "can not open the specified file!..\n";
  }

  remove("Student.txt"); // delete the original file
  rename("temp.txt", "Student.txt"); // rename the temp file to the original file name

}
```

<hr>

## Update student

```cpp
// the function to update the student in the file
void update_student(int id){

  student s;
  ifstream in;
  ofstream out;
  in.open("Student.txt", ios::in);
  out.open("temp.txt", ios::out | ios::app);

  // in the following code we will read the student from the file and write the student in the temp file
  // except the student that the user want to update
  // then we will delete the original file and rename the temp file to the original file
  // so the student will be updated in the file
  // then we will add the new student in the file

  if (in.is_open()){

    int is_found = false;
    in >> s.name >> s.age >> s.id;
    while (!in.eof()){

      if (s.id != id){
        out << s.name << " " << s.age << " " << s.id << "\n";
      }else{
        is_found = true;
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

    if (is_found == false){
      cout << "This id is not exist!..\n";
    }else{
      cout << "The student with id " << id << " is updated!..\n";
      in.close();
      out.close();
    }

  }else{
    cout << "can not open the specified file!..\n";
  }

  remove("Student.txt");
  rename("temp.txt", "Student.txt");

}
```
