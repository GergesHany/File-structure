


## **Rules Lec 3** 
- #### **One platter = 2 surfaces** 
- #### **Number of surfaces = number of tracks per cylinder = number of read/write heads in this disk = number of arms in this disk** 
- #### **Number of Cylinders per disk = number of tracks per surface.** 
- #### **Track Capacity = number of sectors per track \* bytes per sector.** 
- #### **Cylinder Capacity = number of tracks per cylinder \* track capacity**  
- #### **Platter Capacity = track capacity \* number of tracks per surface \* 2** 
- #### **Surface Capacity = track capacity \* number of tracks per surface**  
- #### **Drive Capacity = number of cylinders per disk \* cylinder capacity** 
- #### **Number of sectors per track = track capacity / bytes per sector** 
- #### **Number of sectors per cylinder = number of sectors per track \* number of tracks per cylinder** 
- #### **Number of sectors per surface = number of sectors per track \* number of tracks per surface** 
- #### **Number of sectors per platter = number of sectors per surface \* 2** 
- #### **Number of sectors per disk = number of sectors per track \* number of tracks per surface \* number of surfaces** 
- #### **Number of tracks per platter = number of tracks per surface \* 2** 
- #### **Number of tracks per disk = number of tracks per surface \* number per surfaces** 
- #### **Number of records in sector = bytes of sector / bytes of record** 
- #### **Number of records per cylinder = number of sectors per cylinder \* number of records per sector** 
- #### **Size of data subblock = blocking factor \* record size** 
- #### **Number of bytes in each block = size of data subblock + size of non-data overhead** 
- #### **Transfer time = (Number of Bytes Transferred/ Number of Bytes on a Track) \* Rotation Time** 
- #### **Average Total time = average seek + average rotational delay + transfer time** 

## **Rules Lec 4** 

- #### **b = physical length of data block = block size (bytes per block) / tape density (bytes of inch)** 
- #### **g = length of an interblock gap** 
- #### **number of inches required to store a block = b + g** 
- #### **n = number of data block** 
- #### **s = space requirement for storing the file = n \* (b + g)** 
- #### **Effective record density = number of bytes per block/number of inches required to store a block**  
- #### **Normal Data Transmission Rate= Tape Density (bpi) \* Tape Speed (ips)** 
- #### **Effective Transmission Rate= (Effective Recording Density) \* (Tape Speed)** 

## **Rules Lec 8** 

- #### b is the **total number of blocks** in the file. 
- #### If the record is at the **beginning** of the file, then at least **1** block is accessed. 
- #### If the record is at the **end** of the file, then at most **b** blocks are accessed. 
- #### On average **b/2** 
- #### **time to find and read a record in a pile file is** 
  - **Time to fetch one record = (b/2) \* effective block transfer time** 

- #### **Time for exhaustive reading of the file = seek time + rotational delay time + b \* time to transfer one block** - ####
- #### **Time to read the last block**   **= seek time + rotational delay time + block transfer time****  
- #### **Time to insert a new record**   **=** **Time to read the last block**   **+**  **2r** 
   - **(2r - block transfer time)**: **the time to wait for the disk until it rotates back to the original position.**  
   - **(Block transfer time)**: **the time to transfer the new record.** 
- #### **Time to update a record for fixed length records =** **Time to fetch the record**  **+**  **2r**  
- #### **Time to update a record for variable length records =** **Time to delete the record + time to insert the new one** 



<br><hr>

## Mina`s video

https://github.com/GergesHany/File-structure/assets/105644935/dc8b47e2-1420-40f4-b6f1-8e494a716b18


<br><hr>


## Toqaa`s video

https://github.com/GergesHany/File-structure/assets/105644935/327f44a2-f9f3-4822-895d-ae06435165a9

