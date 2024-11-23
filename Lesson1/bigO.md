# What is a good code?

1. Readable
2. Scalable --> BIG O gives us idea about scalability of a software

> [!NOTE]
> O(n):-> means that it has a linear time complexity.... if we increase the number of elements then the number of operations will increase proportionally to it.
> O(1):-> Constant time.... no matter how much we increase the number of elements the number of operations will remain the same

## Rules of BIG 0 :->

### Rule 1. Worst Case:->

While calculating for BIG O always search for the worst case possible

### Rule 2. Remove Constants:->

While calculating for BIG O we can ignore terms like O(1000) and we can make O(n/2) or O(2n) -> O(n)
