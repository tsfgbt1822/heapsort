#include <cs3050.h>
void heapsort(void *array, 
				size_t nitems, 
				size_t size, 
				int (*CompareFunc)(const void *, const void*))
{
    int i=(nitems/2)-1;
    int root=0;
    for(root;root<=i;i++)
        heapify(array, i, nitems);
}

//create the heap/sort
//array, variable for root, index, size
void heapify(void *array, int root, int nitems)
{
    //sets the largest as the root, and initializes a left and right branch
    int bigind=root
    int l=2*i+1;
    int r=2*i+2;

    //if left branch is larger than the root, set the big as the left branch
    if (Compare(array[1], array[bigind])>0)
        bigind=l;

    if (Compare(array[r], array[big])<0)
        bigind=r;

    //if largest is not root, swap the largest with variable
    if(bigind != root)
    {
        //swap the largest and root values, repeat until the root is the largest
        Swap(array[root], array[bigind]);
        heapify(array, root, nitems);
    }
}
