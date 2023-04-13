- ### `Key:` a subset of the fields in a record used to identify (uniquely) the record
  - Primary key: a key that uniquely identifies a record.
  - Secondary key: other keys that may be used for search.

<hr>

- ### Not every field is a key (keys correspond to fields, or a combination of fields, that may be used in a search)
- ### Four basic types of file organization:
  - Sequential
  - Indexed
  - Indexed sequential.
  - Hashed
 
<hr>

- #### In all cases, we view a file in a sequence of records. A record is a list of fields. Each field has a data type
- ### File operations:
  - `Typical Operations:` Retrieve a record - `Insert` a record - `Delete` a record – `Modify` a field of a record
  -  `In direct files:` Get a record with a given field value
  -  `In sequential` files: Get the next record

<hr>

- ### Sequential files:
   - Records are `stored contiguously` on the storage device.
   - read from `beginning to end`
   - Organization of records:
     - `Unordered sequential` files are called (pile files).
     - `Sorted sequential` files (records are ordered by some field)

<hr>

- ### Pile files:
  - are a `succession of records`, simply placed one after another with `no additional structure` Records may vary in length.
  - is the `best organization` for operations.
  - such as: Finding averages, min or max, or sum
  - They can be calculated **using double buffering** as we read though the file once.

<hr>

- #### To look up a record, given the value of one or more of its fields, we must search the whole file.
- #### In order to search for a record, I have to search for it in the entire file

- #### `Exhaustive Reading of the File` is Read and process all records (reading order is not important).
- #### When we insert a new record, it will be placed at the end of the file (assuming that we don’t worry about duplicates)

<hr>

- #### Deleting a record:
   - Operations like creating a file, adding records to a file and modifying a record can be performed physically by using basic file operations (open,seek, write, etc.)
   - What happens if records are deleted? There is `no basic operation` that allows us to “remove part of a file”.
   - Record deletion should be `taken care` of by the program responsible for file organization.

<hr>

- #### Record deletion and Storage compaction:
  - Deletion can be done by “marking” a record as deleted (e.g., Place ‘*’ at the beginning of the record
  - The space for the record is not released, but the program `must include logic that checks if record is deleted or not`
  - After a lot of records have been deleted, a special program is used to squeeze the file – this is called `Storage Compaction.`

<hr>

- #### Deleting fixed-length records and reclaiming space dynamically.
   - How to use the space of deleted records for storing records that are added later?
      - Use an `AVAIL LIST`, a linked list of available records
      - A header record (at the beginning of the file) stores the beginning of the AVAIL LIST.
      - When a record is deleted, it is marked as deleted and inserted into AVAIL LIST.
<hr>    
    
- #### Deleting variable length records
   - Use AVAIL LIST as before but `take care of the variable-length difficulties`
   - The records in AVAIL LIST must `store its size as a field.` `Exact byte offset must be used.`
   - Addition of records `must find a large enough record` in `AVAIL LIST`      

<hr>

- #### There are several placement strategies for selecting a record in AVAIL LIST when adding a new record:
  - `First-fit Strategy:` AVAIL LIST is not sorted by size; first record large enough is used for the new record.
  - `Best-fit Strategy:` List is sorted by size. Smallest record large enough is used
  - `Worst-fit strategy:` List is sorted by decreasing order of size; largest record is used; unused space is placed in AVAIL LIST 21 again.

<hr>

### Rules 
- #### `b` is the `total number of blocks` in the file.
- #### If the record is at the `beginning` of the file, then at `least 1 block` is accessed
- #### If the record is at the `end` of the file, then at most `b` blocks are accessed
- #### On average b / 2
- #### (searching) => Time to `find and read a record` in a pile file is => Time to `fetch` one record = (b/2) * effective block transfer time
- #### (Reading all records) => Time for `exhaustive` reading of the file = seek time + rotational delay time + b * time to transfer one block
- #### Time to `read the last block` = seek time + rotational delay time + block transfer time
- #### Time to `insert a new record` = Time to read the last block + 2r

> **Note**
> (2r - block transfer time): `the time to wait for the disk` until it `rotates back to the original position`


> **Note**
> (Block transfer time): the time to `transfer the new record`

- #### Time to `update` a record for `fixed length` records = Time to fetch the record + 2r
- #### Time to `update` a record for `variable length` records = Time to delete the record + time to insert the new one











