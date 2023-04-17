## Organizing Files for Performance

<hr>

- ## Overview

- In this lecture, we continue to focus on file organization, but with a different motivation.
- This time we look at ways to organize or re-organize files in order to improve performance.

<hr>

- ### Ways used to re-organize files in order to improve performance:
  - `Data Compression:` how to make files smaller
  - `Reclaiming space` in files that have undergone deletions and updates
  - `Sorting Files` in order to support binary searching ==> Internal Sorting A better Sorting Method: KeySorting

- #### outlines
  - Data Compression: 
  - Run-length encoding:  
  - Lempel-Ziv (compress and uncompress)

<hr>

- ### Data Compression : An Overview
  - Question: Why do we want to make files smaller?
     - Answer:
        - To use less storage, i.e., saving costs
        - To transmit these files faster, decreasing access time or using the same access time, but with a lower and cheaper bandwidth
        - To process the file sequentially faster. 


- ### Data Compression: Using a Different Notation (Redundancy Compression)
   - Mary Ames
   - Alan Mason
   - 123 Maple
   - 90 Eastgate
   - Stillwater, OK 74075
   - Ada, OK 74820

   - Consider this file containing several fixed-length fields, including LastName, State, and Zipcode.
   - The fixed-length fields structure are good candidates for compression. 

<hr>

- #### For example, when referring to the state field, we used 2 ASCII bytes=16 bits. Was that really necessary?
   - Answer: Since there are only 50 states, we could encode them all with only 6 bits, thus saving 1 byte per state field.

- #### Disadvantages:
  - Not Human-Readable
  - Cost of Encoding/Decoding Time
  - Increased Software Complexity (Encoding/Decoding Module)
  
<hr>

- #### Run-length encoding:  
   - It works as follows:
     - Indicate a special run-length code indicator
     - The pixel value that is repeated 
     - The number of times that the value is repeated ( up to 256 times)

<hr>

![Screenshot from 2023-04-17 17-03-15](https://user-images.githubusercontent.com/105644935/232526434-93414517-030b-4dae-9372-69206b348018.png)


<hr>

- #### Data Compression: Assigning Variable-Length Code
   - Principle:
      - Assign short codes to the most frequent occurring values and long ones to the least frequent ones.
   - The code-size cannot be fully optimized as one wants codes to occur in succession, without delimiters between them, and still be recognized.
   - This is the principle used in the Huffman Coding.


![Screenshot from 2023-04-17 17-05-50](https://user-images.githubusercontent.com/105644935/232527168-56f3df8c-a03c-4249-b6e9-bd7ab65d36d4.png)


<hr>


![Screenshot from 2023-04-17 17-06-23](https://user-images.githubusercontent.com/105644935/232527277-366d0e34-be98-44e6-ad32-45d88a4853e5.png)

<hr>

- ## Data Compression: Assigning Variable-Length Code (Huffman Coding)


![Screenshot from 2023-04-17 17-07-09](https://user-images.githubusercontent.com/105644935/232527502-2cc1172f-49cc-46b2-bc0a-f2c26957727d.png)

<hr>

![Screenshot from 2023-04-17 17-07-48](https://user-images.githubusercontent.com/105644935/232527833-9363feec-1aec-4c2f-9f05-dffa5289caee.png)

<hr>


![Screenshot from 2023-04-17 17-08-28](https://user-images.githubusercontent.com/105644935/232528030-61e13e2a-344a-4df3-a0c8-a304980f8c45.png)
















 
