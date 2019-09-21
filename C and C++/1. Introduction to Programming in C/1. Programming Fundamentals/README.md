<h1>Week 1: Introduction</h1>


<h2>How to Write a Program with the Seven Steps</h2>

<h3>Programming: Plan First, Then Code</h3>

Many novice programmers attempt to dive right into writing the code (in the programming language) as the first step. However, writing the code is actually a much later step in the process. A good programmer will plan first and write second, possibly breaking down a large programming task into several smaller tasks in the process.

To try to better understand the importance of planning before you write, imagine an analogy to building a house or sky scraper. If you were tasked with building a sky scraper, would you break ground and start building right away, figuring out how the building is designed as you go? Hopefully not. Instead, you (or an architect) would design blueprints for the building first. These blueprints would be iteratively refined until they meet everyone’s specifications—they must meet the requirements of the building’s owner, as well as be possible to build reasonably. Once the blueprints are completed, they must be approved by the local government. Actual construction only begins once the plans are fully completed. Programming should be done in a similar manner— come up with a complete plan (algorithm) first and build (implement in code) second.

<h3>The Seven Steps</h3>

<img src="../1. Programming Fundamentals/images/7steps.png">

This figure shows a high-level overview of the programming process. A programmer starts by devising the algorithm for the task she is trying to solve. We will split this planning phase into four steps in the process of writing a program.

After devising a proper algorithm, she is ready for Step 5 of the programming process: translating her plan into code in the programming language she is using for her current project. Your algorithm may have some complex steps, but that is fine. As we will see later, whenever your algorithm calls for a step that is too complicated to be simply translated into a few lines of code, you should turn that step into its own separate programming task and repeat the programming process on it.

Once the algorithm is implemented in code, the programmer must test her code, which is the 6th Step of the programming process. By testing the program, the programmer tries to uncover errors in her algorithm or implementation. If the programmer finds errors in her program, she debugs the program (Step 7): finding out the cause of the error, and fixing it. The programmer may need to return to the algorithm design steps (if the error lies in the algorithm) or to translation to code (if the error lies in the implementation) to correct the error. The programmer then repeats all of the later steps.

At some point, the programmer completes enough test cases with no errors to become convinced that her program is correct. When the programmer is convinced her code is correct, she has successfully completed the task at hand.

<h3>Algorithms</h3>

An algorithm is a clear set of steps to solve any problem in a particular class. Typically, algorithms have at least one parameter; however, algorithms with no parameters exist—they are simply restricted to one specific problem, rather than a more general class.

Algorithms that computers work on deal with numbers.

<img src="../1. Programming Fundamentals/images/algorithm_steps.png">

The above figure shows how you should approach designing your algorithm. We will spend the next few sections discussing each of these steps in detail. However, note that "translate to code" comes only after you have an algorithm that you have tested by hand—giving you some confidence that your plan is solid before you build on it.


<h2>The First Four Steps</h2>

<h3>Step 1: Work an Example Yourself</h3>

The first step in trying to design an algorithm is to work at least one instance of the problem—picking specific values for each parameter—yourself (by hand). Often this step will involve drawing a diagram of the problem at hand, in order to work it precisely. The more precisely you can perform this problem (including the more precisely you can draw a diagram of the situation if applicable), the easier the remainder of our steps will be.

For example, let's say if you want to check if a number is prime, your first step would be to pick a number and figure out if it is prime. Just saying "ok, I know 7 is prime," is not of much use—you just used a fact you know and did not actually work out the problem. For a problem such as this one, which has a "yes or no" answer, we probably want to work at least one example that comes up with a "yes" answer, and one that comes up with a "no" answer.

If you get stuck at this step, it typically means one of two things. The first case is that the problem is _ill-specified_—it is not clear what you are supposed to do. In such a situation, you must resolve how the problem should be solved before proceeding. In the case of a classroom setting, this resolution may require asking your professor or TA for more details. In an industrial setting, asking your technical lead or customer may be required. If you are solving a problem of your own creation, you may need to think harder about what the right answers should be and refine your definition of the problem.

