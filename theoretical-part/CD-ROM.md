## **(**CD-ROM**)**

> 1.**A single disc** can [hold more than 600 megabytes of
> data]{.underline}.

<hr>

> 2.[Data is encoded and read]{.underline} optically with a **laser
> beam.**

<hr>

> 3.**CD-ROM** is [read only]{.underline} (or [write once]{.underline}).
> i.e., once [it has been recorded]{.underline}; [it can't be
> changed.]{.underline} 

<hr>

> 4.**CD-ROM** is a [publishing
> medium]{.underline} [rather than a data storag]{.underline}e and
> retrieval like magnetic disks. 

<hr>

> 5.**CD-ROM** Strengths: [High storage
> capacity]{.underline}, [inexpensive price]{.underline},
> [durability]{.underline}.
>
> 6.**CD-ROM** Weaknesses: extremely [slow seek]{.underline}
> [performance]{.underline} (between l/2 a second to a second)
>
> ==\> Intelligent File Structures are critical.
>
> 7.**CD-ROM** is a [descendent of CD Audios]{.underline}.
>
> 8.Listening to music is [sequential]{.underline} and does [not require
> fast random access to data]{.underline}.
>
> 9.**CD-ROMs** are stamped from a [glass master disk]{.underline} which
> has a nickel coating [that is changed by]{.underline} the **laser
> beam**. 10.When the coating is developed, [the areas hit by the laser
> beam turn into]{.underline} **pits** along the track followed by the
> beam.
>
> 11.[The smooth unchanged areas between the pits]{.underline} are
> called **lands**.
>
> 12.**Digital data** is represented as a [series of Pits and
> Lands]{.underline}.
>
> 13.**Pit =** a [little depression]{.underline}, forming a [lower
> level]{.underline} in the track. رزيللا عاعشب هأرقلا دنع ثدحت هرفح يه
> 14.**Land =** the [part between pits]{.underline}, or the [upper
> levels]{.underline} in the track.
>
> 15.When we read the stamped copy of the disk: We focus a beam of laser
> light on the track as it moves under the **optical pickup**.
>
> 16.**The pits** [scatter the light]{.underline}, but t**he lands**
> [reflect most of it]{.underline}, back to the pickup.
>
> 17.This alternating pattern of [high-intensity and
> low-intensity]{.underline} **reflected light** is the [signal used to
> reconstruct the]{.underline} [original]{.underline} digital
> information.
>
> 18.**1's** is represented by the [transition from pit to land and back
> again.]{.underline}
>
> 19.**0'**s is represented by the [amount of time between
> transitions.]{.underline}
>
> 20.The [longer between transitions]{.underline}, [the more
> 0]{.underline} s we have. رافصلاا ددع داز تلااقتنلاا نيب تقولا داز
> املك
>
> Note:
>
> it is not possible to have 2 adjacent
>
> a Because of physical limitations, there must be at least two 0 s
> between any pair of ls.
>
> 21.Raw patterns of **1 s** and **0**s must be translated to get the
> 8-bit patterns of ls and 0s that [form the]{.underline} [bytes of the
> original data.]{.underline}


> 22.**EFM encoding** (Eight to Fourteen Modulations) t[urns the
> original 8 bits of data into I4 expanded bits]{.underline} that can be
> [represented in the pits and lands on the disk]{.underline}.
>
> 23.Since **0 s** are [represented by the length of time between
> transition]{.underline}, the [disk must be rotated at a
> precise]{.underline} and [constant speed]{.underline}.
>
> 24.This affects the CD-ROM drive's [ability to seek
> quickly.]{.underline}
>
> **25.**[A key assembly]{.underline} in a compact disc player is **the
> optical pick-up assembly.**
>
> **26.The optical pick-up** is situated on rails so that it can move
> back and forth underneath the compact disc. 27.**The optical pick-up**
> works by [directing a laser beam]{.underline} at the CD, if the laser
> hits land, the reflected light then travels to the **photodiode**,
> which **generates an [electrical]{.underline} signal.**


