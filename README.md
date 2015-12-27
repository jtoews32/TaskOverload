# TaskOverload

Meant to show what happens when FreeRTOS runs out of heap space.

Allocates a total of 10,000 bytes of heap space

Creates a new FreeRTOS task every 4 seconds until presumably on the heapspace is used up at 
which point the program will freeze.


# TaskOverload