The second case where Step 1 is difficult is when you lack _domain knowledge_—the knowledge of the particular field or discipline the problem deals with. In our primality example, if you did not remember the definition of a prime number, that would be an example of lacking domain knowledge—the problem domain is mathematics, and you are lacking in math knowledge. No amount of programming expertise nor effort ("working harder") will overcome this lack of domain knowledge. Instead, you must consult a source of domain expertise—a math textbook, website, or expert. Once you have the correct domain knowledge, you can proceed with solving your instance of the problem. Note that domain knowledge may come from domains other than math. It can come from any field, as programming is useful for processing any sort of information.

<h3>Step 2: Write Down What You Just Did</h3>

For this step, you must think about what you did to solve the problem, and write down the steps to solve that particular instance. Another way to think about this step, is to write down a clear set of instructions that anyone else could follow to reproduce your answer for the particular problem instance that you just solved. If you do multiple instances in Step 1, you will repeat Step 2 multiple times as well, once for each instance you did in Step 1. If an instruction is somewhat complex, that is all right, as long as the instruction has a clear meaning—later, we will turn these complex steps into their own programming problems, which will get solved separately.

The difficult part of Step 2 is thinking about exactly what you did to accomplish the problem. The difficulty here is that it is very easy to mentally gloss over small details, "easy" steps, or things that you do implicitly. Implicit assumptions about what to do, or relying on common sense lead to imprecise or omitted steps. The computer will not fill in any steps you omit, thus you must be careful to think through all the details.

<h3>Step 3: Generalize Your Steps</h3>

Having solved one or more problems from the class we are interested in and written down the particular steps we executed to solve them, we are ready to try to generalize those steps into an algorithm. In our Step 2 steps, we solve particular instances, but now we need to find the pattern that allows us to solve the whole class. This generalization typically requires two activities. First, we must take particular values that we used and replace them with mathematical expressions of the parameters.

The second common way to generalize steps is to find repetition—the same step repeated over and over. Often the number of times that the pattern repeats will depend on the parameters. We must generalize _how many times_ to do the steps, as well as what the steps are. Sometimes, we may find steps which are _almost_ repetitive, in which case we may need to adjust our steps to make them exactly repetitive.

Sometimes you may find it difficult to see the pattern, making it hard to generalize the steps. When this happens, returning to Steps 1 and 2 may help. Doing more instances of the problem will provide more information for you to consider, possibly giving you insight into the patterns of your algorithm. This process is often referred to as writing 'pseudo-code', as you are working to design an algorithm programmatically with no particular target language. Nearly all programmers make use of this method to ensure their algorithm is correct before writing any actual code.

<h3>Step 4: Test Your Algorithm</h3>

After Step 3, we have an algorithm that we _think_ is right. However, it is entirely possible that we have messed up along the way. The primary purpose of Step 4 is to ensure our steps are actually right before we proceed. To accomplish this, we test our algorithm with _different_ values of the parameters than the ones we used to design our algorithm. We execute our algorithm by hand and compare the answer it obtains to the right answer. If they differ, then we know our algorithm is wrong. The more test cases (values of parameters) we use, the more confident we can become that our algorithm is correct.

One common type of mistake is mis-generalizing in Step 3. When we detect such a problem, we must go back and re-examine the generalizations we made in Step 3. Often, this is best accomplished by returning to Steps 1 and 2 for whatever test case exposed the problem. Re-doing Steps 1 and 2 will give you a concrete set of steps to generalize differently. You can then find where the generalization you came up with before is wrong, and revise it accordingly.

Another common type of mistake is that there are cases we did not consider in designing our algorithm.



<h1>Week 2: Reading Code</h1>



<h2>Variables and Expressions</h2>

<h3>Why You Should Learn to Read Code</h3>

Why would you want to learn to read code and execute it by hand when you could take a quick syntax lesson and start typing? Think for a moment about when you were first learning about written language. Did you learn to write before you could read? Probably not, recognizing a word or sentence and attaching meaning is easier than formulating your own. You've probably misspelled a word or made a grammatical error expressing an idea that you could read just fine. Programming is much like this, you need to read for understanding and understand exactly how code is executed before you can write good code of your own. It's also easier, reading well will help you make fewer mistakes as you go, but also help you troubleshoot when your code does something you did not expect.

<h3>Declaring a Variable</h3>

__Variables__:

Programs track most of their state in variables—you can think of a variable as a box that stores a value. In order to use a variable, the programmer must declare it, specifying its type and name. The type specifies what kind of value can be held in a variable's box (for example, whether it is a number, a letter, or text).

