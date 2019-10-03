<h1>Week 1: Python Basics</h1>



<h2>Types</h2>

A type is how Python represents different types of data. They can be integers like 11, real numbers like 21.213, they can even be words. Integers, real numbers, and words can be expressed as different data types. You can change the type of the expression in Python, this is called typecasting. You can convert an int to a float. For example:

```python
float(2) # 2.0

# Casting a string into a int
int("1") # 1

# Casting a boolean
int(True) # 1
```

A Boolean can take on two values. The first value is True, just remember we use an uppercase T. Boolean values can also be False with an uppercase F. If we cast a Boolean False to an integer or float, we get a 0. If you cast a 1 to a Boolean, you get a True. Similarly, if you cast a 0 to a Boolean, you get a False.


<h2>Expressions and Variables</h2>

Expressions describe a type of operation the computers perform. Expressions are operations the python performs, for example, basic arithmetic operations like adding multiple numbers.

```python
25 / 5 # 5.0
25 // 5 # 5
```

We can use variables to store values.


<h2>String Operations</h2>

A  string is a sequence of characters. A string is contained within two quotes. You could also use single quotes.

```python
name = "Mukesh"
name = 'Mukesh'

# Indexing in String:
name[0] # "M"
name[-1] # "h"

# We can treat the string as a sequence and perform sequence operations.
name[::2] # "Mks"

# String slicing:
name[2:4] # "ke"
name[0:3:2] # "Mk"

# Finding the length
len(name) # 6
```

Strings are immutable. Strings are sequences and as such, have apply methods that work on lists and tuples. Strings also have a second set of methods that just work on strings. When we apply a method to the string A, we get a new string B that is different from A.

```python
a = "Thriller is the sixth studio album"
b = a.upper() # "THRILLER IS THE SIXTH STUDIO ALBUM"

# r will tell python that string will be display as raw string
print(r" Michael Jackson \ is the best" ) # "Michael Jackson \n is the best"
```



<h1>Week 2: Python Data Structures</h1>

<h2>List and Tuples</h2>

Lists and Tuples are called compound data types and are one of the key types of data structures in Python. Tuples are an ordered sequence.

```python
ratings = (4, 2, 3, 1)

# There are different types, strings, integer, float. They can all be contained in a tuple. But the type of the variable is tuple. Each element of a tuple can be accessed via an index.

Tuple1 = ("disco", 1, 2.0)
Tuple1[0] # 'disco'

# You can also use negative index to access elements
say_what=('say',' what', 'you', 'will')
say_what[-2] # 'you'

# We can concatenate tuples by adding them
combinedTuples = Tuple1 + say_what # ("disco", 1, 2.0, 'say',' what', 'you', 'will')

# We can also slice tuples
combinedTuples[0:3] # ("disco", 1, 2.0)

# Tuples are immutable, you can't change the elements of a Tuple using index.
# Sorting a tuple returns a list:
sortedRatings = sorted(ratings) # [1, 2, 3, 4]
```

Lists are an ordered sequence. A list is represented with square brackets. In may respects, lists are like tuples. One key difference is they are mutable. Lists can contain strings, floats, integers.

```python
# Appending elements to a list:
A = [1]
A.append([2,3,4,5])
print(A) # [1, [2, 3, 4, 5]]

# Extending a lit
B = [1]
B.extend([2,3,4,5])
print(B) # [1, 2, 3, 4, 5]
```


<h2>Dictionaries</h2>

Dictionaries are a type of collection in Python. If you recall, a list is integer indexes. These are like addresses. A list also has elements. A dictionary has keys and values. The key is analogous to the index, they are like addresses but they don't have to be integers. They are usually characters. The values are similar to the element in a list and contain information. To create a dictionary, we use curly brackets. The keys are the first elements. They must be immutable and unique. Each key is followed by a value separated by a colon. The values can be immutable, mutable, and duplicates. Each key and value pair is separated by a comma.


<h2>Sets</h2>

Sets are a type of collection. This means that like lists and tuples, you can input different Python types. Unlike lists and tuples, they are unordered. This means sets do not record element position. Sets only have unique elements. This means there is only one of a particular element in a set. To define a set, you use curly brackets.

We can add an item to a set using the add method.

```python
new = {1, 2, 4}
new.add("number")
print(new) # {1, 2, 4, 'number'}

# Removing an element from a set
new.remove(2)
print(new) # {1, 4, 'number'}
```



<h1>Week 3: Python Programming Fundamentals</h1>



<h2>Conditions and Branching</h2>

Comparison operations compares some value or operand, then based on some condition, they produce a Boolean.


<h2>Loops</h2>

While loops are similar to for loops but instead of executing a statement a set number of times a while loop will only run if a condition is met.


<h2>Functions</h2>

Functions take some input, then produce some output or change. The function, it's just a piece of code you can reuse.


<h2>Objects and Classes</h2>

<img src="../4. Python for Data Science and AI/images/built_in.png">

<img src="../4. Python for Data Science and AI/images/object_type.png">



<h1>Week 4: Working with Data in Python</h1>



<h2>Reading Files with Open</h2>



<h2>Writing Files with Open</h2>


<h2>Pandas</h2>



<h2>One Dimensional Numpy</h2>


<h2>Two Dimensional Numpy</h2>




<h1>Week 5: Analyzing US Economic Data and Building a Dashboard</h1>
