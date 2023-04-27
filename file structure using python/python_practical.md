# python tutorial

**Note :** if you feel you need to practice the basics of python , please see [this](https://www.youtube.com/watch?v=h3VCQjyaLws&list=PLuXY3ddo_8nzrO74UeZQVZOb5-wIS6krJ&ab_channel=Codezilla)

Reading and writing data to files using Python is pretty straightforward. To do this, you must first open files in the appropriate mode. Here’s an example of how to use Python’s “with open(…) as …” pattern to open a text file and read its contents:

```py
with open('data.txt', 'r') as f:
    data = f.read()
```


`open()`  takes a filename and a mode as its arguments.  `r`  opens the file in read only mode. To write data to a file, pass in  `w`  as an argument instead:
```py
with open('data.txt', 'w') as f:
    data = 'some data to be written to the file'
    f.write(data)
```

**Note :** `with` is a built-in function that open the file and close it when you are done. So, you don't need to close your file.

#### Different Modes to Open a File in Python
| Mode | Description |
| --- | --- |
| 'r' | Read mode (default) |
| 'w' | Write mode (truncate file to zero length or create new file) |
| 'x' | Exclusive creation mode (fail if file already exists) |
| 'a' | Append mode (write to end of file or create new file) |
| 'b' | Binary mode (use with 'r', 'w', or 'a' to read or write binary data) |
| 't' | Text mode (default; use with 'r', 'w', or 'a' to read or write text data) |
| '+' | Open for updating (reading and writing) |

<hr>

#### writing a dictionary in the file
you need to import `json` to convert the dict to json format:

```py
import json

details = {'Name': "7amoshka",
		'Age' :20}

with open('convert.txt', 'w') as convert_file:
	convert_file.write(json.dumps(details))
```

#### Reading dictionary from the file
```py
import json

with open('dictionary.txt') as f:
	data = f.read()
	
# reconstructing the data as a dictionary
js = json.loads(data)
print(js)
```

<hr>

#### writing a list in the file
```py
names = ['Jessa', 'Eric', 'Bob']

with open(r'E:/demos/files_demos/account/sales.txt', 'w') as fp:
    for item in names:
        # write each item on a new line
        fp.write("%s\n" % item)
```

#### Reading a the data as a list
```py
with open("file.txt", "r") as file:
	data = file.read()

# replacing end of line('/n') with ' ' and
# splitting the text it further when '.' is seen.
data_into_list = data.replace('\n', ' ').split(".")

# printing the data
print(data_into_list)
```

### it's a quick start in Read/Write in python files , for more please see this [docs](https://www.geeksforgeeks.org/reading-writing-text-files-python/)