__Declaration__:

The name of a variable may be any valid _identifier_. An identifier is the formal programming term for a word that can be used to name something. In C, identifiers may be any length, and can contain letters, numbers, and underscores (`_`). They may only start with a letter or an underscore (not a number), and are case-sensitive (meaning that __abc__ is different from __Abc__ and __ABC__ is different from both of them). The variable declaration ends with a semicolon—which is used to end many _statements_ in C. A statement in a programming language is roughly analogous to a sentence in English—it is a complete line of code, which can be executed for an effect. This figure shows a variable declaration and identifies each of the pieces:

<img src="../1. Programming Fundamentals/images/declaration.png">

In C, a newly declared variable is uninitialized, meaning that its value is undefined. When the computer actually executes the program, it has a finite (but quite large) number of "boxes" (memory locations), and the variable will be given one that is currently not in use. The value of the variable will be whatever value happened to be in the location previously, until a new value is assigned to the variable.  If we ever use an unknown value as we execute our program, it indicates a problem with our program, since its behavior is undefined—its behavior will be changed based on whatever the value actually is, which we cannot predict.

<h3>Assigning a Variable</h3>

For variables to be useful, we must be able to change their values. To accomplish this, we use assignment statements—statements which change the value contained in a box. An assignment statement starts with an lvalue on the left. An lvalue (pronounced “el-value”) must be something that “names a box”—indicating which box the assignment statement will change. The simplest lvalue is a variable, which names the variable’s own box. After the lvalue, comes a single equals sign (called the assignment operator), followed by an rvalue on the right, then a semicolon. The rvalue (pronounced “are-value”) must be an expression whose value shall be placed in the box.

__An assignment statement__:

An expression is a combination of values, and operations which evaluates to a value. For the moment, we will just consider numeric constants (such as 3), which evaluate simply to themselves (that is, 3 evaluates to the number 3). We will discuss more expressions shortly. Evaluating any assignment statement is a matter of figuring out what box the left side names, evaluating the right side to a value (e.g., a number), and then changing the value in the box named on the left side to the value from the right side.

The figure below shows an example of an assignment statement, and identifies the individual pieces. This assignment statement assigns the value 3 to the variable myVariable. Its effect is to change the value in the box named myVariable to be 3.

<img src="../1. Programming Fundamentals/images/assignment.png">

__Declarations and Assignments__:

The declaration and initialization—the first assignment—of a variable may be combined into a single statement, such as int x = 3; which has the same effect as the two individual statements int x; x = 3;

<h3>Expressions with Common Operators</h3>

As we mentioned previously, an expression is a combination of values and operations which evaluates to a value. We have already seen the simplest expressions—numerical constants, which evaluate to themselves. We can also use mathematical operators, such as +, –, *, and / to carry out arithmetic operations. For example, 7 + 3 evaluates to 10 and 4 * 6 + 9 * 3 evaluates to 51. These operators have the standard rules of precedence—multiplication and division occur before addition and subtraction—and associativity: 4 – 3 – 1 means (4 – 3) – 1 not 4 – (3 –1). Parenthesis may be used to enforce a specific order of operations—4 * (6 + 9) * 3 evaluates to 180.

Another common operator which you may not be as familiar with is the modulus operator, %. The modulus operator evaluates to the remainder when dividing the first operand by the second. That is a % b (read “a modulus b”, or “a mod b” for short) is the remainder when a is divided by b. For example, 19 % 5 = 4 because 19 / 5 = 3 with a remainder of 4—3 * 5 = 15, and 19 – 15 = 4.

One slightly tricky thing about division with integers is that dividing an integer by an integer gives an integer. This means that 5 / 2 is 2. Note that we are using _floor_ division (ie: we round down the result). This happens because integer can only hold whole numbers.

Variables may also appear in expressions. When a variable appears in an expression, it is evaluated to a value by reading the current value out of its box. It is important to note that assignment statements involving variables on the right side are not algebraic equations to be solved—we cannot write x – y = z * q. Note that here, the left side of this statement does not “name a box”. If you want to solve an algebraic equation, you must do so in a step-by-step fashion.

