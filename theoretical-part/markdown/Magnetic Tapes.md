## lecture 4

### Important definitions 

| # | Definition |
| --- | --- |
| 1 | Tapes provide no direct access facility, but very rapid sequential access to data. |
| 2 | Tapes are easy to store and transport and cheaper than disk. |
| 3 | Taped was used to store application data. |
| 4 | Tapes are primarily used as archival storage. Data in tapes are copied to disk. |
| 5 | Tapes are commonly used as backup devices. |
| 6 | Data on tapes is no need for addresses to identify the locations of data on a tape. |
| 7 | On a tape, the logical position of a byte within a file corresponds directly to its physical position relative to the start of the file. |
| 8 | The surface of a typical tape can be seen as a set of parallel tracks each of which is a sequence of bits. |
| 9 | If there are nine tracks, the nine bits that are at corresponding positions in the nine tracks are taken to constitute one byte + a parity bit. |
| 10 | One Byte = a one-bit-wide slice of tape called a frame. |
| 11 | Frames are organized into data blocks + interblock gaps. |
| 12 | The parity bit is not a part of the data, but it is used to check the validity of the data. |
| 13 | A parity bit, or check bit, is a bit added to a string of binary code to ensure that the total number of 1-bits in the string is even or odd. |
| 14 | Parity bits are used as the simplest form of error detection code. |
| 15 | There are two types of parity bits: even parity bit and odd parity bit In the case of even parity:<br>if the number of bits is odd -&gt; count the number of ones<br>if the number of bits is even -&gt; count the number of zeros |
| 17 | Bloking factor is number of records stored in a physical block. |
| 18 | If we increase the blocking factor, we can decrease the number of blocks which decreases the number of gaps. |
| 19 | Effective record density is a general measure of the effect of choosing different block sizes, amount of data that can be stored per inch of tape. |
| 20 | Space utilization is sensitive to the relative sizes of data block and interblock gaps. |
| 21 | Effective recording density: Recording density after taking into account the space used by interblock gaps. |
| 22 | Nominal recording density: Recording density on a tape without taking into account the effects of gaps. |
| 23 | Effective transmission rate: Transmission rate after taking into account the time used to locate and transmit the block of data in which a desired record occurs. |
| 24 | Nominal transmission rate: Transmission rate of a tape without taking into account the effects of such extra operations such interblock gap traversal time. |

<br> <hr>

### Important Rules

| Name | Rule |
| --- | --- |
| b|  physical length of data block = block size (bytes per block) / tape density (bytes of inch) |
| g | length of an interblock gap |
| number of inches required to store a block | b + g |
| n | number of data block |
| s | space requirement for storing the file | n * (b + g) |
| Effective record density | number of bytes per block/number of inches required to store a block |
| Normal Data Transmission Rate | Tape Density (bpi) * Tape Speed (ips) |
| Effective Transmission Rate | (Effective Recording Density) * (Tape Speed) |

<br><hr>

### Disk vs Tape

| Points of Comparison | Disk | Tape |
| --- | --- | --- |
| Used for Secondary Storage | Yes, commonly used for secondary storage | Yes, commonly used for secondary storage |
| Random Access | Yes, can access data randomly and quickly | No, can only access data sequentially |
| Popularity for Secondary Storage | Highly popular and has taken over much of **secondary** storage due to decreased cost of disk and memory storage | Not as popular as disks due to slower access time and higher cost per GB compared to disks (used as **Tertiary** storage)|


