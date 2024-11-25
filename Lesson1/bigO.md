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

### Rule 3. Different terms for input

While calculating for BIG O we should take in account that the inputs we pass through a function may differ in size so we cannot combine them
Anything that happens in the same scope gets multiplied and anything that happens within different scopes get added

### Rule 4. Drop Non Dominants

If we have O(n + n^2) then we can drop o(n) to make the final expression as O(n^2)

> [!NOTE]
> O(n!):-> we are adding a loop for every element present