We can, however, write perfectly meaningful assignment statements which are not valid in algebra. For example, a statement such as x = x + 1; is quite common in programming, but has no solution if you think of it as an algebraic equation. In programming, this statement means to take current value of x, add 1 to it, and update x’s value to whatever that result is.


<h2>Functions</h2>

<h3>Using Functions for Abstraction</h3>

To see why functions are so important, let us take a look back at the closestPoint algorithm, an algorithm which finds the closest point from a list of 2D data points.

<img src="../1. Programming Fundamentals/images/closest_point.png">

There are two places here where this algorithm computes the distance between two points. Why is that important? Well, we need to do the same computation twice. Without functions, we would write the same code twice and that is just in this problem. What if we have other problems that also need to compute the distance between two points? We have a few examples of other problems that would need to compute the distance between two points, but there are many others. We could rewrite the code each time, which may not seem like a big deal for something as small as computing the distance but we want to avoid duplicating code whenever possible. Every time we rewrite code, we run the risk of making mistakes and introducing bugs into our program. Furthermore, it is really boring to rewrite the same code again and again. Instead, we should abstract the computation for distance out into a function of its own. Making distance its own function means we can reuse that algorithm any place we need it without rewriting it. How would this work? Well, our closestPoint function would, in its code, call the distance function. That is, it would ask the distance function to perform its computation. To do this, our closestPoint function would first pass in parameter values specifying which points the distance function should compute on.

<img src="../1. Programming Fundamentals/images/distance_function.png">

The distance function would execute its code, doing whatever statements are in it according to the rules you are learning. It finishes when it comes up with an answer which returns back to the function that called it. When it returns, the distance function is done and the calling function continues its own execution, making use of the answer it got from the function it called.

<img src="../1. Programming Fundamentals/images/usefulness_of_function.png">

<h3>Anatomy of a Function</h3>

A function gives a name to a parameterized computation—it is the implementation in code of a specific algorithm. There are two sides to using functions in your programming: _declaring_ a function—which provides the definition for how a function behaves—and _calling_ a function—which executes the definition of the function on specific values of the parameters.

<img src="../1. Programming Fundamentals/images/fundec.png">

The figure above shows a function declaration. The function's name may be any valid identifier, just like a variable's name. In this particular example, the function's name is __myFunction__. Immediately before the function's name is its _return type_—the type of value that this function will compute. The fact that this function returns an int means that its "answer" is an int. After the function's name comes a set of parentheses, with the parameter list inside. The _parameter list_ looks like a comma-separated list of variable declarations. Here, the function takes two parameters, __x__ and __y__, both of which are ints. The similarity between parameters and variable declarations is not a coincidence—the parameters behave much like variables, but they are initialized by the function call.

The body of the function then comes between a set of curly braces, and is comprised of zero or more statements. The body of this function has two statements. The first statement in this function's body is the now-familiar declaration and initialization of a variable: __z__ is declared as a variable of type int and initialized to the value of the expression __x – 2*y__.

The second statement within the body of this function is a new type of statement which we have not seen before: a _return statement_. A return statement starts with the keyword __return__, which is then followed by an expression. The effect of this statement is to say what the "answer" is for the current function, leaving its computation and returning to the code that called it.

To understand this last concept completely, we must first see the other aspect of using a function—calling the function. A function is another kind of expression, whose value is whatever "answer" the called function comes up with when it is executed with the specified _arguments_—values of its parameters. This "answer" is more formally called the function's _return value_.

<h3>How to Evaluate a Function</h3>

Evaluating a function call is more complex than evaluating the other kinds of expressions that we have seen so far—it may take many steps of executing the code in the function to determine its answer. In fact, code may call one function, which itself may call other functions before finally coming up with an answer. While this may seem daunting, we can do it properly by following a few rules for executing function calls by hand.

As a first step towards reading code with function calls, we must first group together the variables belonging to one particular function into a larger box, labeled with the function’s name, which is called a _frame_ (or _stack frame_, since they are located on the call stack). This figure shows an example of this organization.

<img src="../1. Programming Fundamentals/images/frames.png">

Notice that in the example shown in the figure, one of the functions is named __main__. The function named __main__ is special—execution of a program starts at the start of __main__. We start by drawing an empty frame for __main__ and putting the execution arrow right before the first line of code in __main__. We then execute statements of the code until __main__ returns, which ends the program.

