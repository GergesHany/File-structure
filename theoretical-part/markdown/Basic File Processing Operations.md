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





















