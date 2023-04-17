- #### An index is a table containing a list of keys associated with a reference field pointing to the record where the information referenced by the key can be found.

- #### `An index` lets you impose order on a file `without rearranging the file`
  - `Data file:` It is not a requirement for the record to be in order 
  - `Index file:` The record must be in order

- #### `A simple index` is simply an array of (key, reference) pairs which is ordered by the field of the file.
    - `Reference:` Stores the address of the record
    - Used to do direct access inside data file.

<hr>
    
- #### You can have different indexes for the same data: multiple access paths.
- #### `Indexing` gives us `keyed access to variable-length record files`
- #### `Index` is called an `access path` on the field
- #### `The index` file occupies `less disk blocks than` the data file because its entries are `much smaller`
- #### Indexes can also be characterized as `dense` or `sparse`
   - `A dense index`: has an index entry for `every search key value` (every record) in the data file.
   -  `A Sparse index`: has an index entry `for only some search` key value (some records) in the data file.
   
<hr>

- #### Types of single level indexes: `Primary index`, `Clustering index`, `Secondary index`
- #### An Example of a Simple Index for Entry-Sequenced Files: We choose to organize the file as a series of variable- length records with a size field preceding each record.

- #### `The fields within each record` are also of `variable-length` but are `separated by delimiters`
- ####  We form a `primary key` by concatenating the record company label code and the record’s ID number. This should form a `unique identifier`
- #### In order to provide `rapid keyed access`, we build a `simple index` with a `key field` associated with a `reference field`
- #### `Reference field` provides the `address of the first byte` of the corresponding data record.
- #### The index may be sorted while the file does not have to be. This means that the data file may be `entry sequenced`: the record occurs in the order they are entered in the file.

<hr>

- #### `The index` is `easier to use than the data file` because
  - it uses `fixed-length records`
  - It is likely to be much `smaller than the data file`

- #### By requiring fixed-length records in the index file, we impose a limit on the size of the primary key field. This could cause problems
- #### The index could `carry more information than` the `key and reference fields` (e.g., we could keep the length of each data file record in the index as well)

<hr>

- #### Assumption: `index is small enough` to be held in memory.
   - `Create` the original empty index and data file.
   -  `Load` the index into memory `before using it`
   -  `Rewrite` the index file from memory `after using it`
   -  `Add` records to the data file and index
   -  `Delete` records from the data file
   -  `Update` records in the data file

- #### The index is represented `as an array of records`
- #### `The loading` into memory can be done `sequentially`, reading `a large number of index records` (which are short) `at once`
- #### What happens `if the index changes`, but its `rewriting does not take place or takes place` incompletely?
   - `Use a mechanism` for indicating whether or not the index is out of date.
   - Have a procedure that `reconstructs the index from the data file` in case it is out of date.

<hr>

- #### When we add a record, both the `data file and the index` should be `updated`
- #### `In the data file`, the record can be `added anywhere` However, the `byte-offset` of the new record should be `saved`
- #### Since the u, the location of the new record does matter
   - we have to `shift all the records` that belong after the one we are inserting to open up space for the new record. However, `this operation is not too costly` as it is performed in memory

- #### `The index record` corresponding to `the data record` being deleted must also be deleted.
- #### `If the update changes the value of the key field`, then both the index and data file may need to be reordered.
- #### `If the update does not affect the key field`, then the index does not need reordering, but the data file may.
   - If the updated record is smaller than the original one, it can be re-written at the same location.
   - If it is larger, then a new spot has to be found for it. Again, the delete/insert solution can be 21 used

<hr>

- #### `If Indexes are too large to hold in memory`, then 
   - `Binary searching requires several seeks` rather than being performed at memory speed.
   - `Index rearrangement requires shifting or sorting records` on secondary storage ==> Extremely time consuming.
   - `Solutions:` You should 
      - Use a `hashed` organization
      - Use a `tree-structured` index (e.g., a B-Tree)

- #### Example
   - Given the following data file Employee (NAME, SSN, Address, JOB, ………………). Suppose that: `record size = 150 bytes`, `Block size =  512 bytes`, `Number of records in the file = 30000 Find number of file blocks`?
      - Solu:
        - Blocking factor = number of records per block = Block size / record size = 512 / 150 = 3 records
        - Number of file blocks = number of records in the file / Blocking factor = 30000 / 3 = 10000

  - For an index on the SSN field. Assume the `SSN field size is 9 bytes`, and the record `pointer size is 7 bytes`
    - Solu:
      -  Index entry size = 9 + 7 = 16 bytes
      -  Blocking factor = 512 / 16 = 32 records
      -  Number of file blocks = 30000 / 32 = 937 blocks
     
     