> **28.**ln turn, the signal moves to the CD player\'s **circuit board**
> to **generate the [original]{.underline} signal.**
>
> 29.The space on a computer disk is arranged into individually
> addressable areas called **sectors.**
>
> 30.There are [two basic methods for arranging these sectors on a
> disk]{.underline}: **constant angular velocity (CAV)** and **constant
> linear velocity (CLV)**\
> **31.CAV:** Sectors are placed in [concentric rings]{.underline}
> (called **tracks**) of **[equal angle per sector]{.underline}.**
>
> 32.**CIV:** Sectors are places in a [spiral]{.underline} with the
> [physical length of sectors]{.underline} along the disk kept constant
> instead of the angle.
>
> 33.**[Disks]{.underline} arranged into discrete tracks** (including
> floppy discs\_ DVDs, and hard drives) are [CAV disks]{.underline}:\
> 34.**The CAV disk spins** at a [fixed rat]{.underline}e. This means
> that [sectors at the outside of the disk pass under the
> pick-up]{.underline} [much faster than those at the
> center]{.underline}, and thus the data is spread out more. These
> wastes physical space on the disc.
>
> 35.**[CD_ROMs]{.underline}** have a [single, spiral track and are CLV
> disks.]{.underline}
>
> 36.**CD-ROMs** rotate at a [constant linear velocity]{.underline} of
> about one **[meter per second]{.underline}.** This requires that the
> (CD-ROM turns slower as the read head moves to the outer edge of the
> disk.
>
> 37.**The CLV format** is [responsible]{.underline}, in [large
> part]{.underline}, for the [poor seeking performance]{.underline} of
> CD-ROM Drives: There is [no]{.underline} [straightforward way to jump
> to a location]{.underline}. [Part of the problem is the need to change
> rotational speed]{.underline}.
>
> 38.To read the address info that is stored on the disk along with the
> user\'s data, we need to be moving the data under the optical pick up
> at the correct speed. But to know how to adjust the speed, we need to
> be able to read the address info, so we know where we are.
>
> 39.How do we break this loop? By guessing and through **trial and
> error** ==\> [Slows down performance]{.underline}.
>
> 40.**In Stream Files**, the information is written as a [stream of
> bytes containing no added information,]{.underline} [Data
> semantics]{.underline} [is lost]{.underline}.
>
> 41.[The basic logical unit of data]{.underline} is the **field** which
> [contains a single data value]{.underline}.
>
> 42.**The Field** is the [smallest logically meaningful unit of
> information]{.underline} in a file.
>
> 43.**Fields** are [organized into aggregates,]{.underline} either as
> many copies of a [single field]{.underline} (an **array**) or as a
> [list of differen]{.underline}t fields (a **record**)\
> 44.**Object is** [record is stored in memory]{.underline}.
>
> **45.Members** are [record is stored in Fields.]{.underline}
>
> 46.**A record** can be [defined as a set of fields]{.underline} that
> belong together when the file is viewed in terms of a higher level of
> organization.
>
> 47.**The term object** refers [to data residing in
> memory]{.underline}, and **the term record** refers [to data residing
> in file]{.underline}. 48.**Fixed-length records & Variable-length
> records** are methods for organizing records in a file.
>
> 49.**In Fixed-length records:** Requiring that the records be a
> [predictable number of bytes]{.underline} in length.
>
> 50.**In Variable-length records:** Requiring that the records be a
 [predictable number of fields]{.underline} in length.
>
> 51.Use an index file to keep track of record addresses: The index file
> keeps the byte offset for each record; this allows us to search the
> index (which has fixed length records) in order to discover the
> beginning of the record.



+-----------------------+-----------------------+-----------------------+
|                       | **CD-ROM**            | **Magnetic Disks**    |
+=======================+=======================+=======================+
| > **Ex:**             | > **CLV** (Constant   | > **CAV** (Constant   |
|                       | > Linear Velocity).   | > Angular Velocity)   |
+-----------------------+-----------------------+-----------------------+
| > Shape it            | > Sectors organized   | > Sectors organized   |
|                       | > along a             | > in **[concentric    |
|                       | > **[s                | >                     |
|                       | piral]{.underline}**. | track]{.underline}**. |
+-----------------------+-----------------------+-----------------------+
| > Length              | > Sectors have **the  | > Sectors have **the  |
|                       | > same                | > same                |
|                       | >                     | >                     |
|                       |  [linear]{.underline} | [Angular]{.underline} |
|                       | > length.**           | > length.**           |
+-----------------------+-----------------------+-----------------------+


+-----------------------+-----------------------+-----------------------+
|                       | > (Data packed at its | > (Data written       |
|                       | > **max density**     | > **[less densely in  |
|                       | > permitted)          | > the outer           |
|                       |                       | > t                   |
|                       |                       | racks)]{.underline}** |
+=======================+=======================+=======================+
| > Advantage           | > It                  | > Operates at         |
|                       | > *                   | > **[constant speed,  |
|                       | *[uses]{.underline}** | > timing marks to     |
|                       | > up all storage      | >                     |
|                       | > **[avai             |  delimit]{.underline} |
|                       | lable]{.underline}**. | > [t                  |
|                       |                       | racks]{.underline}**. |
+-----------------------+-----------------------+-----------------------+
| > Disadvantage        | > Must **[change      | > It **[doesn't       |
|                       | > rotational          | > use]{.underline}**  |
|                       | >                     | > up all the storage  |
|                       |  speed]{.underline}** | > **[avai             |
|                       | > when seeking        | lable]{.underline}**. |
|                       | > (slower towards the |                       |
|                       | > outside)            |                       |
+-----------------------+-----------------------+-----------------------+

+-----------------------+-----------------------+-----------------------+
| > **Types**           | **Advantages**        | **Disadvantages**     |
+=======================+=======================+=======================+
| > Fixed               | > Easy to **read &    | > **Waste space**     |
|                       | > store.**            | > with **padding**.   |
+-----------------------+-----------------------+-----------------------+
| With length indicator | > Easy to **jump      | > **Long fields       |
|                       | > ahead to the end of | > require more than 1 |
|                       | > the field**.        | > byte** to store     |
|                       |                       | > length (**when max  |
|                       |                       | > size is \> 256**)   |
+-----------------------+-----------------------+-----------------------+
| > Delimited Fields    | May **Waste less      | > **Must check every  |
|                       | space** than with     | > byte of field**     |
|                       | length-based          | > against the         |
|                       |                       | > delinter            |
+-----------------------+-----------------------+-----------------------+
| > keyword             | > **Fields are        | > **Waste space**     |
|                       | > self-describing**,  | > with **keywords**   |
|                       | > **allowing for      |                       |
|                       | > missing fields.**   |                       |
+-----------------------+-----------------------+-----------------------+

+-----------------------+-----------------------+-----------------------+
| > **Type**            | > **Advantages**      | > **Disadvantages**   |
+=======================+=======================+=======================+
| > Fixed length record | > Easy to **jump to   | > **Waste space**     |
|                       | > the i-th** record.  | > with padding.       |
+-----------------------+-----------------------+-----------------------+
| > Variable-length     | > **Saves space**     | > **Cannot jump to    |
| > record              | > when record sizes   | > the i-th** record,  |
|                       | > are diverse         | > unless through an   |
|                       |                       | > index file.         |
+-----------------------+-----------------------+-----------------------+