Calls to functions may appear in expressions, in which case we must evaluate the function to determine its return result. To do this evaluation, we take the following steps:
1. Draw a frame for the function being called. Place a box in that frame for each parameter that this function takes.
2. Initialize the parameters by evaluating the corresponding expressions in the function call and copying the resulting values into the parameter’s box in the called function’s frame.
3. Mark the location of the function call, and note that location in the corner of the function’s frame.
4. Move the execution arrow immediately before the first line of code in the called function.
5. Evaluate the lines of code inside the called function.
6. When you reach a return statement, evaluate its argument to a value. Note down this return value.
7. Return the execution arrow back to where the function was called—you know this location because you noted it in the corner of the frame. You will return the arrow to the middle of the line of code (rather than the typical "between them") because that line of code is part-way done.
8. Erase the frame for the called function.
9. Use the return value of the function as the value of the function call in the expression in which it appears.

A function call may also be used as a statement by itself, in which case, it is evaluated the same as above, except that its return value is not used for anything.

<h3>Scope</h3>

So far, all of our code examples have had only one variable with a particular name. However, in real programs—which may be quite large and developed by multiple people—we may have many different variables with the same name. This possibility means that we need rules to determine which variable a particular name refers to. These rules are based on the notion of _scope_.

The scope of a variable is the region of code in which it is visible. Within a variable’s scope, its name may refer to it. Outside of a variable’s scope, nothing can refer to it directly. Most variables that you will use will be local variables—variables that are declared inside of a function—and function parameters. In C, the scope of a local variable begins with its declaration and ends at the closing curly-brace (}), which closes the block of code—the code between matching open and close curly braces—that the variable was declared in. Function parameters have a scope of the entire function to which they belong.

<img src="../1. Programming Fundamentals/images/scope.png">

This figure shows a snippet of code (we have not learned the details of what most of this code does, but that is not important—we are just interested in the scope of the variables). The figure shows the same piece of code three times, with different scopes highlighted. The leftmost portion of the figures shows the scope of the parameters (__x__ and __y__)—which is the entire function—in a blue box. The middle portion shows the scope of the variable __n__—which starts at its declaration and continues to the close curly brace which ends the function—in a red box. The right portion shows the scope of the variable __q__—which starts at its declaration and ends at the next curly brace—in a green box.

The figure below shows a code fragment with four different __x__'s in it. (As the actual behavior of the code is irrelevant to this example, much of it is replaced with [...]) The first __x__ in the figure is declared outside of any of the functions—it is a global variable. The "box" for a global variable exists outside of any frames and is created when the program starts. If the global variable is initialized in its declaration, the value is also placed in the box before the program starts. The areas where __x__ references this variable are colored purple.

<img src="../1. Programming Fundamentals/images/xscope.png">

We note that there is a time and place to use global variables, but their use should be rare. When novice programmers learn about global variables, they often want to use them for all sorts of inappropriate purposes. Typically these uses reflect a lack of understanding of parameter passing or how functions return values.

The next __x__ in our example is the parameter to the function __f__. The scope for this x begins at the open curly brace ({) of __f__’s body and ends at the matching close curly brace (}). The region of the program where __x__ references the parameter to __f__ are shown in red. Observe that the red begins and ends with the curly braces surrounding the body of __f__, but has a "hole" where there is a different __x__ in a smaller scope in the middle.

The "hole" in the red region corresponds to the portion of the code (shown in blue) where __x__ references the local variable declared inside of the while loop’s body. After this local variable __x__ goes out of scope at the closing curly brace of the block it was declared in, we return to the red region, where the parameter of __f__ is what we reference with the name __x__.

Between the end of __f__ and the declaration of a local variable named __x__ inside of function __g__, the global variable is what the name x references—shown in the figure by coloring this region of code purple. When there is a local variable named __x__ declared inside of __g__, then the name __x__ references it (this area is shown in green) until it goes out of scope, at which point the name __x__ again references the global variable.

If all of that seems complicated, you will be comforted by the fact that thinking through such issues should not come up in well-written code. Ideally, you should write your code such that you have at most one variable by any particular name in scope at a time (related to this point: you should name your variables meaningfully—__x__ is seldom a good name for a variable, unless of course it represent the x-coordinate of a point or something similar). However, you should still know what the rule is, as it is common to many programming languages. You may come across code that has multiple variables of the same name in scope at some point and need to understand how to read it.


