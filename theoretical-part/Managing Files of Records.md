- ### `Key:` a subset of the fields in a record used to identify (uniquely) the record
  - Primary key: a key that uniquely identifies a record.
  - Secondary key: other keys that may be used for search.

- ### Not every field is a key (keys correspond to fields, or a combination of fields, that may be used in a search)
- ### Four basic types of file organization:
  - Sequential
  - Indexed
  - Indexed sequential.
  - Hashed

- #### In all cases, we view a file in a sequence of records. A record is a list of fields. Each field has a data type
- ### File operations:
  - `Typical Operations:` Retrieve a record - `Insert` a record - `Delete` a record – `Modify` a field of a record
  -  `In direct files:` Get a record with a given field value
  -  `In sequential` files: Get the next record

- ### Sequential files:
   - Records are `stored contiguously` on the storage device.
   - read from `beginning to end`
   - Organization of records:
     - `Unordered sequential` files are called (pile files).
     - `Sorted sequential` files (records are ordered by some field)

- ### Pile files:
  - are a `succession of records`, simply placed one after another with `no additional structure` Records may vary in length.
  - is the `best organization` for operations.
  - such as: Finding averages, min or max, or sum
  - They can be calculated **using double buffering** as we read though the file once.

- #### To look up a record, given the value of one or more of its fields, we must search the whole file.
- #### In order to search for a record, I have to search for it in the entire file









