# Basic File Processing Operations 

- #### `Physical File:` A collection of bytes stored on a disk or tape.
- #### `Logical File:` A channel (like a telephone line) that hides the details of the file’s location and physical format to the program.
- #### `iostream` standard library , which provides `cin and cout` methods for reading from standard `input and writing` to standard output respectively. 
- #### `Fstream` is used to `read and write` from a file you require another standard C++ library, defines `three new data types`.
- #### fstreams defines three new `data types` :

<hr>

| Data Type | Description |
| :---: | :---: |
| ofstream | represents the output file stream. used to create files and to write information to files. |
| ifstream | represents the input file stream. used to read information from files. |
| fstream | represents the file stream generally. has the capabilities of both ofstream and ifstream (Can create files, write information to files, and read information from files) |


<hr>

- #### To perform file processing in C++, `header files <iostream> and <fsteam>` must be included in your C++ source file
- #### A file must be opened before you can read from it or write to it
- #### standard syntax for open () function is

```bash
void open (const char *filename, ios::openmode mode);

const char * filename specifies the name and location of the file to be opened

ios::openmode mode defines the mode in which the file should be opened
``` 

<hr>

| Data Type | Description |
| :---: | :---: |
| ios::app | `Append` mode. All output to that file to be appended to the end.  |
| ios::ate | `Open a file` for output and move the read/write control to the end of the file  |
| ios::in | Open a file for `reading` |
| ios::out | Open a file for `writing` |
| ios::trunc | If the file already exists, its contents will be truncated before opening the file. |


<hr>

- #### If you want to open a file for `reading` and `writing` purposes, the following will be the syntax

```bash
fstream outfile; 
outfile.open("file.dat", ios::out | ios::in);
```

- #### When a C++ program terminates it `automatically closes`, flushes all the streams, releases all the allocated memory and closes all the opened files.
- #### The following is the `standard syntax for close () function`, which is a member of fstream, ifstream, and ofstream objects. `void close ();`
- #### You can use an `ofstream or fstream` object instead of the `cout` object
- #### You can use an `ifstream or fstream` object instead of the `cin` object.
- #### Both istream and ostream provide member functions for repositioning the file-position pointer, are `seekg ("seek get") for istream` and `seekp ("seek put") for ostream.`

- #### The first argument to `seekg and seekp` normally is a `long integer` 
- #### A second argument can be `specified to indicate the seek direction`.
- #### The seek direction can be:

| Data Type | Description |
| :---: | :---: |
| ios::beg | for positioning relative `to the beginning` of a stream.  |
| ios::cur | for positioning relative `to the current position` in a stream  |
| ios::end | for positioning relative to the `end` of a stream  |


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




