<h2>Printing</h2>

Our example programs so far have computed results, but had no way to communicate them to the user. Such programs would be useless in practice. Real programs have means to communicate with their user, both to read input and to provide output. Many programs that you are accustomed to have Graphical User Interfaces (GUIs), however, we will work primarily with programs that use a command line interface. Writing GUIs is a more complex task, and requires a variety of additional concepts.

Command line programs provide output to their user by printing it out on the terminal. In C, printing output is accomplished by calling the __printf__ function, which takes a string specifying what to print. We will learn more about strings later, as they require knowledge of pointers to understand. For now, you can think of them as being text—words, or sentences. In much the same way that we can write down numerical literals (such as 3, or -42), we can write down string literals by placing the string we want inside of quotation marks, e.g., "This is a string". If we wanted to print out the string, “Hello World”, we would type __printf("Hello World");__.

The f in __printf__ stands for “formatted,” meaning that __printf__ does not just print literal strings, but can take multiple arguments (of various types), format the output as a string, and print the result. To format output in this way, the string argument of printf (which is called the “format string”) includes special _format specifiers_, which start with a percent sign (%). For now, we will only concern ourselves with %d which specifies that an integer should be formatted as a decimal (base 10) number. For example, if we wrote the following code fragment:

```c
int x = 3;
int y = 4;
printf("x + y = %d", x + y);
```

it would print x + y = 7, because it would evaluate the expression x + y to get 3 + 4 which is 7, and format the number 7 as a decimal number in place of the %d specifier. The rest of the string is printed literally.

Another type of special information we can include in the string is _escape sequences_. Escape sequences are two (or more) characters, the first of which is a backslash (\), which gives the remaining characters special meaning. The most common escape sequence you will encounter is \n, which means “newline”. If you want your print statement to print a newline character (which makes the next output begin at the start of the next line), then you do so with \n. If you want a literal backslash (that is, you actually want to print a backslash), \\ is the escape sequence for that purpose. We will note that you generally will want to print a newline in your output, not only so that it looks nice, but also because printf does not actually print the output to the screen until it encounters a newline character, or is otherwise forced to do so.


<h2>Conditional Statements</h2>

In addition to computing arithmetic combinations of their variables, programs often make decisions based on the values of their variables—executing different statements based on the value of expressions. In C, an if/else statement specifies that one block of code should be executed if a condition is true, and another block should be executed if that condition is false.

To write meaningful if/else statements, we need to introduce operators which allow us to compare two expressions and produce a Boolean outcome. In C, however, there are no distinct values for true or false, instead, false is 0, and anything which is non-zero is true. We will refer to true and false because they make more sense conceptually; the distinction should not make a practical difference in most cases.

<img src="../1. Programming Fundamentals/images/conditionals.png">

The table above shows the C operators for conditional expressions. The first six (==, !=, <, <=, >, and >=) are relational operators—they compare two expressions for equality or inequality. For any of these operators, both operands (the expressions on the left and right) are evaluated to a value, then compared appropriately. The operator then produces a true or false value.

The last three operators in the table (!, &&, and ||) are boolean operators—they operate on true/false values. The first of these, ! performs the boolean NOT operation. It is a unary operator—meaning that is has one operand—which evaluates to true if its operand is false, and evaluates to false if its operand is true.

The && and || operators perform the logical AND and logical OR operations respectively. The logical AND of two values is true if and only if both values are true, otherwise it is false. The logical OR of two values is true if and only if either of the values are true, otherwise it is false.

Unlike previous operators that we have seen, && and || may know their answer from only one argument. In the case of &&, if either operand is false, then the result is false, regardless of the other value. Similarly for ||, if either operand is true, then the result is true regardless of the other value. C exploits this fact in the way that it evaluates && and || by making them short circuit—they may only evaluate one operand. Specifically, the first operand is always evaluated to a value; however, if the value of that operand determines the result of the entire && or ||—false for && or true for ||—then the second operand is not evaluated at all.

<h3>if/else</h3>

Now that we understand comparison operators, and can compare expressions, we can discuss the evaluation of if/else statements. The syntax for an if/else statement is shown in figure below.

<img src="../1. Programming Fundamentals/images/if_else.png">

