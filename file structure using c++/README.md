# File-structure


#### File handling is used to store data permanently in a computer. Using file handling we can store our data in secondary memory `Hard disk`. How to achieve the File Handling

- ##### For achieving file handling we need to follow the following steps:
- `STEP 1` Naming a file
- `STEP 2` Opening a file
- `STEP 3` Writing data into the file
- `STEP 4` Reading data from the file
- `STEP 5` Closing a file.

<hr>

## Streams

We give input to the executing program and the execution program gives back the output. The sequence of bytes given as input to the executing program and the sequence of bytes that comes as output from the executing program are called stream. In other words, streams are nothing but the flow of data in a sequence.

The input and output operation between the executing program and the devices like keyboard and monitor are known as `console I/O operation`. The input and output operation between the executing program and files are known as `disk I/O operation`.



The I/O system of C++ contains a set of classes which define the file handling methods. These include ifstream, ofstream and fstream classes. These classes are derived from fstream and from the corresponding iostream class. These classes, designed to manage the disk files, are declared in fstream and therefore we must include this file in any program that uses files.

<hr>

### file handling 
##### in file handling include three files (`fstream`, `iostream`, `ofstream`)

- #### `ofstream` is used to write information to files and create files if they do not exist already 
- #### `ifstream` is used to read information from files 
- #### `fstream` can be used to create files, write information to files, and read information from files



<hr>

### Modes

| Member Constant | Stands For | Access |
| :---: | :---: |  :---:   | 
| in * | input | 	File open for reading: the internal stream buffer supports input operations. |
| out | output | File open for writing: the internal stream buffer supports output operations.|
| binary | binary | Operations are performed in binary mode rather than text. |
| ate | at end	 | The output position starts at the end of the file. |
| app | append | All output operations happen at the end of the file, appending to its existing contents. |
| trunc | truncate | Any contents that existed in the file before it is open are discarded. |

### Default Open Modes

|       |       |
| :---: | :---: |
| ifstream | ios::in |
| ofstream | ios::out |
| fstream  | ios::in | ios::out |

<hr>

### Syntax for some functions in fstream class

```cpp
#include <bits/stdc++.h>
#include <fstream>
using namespace std;


int main(){

  fstream file;
  file.open(); // built in function in fstream class to open a file
  // syntax: file.open(path, file name, extension, open mode)

  file.close(); // built in function in fstream class to close a file
  // syntax: file.close();

  file.is_open(); // built in function in fstream class to check if a file is open or not
  // syntax: file.is_open();

  file.eof(); // built in function in fstream class to check if the end of file is reached or not
  // syntax: file.eof();

  file.write(); // built in function in fstream class to write in a file
  // syntax: file.write((char*)&s, sizeof(s));

  file.read(); // built in function in fstream class to read from a file
  // syntax: file.read((char*)&s, sizeof(s));

  file.put(); // built in function in fstream class to put a character in a file
  // syntax: file.put(ch);

  file.get(); // built in function in fstream class to get a character from a file
  // syntax: file.get(ch);

  file.get(ch, 10); // built in function in fstream class to get a string from a file
  // syntax: file.get(ch, size);

  file.putline(); // built in function in fstream class to put a string in a file
  // syntax: file.putline(ch);

  file.getline(); // built in function in fstream class to get a string from a file
  // syntax: file.getline(ch, size);

    
  return 0;
}  
```

<hr>


### syntax to read the file

```cpp
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

// the class student
class student{
  public:
    int age, id;
    string name;
};

int main(){

  fstream file;
  file.open("Test.txt", ios::in);

  // syntax to read the file
  
  // the variable to store the student
  student s;

  file >> s.name >> s.age >> s.id; // read the student from the file

  cout << s.name << " " << s.age << " " << s.id << "\n"; // print the student

  return 0;
}  
```

<hr>

### syntax to write the student in the file

```cpp
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

// the class student
class student{
  public:
    int age, id;
    string name;
};

int main(){

  fstream file;
  file.open("Test.txt", ios::in);

  // syntax to write the student in the file

  // the variable to store the student
  student s = {20, 1, "Gerges"};
  
  file << s.name << " " << s.age << " " << s.id << "\n"; // write the student in the file


  return 0;
}  
```

<hr>


### [simple project using some information](https://github.com/GergesHany/File-structure/tree/main/file%20structure%20using%20c%2B%2B/student_project)

### The functions in the project is
- `Write student`
- `Read student`
- `Search student`
- `Delete student`
- `Update student`


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
  file.open("Test.txt", ios::app | ios::out); // open the file in append mode and write mode

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
  in.open("Test.txt", ios::in);
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
  in.open("Test.txt", ios::in);

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
  in.open("Test.txt", ios::in);
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

  remove("Test.txt"); // delete the original file
  rename("temp.txt", "Test.txt"); // rename the temp file to the original file name

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
  in.open("Test.txt", ios::in);
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

  remove("Test.txt");
  rename("temp.txt", "Test.txt");

}
```

<hr>

## seekg and seekp functions

```cpp
#include <bits/stdc++.h>
#include <fstream>
using namespace std;


int main(){

  fstream file;
  file.open("Test.txt", ios::in);

  // syntax of the seekg function
  // file.seekg(number of characters, position);


  file.seekg(0, ios::end); // go to the end of the file to get the size of the file 
  // the size of the file is the number of characters in the file 

  int size = file.tellg(); // get the size of the file
  // the tellg function returns the current position in the file
  // the current position is the number of characters from the beginning of the file


  file.seekg(0, ios::beg); // go to the beginning of the file to read the file from the beginning
  
  // the seekg function takes two parameters
  // the first parameter is the number of characters to go from the beginning of the file
  // the second parameter is the position to start from
  // the position can be ios::beg, ios::cur, ios::end
  // ios::beg is the beginning of the file
  // ios::cur is the current position in the file
  // ios::end is the end of the file

  file.seekg(5, ios::beg); // go to the 5th character from the beginning of the file


  // syntax of the seekp function
  // file.seekp(number of characters, position);
  
  file.seekp(0, ios::end); // go to the end of the file to write in the file
  file << "Hello world"; // write in the file

  file.seekp(0, ios::beg); // go to the beginning of the file to write in the file
  file << "Hello world"; // write in the file

  file.seekp(5, ios::beg); // go to the 5th character from the beginning of the file to write in the file
  file << "Hello world"; // write in the file

  file.seekp(5, ios::cur); // go to the 5th character from the current position to write in the file

  file.seekp(-5, ios::cur); // go to the 5th character before the current position to write in the file

  file.seekp(-5, ios::end); // go to the 5th character before the end of the file to write in the file

  file.close();

  return 0;
}  
```

<hr>


























