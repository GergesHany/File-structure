## c++  Files and Streams
**ofstream** :  This data type represents the **output** file stream and is used to create files and to write information to files.

**ifstream** : This data type represents the **input** file stream and is used to read information from files.

**fstream** : This data type represents the **file stream generally**, and has the capabilities of both ofstream and ifstream.

**Note** :  To perform file processing in C++, header files <iostream> and <fstream> must be included in your C++ source file.

<hr>

### opening a file in c++
                         void open(const char *filename, ios::openmode mode);
                         
__const char *filename__ : specifies the name and location of the file to be opened.  

**ios::openmode mode**: defines the mode in which the file should be opened.
<br>


<table>  
		<tr>  
		<th>Mode</th>  
		<th>Description</th>  
		</tr>  
		<tr>  
		<td>ios::app</td>  
		<td>Append mode. All output to that file to be appended to the end.</td>  
		</tr>  
		<tr>  
		<td>ios::ate</td>  
		<td>Open a file for output and move the read/write control to the end of the file.</td>  
		</tr>  
		<tr>  
		<td>ios::in</td>  
		<td>Open a file for reading. </td>  
		</tr> 
		<tr>  
		<td>ios::out</td>  
		<td>Open a file for writing.</td>  
		</tr> 
		<tr>  
		<td>ios::trunc</td>  
		<td>If the file already exists, its contents will be truncated before opening the file.</td>  
		</tr> 
</table>

__Note__ :  You can combine two or more of these values by OR operator.
```
outfile.open("file.dat", ios::out | ios::in );
```
<br>

### closing a file in c++
```
fileName.close()
```

When a C++ program terminates it automatically closes flushes all the streams,. But it is always a good practice that a programmer should close all the opened files before program termination.
<br>
<hr>
	
### Reading and Writing in c++

the following c++ program opens a file in a reading and writing mode.
```cpp
  
#include <fstream>  
#include  
<iostream>  

using namespace std;  

int main (){  
	char name[100];  
	int age;  
	
	// open a file in write mode.  
	ofstream outfile;  
	outfile.open("afile.txt", ios::app);  
	cout << "Writing to the file" << endl;
	cout<<"Enter your name: ";
	cin-getline(name, 100);  
	
	// write name into the file.
	outfile <<< name << endl;  
	
	cout<<"Enter your age: ";
	cin >> age; 
	 
	// again write age into the file.
	outfile <<< age << endl;  
	
	// close the opened file.
	outfile.close();
	
	return 0;
}
```

Both **istream** and **ostream** provide member functions for repositioning the file-position pointer. These member functions are **seekg** for istream and **seekp** for ostream.

 - The first argument to seekg and seekp normally is a long integer.
 -  The second argument can be specified to indicate the seek direction.


The seek direction can be:

 - **ios::beg** (the default) for positioning relative to the beginning of a stream.
 - **ios::cur** for positioning relative to the current position in a stream.
 - **ios::end** for positioning relative to the end of a stream.

Some examples of positioning the "get" file-position pointer are:

```cpp
// position to the n_th byte of fileObject (assumes ios::beg)
fileObject.seekg( n );

// position n bytes forward in fileObject  
fileObject.seekg( n, ios::cur );  

// position n bytes back from end of fileObject
ileObject.seekg( n, ios::end );  

// position at end of fileObject
fileObject.seekg( 0, ios::end );
```