The keyword if is followed by an expression in parenthesis. This expression is evaluated to a value, to determine whether the “then” block or the “else” block is executed. The “then” block of code comes immediately after the expression. C does not have a then keyword (although some languages do), however, this block of code serves the same purpose regardless of the syntactic particulars of the language—it is executed if the conditional expression evaluates to true. After the “then” block, we have the keyword else, followed by the “else” block. This block of code is executed if the conditional expression evaluates to false.

C permits if with no else, which is equivalent to an empty “else” block (as if the programmer had written else {}). If you execute an if with no else, then simply imagine the empty “else” block. If the conditional expression evaluates to true, you should execute the “then” block as previously described, however, there is no “else” block to skip. Instead, continue executing statements immediately after the end of the “then” block (skipping over the non-existent “else” block). If the conditional expression evaluates to false, then skip the “then” block, and execute whatever statements follow it (doing nothing for the “else” block).

if/else statements may be nested—one (or more) may occur in the “then” or “else” block of another if/else statement. When you encounter nested statements, the same rules apply. The inner statement is just one of the (possibly) many statements in the block, and is executed according to its rules—the condition is evaluated, whichever of the “then” or “else” blocks is appropriate is executed, and then execution continues after the end of the “else” block. When the execution arrow reaches the end of the outer “then” or “else” block, it behaves no differently than if there were no inner if statement.

<h3>switch/case</h3>

Another way that programs can make decisions is to use switch/case. The syntax of switch/case is shown in the figure below. Here, when the execution arrow reaches the switch statement, the selection expression—in parenthesis after the keyword switch—is evaluated to a value. This value is then used to determine which case to enter. The execution arrow then jumps to the corresponding case—the one whose label (the constant immediately after the keyword case) matches the selection expression’s value. If no label matches, then the execution arrow jumps to the default case if there is one, and to the closing curly brace of the switch if not.

<img src="../1. Programming Fundamentals/images/switch_case.png">

Once the execution arrow has jumped into a particular case, execution continues as normal until it encounters the keyword break. When the execution arrow reaches the break keyword, it jumps to the close curly brace which ends the switch statement. Note that reaching another case label does not end the current case. Unless the execution arrow encounters break, execution continues from one statement to the next. When the execution arrow passes from one case into the next like this, it is called “falling through” into the next case.

For example, if we were executing the code in the figure above, and reached the switch statement with x having a value of 17 and y having a value of 16, then we would first evaluate the selection expression (x - y), and get a value of 1. The execution arrow would then jump to case 1: and begin executing statements after it. We would execute y = 9;. Then we would fall through the next case label—our execution arrow would move past it into the next case (the label itself has no effect). Then we would execute z = 42;. Next, we would execute the break; statement, causing our execution arrow to jump to the close curly brace of the switch, after which we would continue executing whatever other statements are there.

<h3>Shorthand</h3>

C (and many other programming languages) has shorthand—also called _syntactic sugar_—for a variety of common operations. These shorthands do not introduce any new behaviors. Instead, they just provide a shorter way to write common patterns of existing things we have seen. This table shows the most common shorthand notations in C:

<img src="../1. Programming Fundamentals/images/syntactic_sugar.png">


<h2>Loops</h2>

<h3>While Loops</h3>

There are three kinds of loops in C. The first of these is the __while__ loop. The syntax for a while loop is shown in this figure:

<img src="../1. Programming Fundamentals/images/while_loop.png">

The keyword __while__ is followed by an expression in parenthesis. Much like an if statement, this expression is evaluated to determine whether or not to enter the block of code immediately following it, which is known as the _body_ of the loop. If the conditional expression evaluates to true, the execution arrow moves inside the body of the loop and its statements are executed normally. The while loop differs from the if statement in what happens when the execution arrow reaches the closing curly brace. In the case of a while loop, it jumps up to the top of the loop, immediately before the while keyword. The conditional expression is then re-evaluated, and if it is still true, execution re-enters the loop body. If the conditional expression evaluates to false, then the execution arrow skips to immediately after the closing curly brace of the loop body, and proceeds from there.

<h3>do/while Loops</h3>

