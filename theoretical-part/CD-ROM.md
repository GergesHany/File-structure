## **CD-ROM** 

- #### `A single disc` can hold more than 600 megabytes of data. 
- ####  Data is encoded and read optically with a `laser beam.` 
- #### `CD-ROM` is read only (or write once). i.e., once it has been recorded; it can’t be changed. 
- #### `CD-ROM` is a publishing medium rather than a data storage and retrieval like magnetic disks. 
- #### `CD-ROM` Strengths: High storage capacity, inexpensive price, durability. 
- #### `CD-ROM` Weaknesses: extremely slow seek performance (between l/2 a second to a second) 

<hr>

## Intelligent File Structures are critical. 

- ####  `CD-ROM` is a descendent of CD Audios. 
- ####  Listening to music is sequential and does not require fast random access to data. 
- ####  `CD-ROMs` are stamped from a glass master disk which has a nickel coating that is changed by the `laser beam`. 
- ####  When the coating is developed, the areas hit by the laser beam turn into `pits` along the track followed by the beam. 
- ####  The smooth unchanged areas between the pits are called `lands`. 
- ####  `Digital data` is represented as a series of Pits and Lands. 
- ####  `Pit ` a little depression, forming a lower level in the track.  
- ####  `Land` the part between pits, or the upper levels in the track. 
- ####  When we read the stamped copy of the disk: We focus a beam of laser light on the track as it moves under the `optical pickup`. 
- #### `The pits` scatter the light, but t`he lands` reflect most of it, back to the pickup. 
- ####  This alternating pattern of high-intensity and low-intensity `reflected light` is the signal used to reconstruct the original digital information. 
- #### `1’s` is represented by the transition from pit to land and back again. 
- #### `0’s` is represented by the amount of time between transitions. 
- ####  The longer between transitions, the more 0 s we have 

<hr>

- ####  Raw patterns of `1 s` and `0`s must be translated to  get the 8-bit patterns of ls and 0s that form the  bytes of the original data. 
- #### `EFM encoding` (Eight to Fourteen Modulations) turns the original 8 bits of data into I4 expanded bits that can be represented in the pits and lands on the disk. 
- #### Since `0 s` are represented by the length of time between transition, the disk must be rotated at a precise and constant speed. 
- #### This affects the CD-ROM drive’s ability to seek quickly. 
- #### A key assembly in a compact disc player is `the optical pick-up assembly.` 
- #### `The optical pick-up` is situated on rails so that it can move back and forth underneath the compact disc 
- #### `The optical pick-up` works by directing a laser beam at the CD, if the laser hits land, the reflected light then travels to the `photodiode`,  which `generates an electrical signal.` 

<hr>

- #### ln turn, the signal moves to the CD player's `circuit board` to `generate the original signal.` 
- #### The space on a computer disk is arranged into individually addressable areas called `sectors.` 
- #### There are two basic methods for arranging these sectors on a disk: `constant angular velocity (CAV)` and `constant linear velocity (CLV)` 
- #### `CAV:` Sectors are placed in concentric rings (called `tracks`) of `equal angle per sector` 
- #### `CIV:` Sectors are places in a spiral with the physical length of sectors along the disk kept constant instead of the angle. 
- #### `Disks arranged into discrete tracks** (including floppy discs\_ DVDs, and hard drives) are CAV disks: 
- #### `The CAV disk spins` at a fixed rate. This means that sectors at the outside of the disk pass under the pick-up much faster than those at the center, and thus the data is spread out more. These wastes physical space on the disc. 
- #### `CD\_ROMs` have a single, spiral track and are CLV disks. 
- #### `CD-ROMs` rotate at a constant linear velocity of about one `meter per second` This requires that the (CD-ROM turns slower as the read head moves to the outer edge of the disk. 
- #### `The CLV format` is responsible, in large part, for the poor seeking performance of CD-ROM Drives: There is no straightforward way to jump to a location. Part of the problem is the need to change rotational speed. 
- #### To read the address info that is stored on the disk along with the user's data, we need to be moving the data under the optical pick up at the correct speed. But to know how to adjust the speed, we need to be able to read the address info, so we know where we are.  
- #### How do we break this loop? By guessing and through `trial and error` ==> Slows down performance. 
- #### `In Stream Files`, the information is written as a stream of bytes containing no added information, Data semantics is lost. 
- #### The basic logical unit of data is the `field` which contains a single data value. 
- #### `The Field` is the smallest logically meaningful unit of information in a file. 
- #### `Fields` are organized into aggregates, either as many copies of a single field (an `array`) or as a list of different fields (a `record`) 
- #### `Object is` record is stored in memory. 
- #### `Members` are record is stored in Fields 
- #### `A record` can be defined as a set of fields that belong together when the file is viewed in terms of a higher level of organization. 
- #### `The term object` refers to data residing in memory, and `the term record` refers to data residing in file. 
- #### `Fixed-length records & Variable-length records` are methods for organizing records in a file. 
- #### `In Fixed-length records:` Requiring that the records be a predictable number of bytes in length. 
- #### `In Variable-length records:` Requiring that the records be a predictable number of fields in length. 
- #### Use an index file to keep track of record addresses: The index file keeps the byte offset for each record; this allows us to search the index (which has fixed length records) in order to discover the beginning of the record. 

<hr>


||**CD-ROM** |**Magnetic Disks** |
| :- | - | - |
|**Ex:** |**CLV** (Constant Linear Velocity). |**CAV** (Constant Angular Velocity) |
|Shape it |Sectors organized along a **spiral**. |Sectors organized in **concentric track**. |
|Length  |Sectors have **the same linear length.** |Sectors have **the same Angular length.** |

<hr>

||(Data packed at its **max density** permitted) |(Data written **less densely in the outer tracks)** |
| :- | - | - |
|Advantage |It **uses** up all storage **available**. |Operates at **constant speed, timing marks to delimit tracks**. |
|Disadvantage |Must **change rotational speed** when seeking (slower towards the outside) |It **doesn’t use** up all the storage **available**. |

<hr>

|**Types** |**Advantages** |**Disadvantages**  |
| - | - | - |
|Fixed  |Easy to **read & store.**  |**Waste space** with **padding**. |
|With length indicator |Easy to **jump ahead to the end of the field**. |**Long fields require more than 1 byte** to store length (**when max size is > 256**) |
|Delimited Fields |May **Waste less space** than with length-based |**Must check every byte of field** against the delinter |
|keyword |**Fields are self-describing**, **allowing for missing fields.** |**Waste space** with **keywords** |

<hr>

|**Type** |**Advantages** |**Disadvantages** |
| - | - | - |
|Fixed length record |Easy to **jump to the i-th** record. |**Waste space** with padding. |
|Variable-length record |**Saves space** when record sizes are diverse |**Cannot jump to the i-th** record, unless through an index file. |
