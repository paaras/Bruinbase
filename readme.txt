Paaras Chand
paaraschand@gmail.com
904052608

I was only able to implement up to part B of Bruinbase.
It took me a long time to understand the Bruinbase architecture, but after so many nights I think I've finally got a good understanding. Unfortunately I did not have enough time to implement everything.

I added an additional constructor to the BTLeafNode and BTNonLeaf classes.
In addition I added a tuple data structure which holds the RecordId and Key.
This makes it easier to traverse through the buffer because we can set up a tuple pointer which will move to the next tuple value when it is incremented. I also added a private member value of MaxKeys to check for out of bound errors. The tuple in the BTNonLeaf class includes PageId and key values instead of RecordId.