Another type of loop in C is the do-while loop. Unlike a while loop, which checks its conditional expression at the top of the loop, the do-while loop checks its conditional expression at the bottom of the loop—after it has executed the body. While this distinction may seem contrived—either way the condition is checked between iterations—it is important at the start of the loop. A while loop may execute its body zero times, skipping the entire loop, if the condition is false initially. By contrast, a do-while loop is guaranteed to execute its body at least once because it executes the loop body before ever checking the condition.

<img src="../1. Programming Fundamentals/images/do_while_loops.png">

The figure above shows the syntax of a do-while loop. The keyword do is followed by the loop body. After the loop body, the keyword while is followed by the conditional expression and a semicolon.

Execution of a do-while loop proceeds by first entering the loop body and executing all of the statements contained in it. When the execution arrow reaches the while at the end of the loop body, its conditional expression is evaluated. If the expression evaluates to true, then the execution arrow jumps back to the start of the loop body. If the expression evaluates to false, then it moves past the end of the loop and execution continues with the next statement after the loop.

<h3>For Loops</h3>

The third type of loop in C is a for loop. The for loop is syntactic sugar—it does not introduce any new behavior, but instead provides a more convenient syntax for a common programming idiom. In the case of for loops, the common idiom is counting from one number to another. The following figure shows the syntax of a for loop, and how it is de-sugared into a while loop—that is, how we could write the for loop in terms of the already familiar while loop. Knowing how the for loop de-sugars to a while loop tells us how to execute it. We can imagine the equivalent while loop, and follow the execution rules we have already learned for it.

<img src="../1. Programming Fundamentals/images/for_loop.png">

The for keyword is followed by three pieces, separated by semicolons, inside of parenthesis. The first of these is the “initialization statement”. It happens once before the first time the loop’s condition is checked. In the de-sugaring, this statement appears right before the while loop. The second piece is not a statement (even though it is followed by a semicolon), but rather the conditional expression for the loop. In the de-sugaring, this expression is the conditional expression of the while loop. The third statement is the “increment statement”. In the de-sugaring, it appears immediately before the close curly brace of the loop body. After all of these is the loop body, which (except for the addition of the “increment statement” at the end) is the loop body of the while loop in the de-sugared version.

If you examine the figure carefully, you will notice that there is a set of curly braces around the entire piece of while-based code. These curly braces are there for a subtle, but important reason. The scope of any variables declared in the “initialization statement” of the for loop have a scope which is limited to the for loop. Recall that a variable typically has a scope which is limited to the curly braces which enclose its declaration. For a variable declared in the start of the for loop, the scope appears to be an exception to this rule, however, it is not if we think of it in terms of the de-sugaring shown above with the curly braces surrounding the declaration.

__Nesting__

Just as if/else statements may be nested, loops may also be nested. Similarly, loops follow exactly the same rules no matter how they are nested. In fact, if/else statements and loops may be nested within each other in any combinations. The rules are always the same regardless of any combinations or depths of nesting.

<h3>Break and Continue</h3>

Sometimes a programmer wants to leave the loop body early, rather than finishing all of the statements in side of it. There are two possible behaviors that a programmer might want when leaving the loop body early.

__Break:__

One behavior would be to exit the loop completely, making the execution arrow jump to immediately after the close curly brace which ends the loop (the same place that it goes when the loop’s condition evaluates to false). This behavior is obtained by using the break; statement—which we have already seen in the context of switch/case. Whenever the execution arrow encounters a break statement, it executes the statement by jumping out of the innermost enclosing loop (whether it is a while, do-while, or for loop), or switch statement. If the break statement is inside multiple of these which are nested together (e.g. a loop inside a case of a switch statement), then it exits only the most immediately enclosing one. If a break statement occurs and is not inside one of these loops or a switch statement, it is an error in the program.

__Continue:__

The other possible behavior that the programmer might want to have is for the execution arrow to jump back to the top of the loop. This behavior is accomplished with the continue; statement. Executing the continue statement jumps to the top of the innermost enclosing loop (if it is not in a loop, it is an error). In the case of a for loop, the “increment statement” in the for loop is executed immediately before the jump. This fact complicates the de-sugaring of a for loop into a while loop slightly relative to the explanation given above. If the for loop contains any continue statements, then the “increment statement” is written not only before the close curly brace of the loop, but also before any continue statements.



<h1>Week 3: Types</h1>









<h1>Week 4: Project</h1>
