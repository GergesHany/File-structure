<!DOCTYPE html>
<html>

<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Welcome file</title>
  <link rel="stylesheet" href="https://stackedit.io/style.css" />
</head>

<body class="stackedit">
  <div class="stackedit__html"><h1 id="lecture-3">lecture 3</h1>
<h3 id="important-definitions">Important definitions</h3>

<table>
<thead>
<tr>
<th>#</th>
<th>Definition</th>
</tr>
</thead>
<tbody>
<tr>
<td>1</td>
<td>DASDs make it possible to access the data directly.</td>
</tr>
<tr>
<td>2</td>
<td>Serial devices allow only serial access.</td>
</tr>
<tr>
<td>3</td>
<td>The information stored on a disk is stored on the surface of one or more platters.</td>
</tr>
<tr>
<td>4</td>
<td>Each platter has 2 surfaces and is broken into thousands of tracks.</td>
</tr>
<tr>
<td>5</td>
<td>All the information is stored in successive tracks on the surface of the disk. Starting from zero at the outer side of the platter, the number of tracks goes on increasing to the inner side.</td>
</tr>
<tr>
<td>6</td>
<td>Track starts from zero at the outer side of the platter, the number of tracks goes on increasing to the inner side.</td>
</tr>
<tr>
<td>7</td>
<td>Each track is often divided into a number of sectors which is the smallest addressable portion of a disk.</td>
</tr>
<tr>
<td>8</td>
<td>Sectors are often grouped together to form clusters.</td>
</tr>
<tr>
<td>9</td>
<td>A cluster is the smallest amount of disk space, is also called allocation unit, a fixed number of contiguous sectors. (If there is interleaving these sectors are not physically contiguous)</td>
</tr>
<tr>
<td>10</td>
<td>Once a cluster has been found on a disk, all sectors in that cluster can be accessed without requiring an additional seek (seeking only once).</td>
</tr>
<tr>
<td>11</td>
<td>The size of each cluster is a multiple of the sector size.</td>
</tr>
<tr>
<td>12</td>
<td>The tracks that are directly above and below one another form a cylinder.</td>
</tr>
<tr>
<td>13</td>
<td>When a read statement calls for a particular byte from a disk file, the computer’s operating system finds the correct platter, track and sector, reads the entire sector into a special area in memory called a buffer, and then finds the requested byte within that buffer.</td>
</tr>
<tr>
<td>14</td>
<td>Disk has a number of platters and read/write heads, each read/write head has a separate arm.</td>
</tr>
<tr>
<td>15</td>
<td>All the information on a single cylinder can be accessed without moving the arm that holds the read/write heads.</td>
</tr>
<tr>
<td>16</td>
<td>Moving this arm is called seeking, The arm’s movement is usually the slowest part of reading information from a disk.</td>
</tr>
<tr>
<td>17</td>
<td>logical organization of sectors on a track is that sectors are adjacent, fixed-sized segments of a track.</td>
</tr>
<tr>
<td>18</td>
<td>Physically this organization is not optimal.</td>
</tr>
<tr>
<td>19</td>
<td>If the sectors were physically adjacent, we would miss the start of the next sector while processing the info just read in.</td>
</tr>
<tr>
<td>20</td>
<td>A map of sectors is called the File Allocation Table (FAT).</td>
</tr>
<tr>
<td>21</td>
<td>The FAT containing for each cluster in the file.</td>
</tr>
<tr>
<td>22</td>
<td>The file manager is the part of the operating system responsible for managing files.</td>
</tr>
<tr>
<td>23</td>
<td>The FAT is maintained by the file manager.</td>
</tr>
<tr>
<td>24</td>
<td>All file systems are determined by the number of sectors that the cluster contains.</td>
</tr>
<tr>
<td>25</td>
<td>The use of clusters leads to internal fragmentation.</td>
</tr>
<tr>
<td>26</td>
<td>If the file size is not a multiple of the cluster size, then the last cluster of the file will be partially used.</td>
</tr>
<tr>
<td>27</td>
<td>An extent is a group of contiguous clusters.</td>
</tr>
<tr>
<td>28</td>
<td>If the file is stored in a single extent the seeking is done o</td>
</tr>
<tr>
<td>29.</td>
<td>If the file is stored in a single extent the seeking is done only once (minimum of seeking time).</td>
</tr>
<tr>
<td>30.</td>
<td>If one extent is not enough, then divide the file into more extents.</td>
</tr>
<tr>
<td>31.</td>
<td>Use large cluster size when disks contain large files likely to be processed sequentially.</td>
</tr>
<tr>
<td>32.</td>
<td>Use small cluster size When disks contain small files and/or files likely to be accessed randomly.</td>
</tr>
<tr>
<td>33.</td>
<td>If the records are smaller than the sector size, then if store one record per sector, then there is one access and internal fragmentation (Loss of Space).</td>
</tr>
<tr>
<td>34.</td>
<td>If the records are smaller than the sector size, then if one record may span two sectors, then there is no internal fragmentation and access more than once.</td>
</tr>
<tr>
<td>35.</td>
<td>Rather than being divided into sectors, the disk tracks may be divided into blocks.</td>
</tr>
<tr>
<td>36.</td>
<td>Blocks can be either fixed or variable in length, depending on the requirements of the file designer and the capabilities of the operating system.</td>
</tr>
<tr>
<td>37.</td>
<td>Blocks don’t have the internal fragmentation problem and no record spanning two blocks.</td>
</tr>
<tr>
<td>38.</td>
<td>blocking factor indicates the number of records per block.</td>
</tr>
<tr>
<td>39.</td>
<td>Count subblock contains the number of bytes in a block.</td>
</tr>
<tr>
<td>40.</td>
<td>Key subblock contains the key for the last record in the data subblock.</td>
</tr>
<tr>
<td>41.</td>
<td>Data subblock contains the records in this block.</td>
</tr>
<tr>
<td>42.</td>
<td>Whether using a block or a sector organization, some amount of space on the disk is taken up by non-data overhead.</td>
</tr>
<tr>
<td>43.</td>
<td>Blocks involves subblock + interblock gaps.</td>
</tr>
<tr>
<td>44.</td>
<td>The relative amount of non-data space necessary for a block scheme is higher than for a sector-scheme.</td>
</tr>
<tr>
<td>45.</td>
<td>Seek Time is the time required to move the access arm to the correct cylinder.</td>
</tr>
<tr>
<td>46.</td>
<td>Rotational Delay is the time it takes for the disk to rotate.</td>
</tr>
<tr>
<td>47.</td>
<td>Transfer time is the time it takes to transfer data.</td>
</tr>
</tbody>
</table></div>
</body>

</html>
