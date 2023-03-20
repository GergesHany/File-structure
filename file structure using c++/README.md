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

### syntax to write in the file

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


## [simple project using file structure](https://github.com/GergesHany/File-structure/tree/main/file%20structure%20using%20c%2B%2B/student_project)

### The functions in the project is
- `Write student`
- `Read student`
- `Search student`
- `Delete student`
- `Update student`

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


## file flags
```cpp
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main(){

  fstream file("Students.txt", ios::in | ios::out | ios::binary);

  // file flags


  // 1 - file.is_open() -> check if the file is open
  // syntax: file.is_open()
  // return: true if the file is open, false if the file is not open
  if(file.is_open()){
    cout << "The file is open" << "\n";
  }else{
    cout << "The file is not open" << "\n";
  }

  // 2 - file.eof() -> check if the file is at the end
  // syntax: file.eof()
  // return: true if the file is at the end, false if the file is not at the end


  if(file.eof()){
    cout << "The file is at the end" << "\n";
  }else{
    cout << "The file is not at the end" << "\n";
  }
  
  // 3 - file.fail() -> check if the file is failed
  // syntax: file.fail()
  // return: true if the file is failed, false if the file is not failed
  // the file is failed if the file is failed to read or write from the file or (the user enter a wrong data)


  if(file.fail()){
    cout << "The file is failed" << "\n";
  }else{
    cout << "The file is not failed" << "\n";
  }


  // 4 - file.bad() -> check if the file is bad
  // syntax: file.bad()
  // return: true if the file is bad, false if the file is not bad
  // the file is bad if the file is failed to can read or write from the file

  if(file.bad()){
    cout << "The file is bad" << "\n";
  }else{
    cout << "The file is not bad" << "\n";
  }


  // 5 - file.good() -> check if the file is good
  // syntax: file.good()
  // return: true if the file is good, false if the file is not good
  // the file is good if the file (is not failed and not bad and not at the end)

  if(file.good()){
    cout << "The file is good" << "\n";
  }else{
    cout << "The file is not good" << "\n";
  }

  // 6 - file.clear() -> clear the file flags and set the file to good
  // syntax: file.clear()
  // return: void

  file.clear();

  
  return 0;
}  
```























