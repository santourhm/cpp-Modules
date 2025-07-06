# Iterator
An iterator is a generalized pointer. It's an object that "points" to an element inside a container and lets you move through the container's elements.

You, the programmer, just write $++it$. The iterator "knows" how to perform the correct operation for its container. This allows algorithms to be generic.

_container.begin()_ :  Returns an iterator pointing to the first element.
_container.end()_   : Returns an iterator pointing one-past-the-end of the container. This is NOT the last element. It acts as a sentinel.
a loo p             : $for (auto it = c.begin(); it != c.end(); ++it)$ 