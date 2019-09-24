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



<h2>Everything Is a Number</h2>

<h3>Hardware Representations</h3>

First and foremost, as far as the computer is concerned, there is no way to move “past numbers” because to the computer, everything is a number. A computer stores everything as a series of 0’s and 1’s. Each 0 or 1 is called a bit, and there are many ways to interpret these bits. This is where types come in. A type is a programming language construct that specifies both a size and an interpretation of a series of bits stored in a computer. For example, the type for working with integers is an int, whose size is typically 32 bits and whose interpretation is an integer number directly represented in binary.

__Binary Numbers:__

Before we delve into how to represent numbers in binary, let us briefly discuss the decimal system, which should be familiar to all of us. A decimal number is a number represented in base 10, in which there are 10 possible values for each digit (0–9). When these digits are concatenated to make strings of numbers, they are interpreted column by column. Beginning at the far right and moving to the left, we have the 1’s column, the 10’s column, the 100’s column, and so forth. The number 348, for example, has 8 ones, 4 tens, and 3 hundreds. The value of each column is formed by taking the number 10 and raising it to increasing exponents. The ones column is actually 10^{0}=1, the tens column is 10^{1}=10, the hundreds column is 10^{2}=100, and so forth. When we see a number in base 10, we automatically interpret it using the process shown in the figure below, without giving it much thought.

<img src="../1. Programming Fundamentals/images/Binary_Numbers.png">

A binary number is a number represented in base 2, in which there are only 2 possible values for each digit (0 and 1). The 0 and 1 correspond to low and high voltage values stored in your computer. Although it might be possible for a computer to store more than two voltage values and therefore support a base larger than 2, it would be extremely difficult to support the 10 voltage values that would be required to support a base 10 number system in hardware. A familiarity with base 2 is helpful in understanding how your computer stores and interprets data.

Binary numbers are interpreted such that each bit (the name for a binary digit) holds the value 2 raised to an increasing exponent, as shown in the figure part b). We begin with the rightmost bit (also called the least significant bit) which holds the value 2^{0}=1, or the ones column. The next bit holds the value 2^{1}=2, or the twos column. In base 10, each column is ten times larger than the one before it. In base 2, each column’s value grows by 2. The number 10_{2} (the subscript indicates the base) has 1 two and no ones. It corresponds to the value 2 in base 10.

<h3>Looking under the Hood</h3>

When you are driving a car in traffic, it is probably not a good idea to think too much about what the engine is doing—in fact, you really do not need to know how it works in order to drive. This example illustrates an important concept in programming: _abstraction_—the separation of interface (what something does or how you use it) from implementation (how something works).

Abstraction often comes in multiple levels. Driving a car, the level of abstraction you care about is that the steering wheel turns the car, the gas pedal makes it go faster, and the brake makes it slow down. Your mechanic’s level of abstraction is how the pieces of the engine fit together, what level is appropriate for the brake fluid, and if your oil filter is screwed on tightly enough. The engineers who designed the car thought about the physics to make it all work efficiently. At each deeper level, you can think about details that were not important at higher levels, but are still crucial to making the system work. We could continue to lower and lower levels of abstraction until we start thinking about quantum interactions of atoms—fortunately you don’t need to worry about that to merge onto the interstate!

There are times, however, when it is a good idea to take a look “under the hood”—to go deeper than the abstraction levels that you typically care about. At the very least, you might want to know whether the car has a diesel engine before filling up the tank, or to be aware that your car has oil, and you should get it changed sometimes.

Similarly, you need not constantly consider the inner workings of your CPU in order to write good code. Thinking about variables as boxes that store values is a good level of abstraction. But, having some knowledge of what goes on under the hood can be important. When you first declare your variables and assign them a type, it is a good idea to pause and consider what this actually means at the hardware level.

<img src="../1. Programming Fundamentals/images/hardware.png">

As mentioned earlier, a type indicates both a size and an interpretation. The figure above shows you the now-familiar figure with code and its conceptual representation. For this module, we will add a third column, showing you the underlying representation at the hardware level. When you declare a variable x of type int, you should think about this conceptually as a box called x with a value 42 inside. But at a hardware level, the type int means that you have allocated 32 bits dedicated to this variable, and you have chosen for these bits to be interpreted as an integer number in order to yield the value 42.

__Hexadecimal:__

As you may well imagine, reading and writing out a series of 32 of 1’s and 0’s is tedious at best and error-prone at worst. Because of this, many computer scientists choose to write out the values of numbers they are thinking about in binary using an encoding called _hexadecimal_, or _hex_ for short. Hex is base 16, meaning that it represents a number with a 1’s column, a 16’s column, a 256’s column, and so on. As a hex digit can have 16 possible values (0–15), but our base 10 digits have only 10 possible symbols (0–9) we use the letters A-F to represent the values 10-15 in a single digit. The number eleven, for example, is represented by the single digit ’B’ in hex.

Numbers represented in binary can easily be converted to hex by simply grouping them into 4-digit clusters, each of which can be represented by a single hex digit. For example, the 4 rightmost bits in the figure above (colored blue) are 1010, which has the decimal value 10 and the hex value A. The next 4 bits in the figure (colored green) are 0010, which has the decimal value 2 and the hex value 2. The remaining 24 bits in the number are all zeroes. Instead of writing out the entire 32 bit binary sequence, we can use 8 digits of hex (0x0000002A) or the shorthand 0x2A. (In both cases, the leading 0x (interchangeable with just x) indicates that the number is in hex.)


<h2>Basic Data Types</h2>

C supports a very small number of data types, each with a unique combination of size and interpretation. Basic data types are shown in the figure below. Note that while the sizes shown are typical and what we will use in general discussion in this book, they are not guaranteed. In particular, sizes depend on the hardware and the compiler—the program that turns your code into instructions the computer can actually execute (more on this later).

<img src="../1. Programming Fundamentals/images/data_types.png">

<h3>char</h3>

A char (pronounced either “car” or “char”) is the smallest data type—a mere 8 bits long—and is used to encode characters. With only 8 bits, there are only 2^{8}=256 possible values for a char (from 00000000 to 11111111). On most machines you will use, these 8 bits are interpreted via the American Standard Code for Information Interchange (or ASCII) character-encoding scheme, which maps 128 number sequences to letters, basic punctuation, and upper- and lower-case letters. A subset of this mapping is shown in the figure below - please don’t try to memorize it. Another, much more expressive character-encoding scheme you may encounter (particularly when needing to encode non-English characters) is Unicode (which requires more than 1 byte).

<img src="../1. Programming Fundamentals/images/char.png">

Now if you look at the first line of code in this next figure:

<img src="../1. Programming Fundamentals/images/char_two.png">

you can see the char c declared and initialized to the value 'A'. Writing down this literal gives us the numerical value for A without us having to know that it is 65. If we did need to know, we could consult an ASCII table like the one in the figure above. Being able to write 'A' instead of 65 is another example of abstraction—we do not need to know the ASCII encoding, we can just write down the character we want.

Figure caption: Examples of chars and ints. At first glance, c and x appear identical since they both have the binary value 65. However, they differ in both size (c has only 8 bits whereas x has 32) and interpretation (c’s value is interpreted using ASCII encoding whereas x’s value is interpreted as an integer). Similarly, y and z are identical in hardware but have differing interpretations because y is unsigned and z is not.

<h3>int</h3>

We have said that an int is a 32-bit value interpreted as an integer directly from its binary representation. As it turns out, this is only half of the story—the positive half of the story. If we dedicate all 32 bits to expressing positive numbers, we can express 2^{32} values, from 0 up to 4,294,967,295. We request this interpretation by using the qualifier unsigned in the declaration, as shown in the second line of the figure below.

What about negative numbers? ints are actually represented using an encoding called two’s complement, in which half of the 2^{32} possible bit patterns are used to express negative numbers and the other half to express positive ones. Specifically, all numbers with the most significant bit equal to 1 are negative numbers. A 32-bit int is inherently signed (i.e., can have both positive and negative values) and can express values from -2,147,483,648 to 2,147,483,647. Note that both unsigned and signed ints have 2^{32} possible values. For the unsigned int they are all positive; for the signed int, half are positive and half are negative.

In two's complement, the process for negating a number may seem a bit weird, but actually makes a lot of sense when you understand why it is setup this way. To compute negative X, you take the bits for X, flip them (turn 0s into 1s and 1s into 0s), and then add 1. So if you had 4-bit binary and took the number 5 (0101) and wanted negative 5, you would first flip the bits (1010) and then add 1 (1011). Why would computer scientists pick such a strange rule? It turns out that this rule makes it so that you can just add numbers naturally and get the right result whether the numbers are positive or negative. For example -5 + 1 = -4, and in binary 1011 + 0001 is 1100. To see that 1100 is -4, flip the bits (0011) and add 1 (0100) which is 4.

Another pair of qualifiers you may run into are short and long which decrease or increase the total number of bits dedicated a particular variable, respectively. For example, a short int (also referred to and declared in C simply as a short) is often only 16 bits long. Technically, the only requirement that the C language standard imposes is that a short int has fewer than or equal to as many bits as an int, and that a long int has greater than or equal to as many bits as an int.

<img src="../1. Programming Fundamentals/images/int.png">

<h3>float and double</h3>

The final two basic data types in C allow the programmer to express real numbers. Since there are an infinite number of real numbers, the computer cannot express them all (that would require an infinite number of bits!). Instead, for values that cannot be represented exactly, an approximation of the value is stored.

If you think about the fact that computers can only store values as 0s and 1s, you may wonder how it is possible to store a real number, which has a fractional part. In much the same way that decimal representations of a number can have a fractional portion with places to the right of a decimal point (the tenth’s, hundredth’s, thousandth’s, etc. places), binary representations of numbers can have fractional portions after the binary point. The places to the right of the binary point are the half’s, quarter’s, eighth’s, etc. places.

One way we could (but often do not) choose to represent real numbers is fixed point. We could take 32 bits, and interpret them as having the binary point in the middle. That is, the most significant 16 bits would be the “integer” part, and the least 16 bits would be the “fractional” part. While this representation would be conceptually simple, it is also rather constrained—we could not represent very large numbers, nor could we represent very small numbers precisely.

Instead, the most common choice is similar to scientific notion. Recall that in decimal scientific notation, number 403 can be expressed as $4.03\times 10^{2}$. Computers use floating point notation, the same notation but implicitly in base 2: $m\times 2^{e}$. m is called the mantissa (though you may also hear it referred to as the significand). e is the exponent.

A float has 32 bits used to represent a floating point number. These 32 bits are divided into three fields. The lowest 23 bits encode the mantissa; the next 8 bits encode the exponent. The most significant bit is the sign bit, s, which augments our formula as follows: $(-1)^{s}\times m\times 2^{e}$. (When s = 1, the number is negative. When s = 0, the number is positive.) A double has 64 bits and uses them by extending the mantissa to 52 bits and the exponent to 11 bits. Examples of both a float and a double are shown in the figure below.

<img src="../1. Programming Fundamentals/images/float.png">

__Standards__. There would be many possible ways to divide a given number of bits into the mantissa and exponent fields. The arrangement here is part of the IEEE (Institute of Electrical and Electronics Engineers) Standard. Industry standards like these make it possible for engineers from a variety of companies to agree upon a single encoding by which floating point numbers can be represented and subsequently interpreted across all languages, platforms, and hardware products. Part of the IEEE Standard for floating point notation involves two adjustments to the bit-wise representations of a float and a double. These adjustments (normalization and adding a bias) make the actual binary representation of these numbers less accessible to a first time observer. We encourage the interested reader to read the actual IEEE floating point Standard and allow the less curious reader simply to trust that there is a bit-wise encoding for the numbers in the figure above, which is just outside the scope of this course.

__Precision__. There are an infinite number of values between the numbers 0 and 1. It should be unsurprising, then, that when we use a finite number of bits to represent all possible floating point values, some precision will be lost. A float is said to represent _single-precision_ floating point whereas a double is said to represent _double-precision_ floating point. (Since a double has 64 bits, it can dedicate more bits to both the mantissa and exponent fields, allowing for more precision.)

<img src="../1. Programming Fundamentals/images/precision.png">

How does precision play out in practice? The figure above shows how unexpected (or at least unintuitive) things can happen due to imprecision. It is important for programmers to understand precision when they choose types for their variables and when they perform tests on variables whose values are assumed to be known. Some programs will need more precision in order to run correctly. Some programs will have to allow for a small degree of imprecision in order to run correctly. Understanding exactly the level of precision required for your code is critical to writing correct code.

It is also important to understand the cost. A double takes up twice as much space as a float. This may not matter for a single variable, but some programs declare thousands or even millions of variables at a time. If these variables do not require the precision of a double, choosing a float can make your code run faster and use less memory with no loss of correctness.

<h3>Printing redux</h3>

As we learned in the lesson on printing, C supports printing formatted information via the function printf. Now that we have multiple types, we can explore the various format specifiers, which allow us to print variables of a variety of types. The figure below shows the most common specifiers.

<img src="../1. Programming Fundamentals/images/printing_specifiers.png">

The figure below shows some examples of these format specifiers being used. Here, the code (shown on the left) declares a few variables, and prints them out using the format specifiers described in the figure above. Note that while we have already discussed hexadecimal (base 16), this example also makes reference to octal—which is base 8.

<img src="../1. Programming Fundamentals/images/printing_specifiers_example.png">


<h2>Expressions Have Types</h2>

<h3>Expressions Have Types</h3>

In the Expressions lesson, we learned that expressions are evaluated to values—if you have `a+b*2`, the current value of b is read out of its box, multiplied by 2, then the value of a is read out of its box, and added to the product of b*2. The expression evaluates to the resulting sum.

Expressions also have types, which are determined by the types of the sub-expressions that make them up. The simplest expressions are constants, which have type int if they are integer constants (e.g., 2 or 46), or type double if they are real constants (e.g., 3.14, or -8.19). The types of constants can be modified by applying a letter suffix if needed (U for unsigned, L for long, and f for float): 3.14f is a constant with type float, and 999999999999L is a constant with type long int. The next simplest type of expression is a variable, which has whatever type it was declared to have.

Most (but not all) expressions with binary operators—e1 op e2 (e.g., a + b or c * 4)—have the same type as their operands. If a and b are doubles, then a + b is a double as well. Likewise, if c is an int, then c * 4 is also an int (note that 4 is an int).

The type of a function is its declared return type. That is, if you have

```c
int f (int x, int y) {...};
int g (double d, char c) {...};
```

then the expression __f(3, 4) + g(42.6, 'a')__ has type int. We can see this from the fact that __f(3, 4)__ has type int (f is declared to return an int), as does __g(42.6, 'a')__. As we just discussed, adding two ints results in an int.

<h3>Type Conversion</h3>

The next natural question is “what happens if you have a binary operator, and its operands have different types?” For example, if a is an int and b is a double, then what type is a + b? The answer to this question depends on the types involved.

Fundamentally, the first thing that must happen is that the two operands must be converted to the same type. Most operations can only be performed on operands of the same type. The processor has one instruction to add two 32-bit integers, a different instruction to add two 16-bit integers, a third one to add two 32-bit floats, a fourth to add two 64-bit doubles, and so on. The compiler must translate your code into one of these instructions, so, it must pick one of them and arrange to have the inputs in a proper format in order to be able to perform the math.

When the two operands have different types, the compiler attempts to add a _type conversion_ (sometimes called a _type promotion_) to make the types the same. If no type conversion is possible, the compiler will issue an error message and refuse to compile the code. When the compiler inserts a type conversion, it typically must add instructions to the program which cause the processor to explicitly change the bit representation from the size and representation used by the original type to the size and representation used by the new type. The compiler chooses which operand to convert based on what gives the “best” answer. In our int + double example, the compiler will convert the int to a double to avoid losing the fractional part of the number.

There are four common ways that the bit representations must be changed to convert from one type to another during a type promotion. When converting from a smaller signed integer type to a longer signed integer, the number must be sign extended—the sign bit (most significant bit) must be copied an appropriate number of times to fill in the additional bits. When converting from a smaller unsigned integer type to a longer unsigned integer type, the number must be zero extended—the additional bits are filled in with all zeros. The third common way that the bit representation can be changed during an automatic conversion happens when a longer integer type is converted to a shorter integer type. Here, the bit pattern is truncated to fit—the most significant bits are thrown away, and only the least significant bits are retained.

The fourth way that the bit representation may need to be changed is to fully calculate what the representation of the value is in the new type. For example, when converting from an integer type to a real type, the compiler must insert an instruction which requests that the CPU compute the floating point (binary scientific notation) representation of that integer.

There are other cases where a type conversion does not need to alter the bit pattern, instead just changing how it is interpreted. For example, converting from a signed int to an unsigned int leaves the bit pattern unchanged. However, if the value was originally negative, it will now be interpreted as a large positive number. Consider the following code:

```c
unsigned int bigNum = 100;
int littleNum = -100;

if (bigNum > littleNum) {
    printf("Obviously, 100 is bigger than -100!\n");
}
else {
    printf("Something unexpected has happened!\n");
}
```

When this code runs, it prints “Something unexpected has happened!”. The bit pattern of littleNum (which has a leading 1 because it is negative) is preserved; the value is changed to a number larger than 100 (because under an unsigned interpretation, this leading 1 indicates a very large number). We will note that the compiler produces a warning (an indication that you probably did something bad—which means you should go fix your code!) for this behavior, as comparing signed integers to unsigned integers is typically a bad idea for exactly this reason.

When you declare a variable and assign it a particular type, you specify how you would like the data associated with that variable—the bit pattern “in the box”—to be interpreted for the entirety of its life span. There are some occasions, however, when you or the compiler may have to temporarily treat the variable as though it were of another type. When a programmer does this, it is called _casting_ and when a compiler does it, it is called _type conversion_ or _type promotion_. It is extremely important to understand when to do the former and when the compiler is doing the latter because it can often be the cause of confusion and consequently errors. We will note that while understanding when to cast is important, understanding that you should generally not cast is even more important—sprinkling casts into your code to make errors go away indicates that you are not actually fixing your code, but rather hiding the problems with it.

<h3>Casting</h3>

Sometimes, the programmer wants to explicitly request a conversion from one type to another—either because the compiler has no reason to insert it automatically (the types are already the same, but a different type of operation is desired), or because the compiler does not consider the conversion “safe” enough to do automatically. This explicitly requested conversion is called casting and is written in the code by placing the desired type in parentheses before the expression whose value should be converted. For example, __(double)x__ evaluates x (by reading the value in its box), then converts it to a double.

To see why we would want this capability, let us begin with a seemingly benign example. We want to write a program that calculates how many hours you would work per day if you stretched the 40 hour work week across 7 days instead of 5. A naïve implementation of the code might begin with two ints, nHours and nDays.

```c
int main(void) {
    int nHrs = 40;
    int nDays = 7;

    float avg = nHrs/nDays;
    printf("%d hours in %d days\n", nHrs, nDays);
    printf("work %.1f hours per day!\n", avg);
    //...
}
```

Here, int is a perfectly reasonable type as we are working only in integer numbers of hours (40) and days (5). This code then divides the number of hours by the number of days and stores the result in the float avgWorkDay. If you execute this code carefully by hand, you will find that when it prints the answer out, it will print 5.0. Somehow our work week just got shortened to 35 hours!

In this case, the problem lies in the fact that we divided two ints, and integer division always produces an integer result—in this case 5. When the compiler looks at this expression, there are only integers involved, so it sees no need to convert either operand to any other type. It therefore generates instructions that request the CPU to perform integer division, producing an integer result.

However, when the compiler examines the assignment, it sees that the type on the left (the type of the box it will store the value in) is float, while the type of the expression on the right (the type of the value that the division results in) is int. It then inserts the type conversion instruction at the point of the assignment: converting the integer division result to a floating point number as it puts it in the box.

Here, what we really wanted to do was to convert both operands to a real type (float or double) before the division occurs, then perform the division on real numbers. We can achieve this goal by introducing an explicit cast—requesting a type conversion.

```c
int main(void) {
    int nHrs = 40;
    int nDays = 7;

    float avg = nHrs/float(nDays);
    printf("%d hours in %d days\n", nHrs, nDays);
    printf("work %.1f hours per day!\n", avg);
    //...
}
```

<h3>Overflow and Underflow</h3>

The fact that each type has a set size creates a limit on the smallest and largest possible number that can be stored in a variable of a particular type. For example, a short is typically 16 bits, meaning it can express exactly 2^16 possible values. If these values are split between positive and negative numbers, then the largest possible number that can be stored in a short is 0111111111111111, or 32767.

What happens if you try to add 1 to this number? Adding 1 yields an unsurprising 1000000000000000. The bit pattern is expected. But the interpretation of a signed short with this bit pattern is -32768. If the short were unsigned, the same bit pattern 1000000000000000 would be interpreted as an unsurprising 32768.

This odd behavior is an example of overflow: an operation results in a number that is too large to be represented by the result type of the operation. The opposite effect is called underflow in which an operation results in a number that is too small to be represented by the result type of the operation. Overflow is a natural consequence of the size limitations of types.

Note that overflow (and underflow) are actions that occur during a specific operation. It is correct to say “Performing a 16-bit signed addition of 32767 + 1 results in overflow.” It is not correct to say “-32768 overflowed.” The number -32768 by itself is perfectly fine. The problem of overflow (or underflow) happens when you get -32768 as your answer for 32767 + 1. The operation does not have to be a “math” operation to exhibit overflow. Assignment of a larger type to a smaller type can result in overflow as well.


<h2>"Non-numbers"</h2>

It is worth restating: *__everything is a number__*. This rule is fundamental to understanding how computers work and is one of the most important concepts in programming. For every variable you create in any programming language, the value of that variable—the data that you place “in the box” of every conceptual diagram you draw—is stored in your computer as a series of zeros and ones. This fact is easy to accept for a positive integer, whose base 10 representation is simply converted to base 2 and then stored in a series of bits. Understanding how negative numbers and floating point numbers are also represented as a series of zeros and ones may be a little less straightforward, but is still appeals to our general intuition about numbers.

Extending this rule to things that do not seem like numbers—words, colors, pictures, songs, movies—may seem like a much harder conceptual leap. However, with our newfound understanding that computers can only operate on numbers, we must realize that all of these things must be numbers too—after all, our computers operate on them regularly.

Finding a way to encode these “non-number” data types is simply a matter of coming up with a new convention for encoding the information as bits, and interpreting the bits to mean the original information. These new conventions are not included as basic data types of the C programming language (though some of them are basic data types in languages other than C). Instead, new types are formed by combining the basic types to achieve the programmer’s goals. These more complex types may be widely accepted programming conventions (like the representation of strings), or may be something done by one single programmer specific to their programming task.

<h3>Strings</h3>

A string is a sequence of characters that ends with a special character called the _null terminator_, which can be written with the character literal '\0' (pronounced “backslash zero”) that signals the end of the string. A string is referred to by the location of the first character in memory and each 8-bit character is read until the '\0' is detected. A simple drawing of this concept is shown in the figure below:

<img src="../1. Programming Fundamentals/images/strings.png">

Strings are not a basic data type in C, meaning you cannot simply declare and use them as you would an int or a double. To give you a tiny glimpse into the complexity of the matter, consider how large a string should be. Is there pre-defined number of bits that should correspond to a string data type? Since each string has a unique number of characters, this does not seem like a choice that can be made up front. In fact, the size of a string will need to be dynamically determined on a per-string basis. To truly understand how to create and use strings, an understanding of pointers is required. This is one reason why the above figure is deliberately lacking in details.

<h3>Images</h3>

Your computer frequently displays images—whether it's the windows and icons on your screen, or the lolcats you view in your web browser. These may seem like they are not numbers, however, they are actually just many numbers put together. The first step to representing an image as a number is to represent a color as a number.

While there are many ways to represent a color as a number, the most common is RGB encoding, which encodes each color by specifying how much red, green, and blue they contain. Typically, this encoding is done with each component being represented on a scale from 0 to 255. The RGB values for the color red are: R=255, G=0, B=0. Orange is R=255, G=127, B=0. If you search the Internet, you will find many online tools that will let you select a color, and then tell you its corresponding RGB encoding.

Once we can encode a single color numerically, an image is encoded as a 2D grid of colors. Each “dot” in this grid is called a pixel. As with strings, understanding how to store a 2D sequence requires an understanding of pointers.

You may have noticed that computers typically have a variety of image formats, such as JPG, BMP, PNG, TIFF, and many others. Each of these encodes the image numerically, however, the specific details differ between the formats. Some image formats compress the image data—performing math on the colors (after all, the colors are just numbers!) to encode the image data in fewer bits, reducing the size of the data that must be stored on disk and/or transferred across the Internet.

<h3>Sound and Video</h3>

Sound is another common aspect of computer use that seems like it is not a number. However, sound is a naturally a waveform, which can easily be represented as a sequence of numbers. The most direct numeric representation of a sound wave is to record the “height” of the wave at periodic intervals, forming a sequence of numbers. The frequency of these intervals is called the sampling rate (higher sampling rates result in better quality of the sound), and is typically 22 kHz or 44kHz—that is 22,000 or 44,000 samples per second. Stereo sound simply has 2 sequences of numbers—one for the left channel and one for the right channel. As with images, there are many typical formats (e.g., WAV, AIFF, AAC, etc.), some of which are compressed.

A video is a sequence of images (called “frames”) and the corresponding sound. We have already seen how to encode images and sound as numbers. The simplest approach would be to encode the video as the sequence of images plus the sound. While this approach gives us a bunch of numbers, it would be huge—one minute of a 512 pixel x 256 pixel video at 32 frames per second with a stereo sound track at 44 kHz would require about 725 Megabytes (almost 1 GB). Correspondingly, all common movie formats (e.g., MP4, MOV, etc.) apply compression, not only to the images and sound themselves, but also in terms of not storing the entire image for all frames, but rather storing a way to compute the next frame’s image based on the changes from the previous frame.


<h2>Complex, Custom Data Types</h2>

<h3>Structs</h3>

You may be starting to notice that the definitions of many data types are essentially a set of agreed upon conventions. One of the great things about rich programming languages like C is that they give a programmer the power to create new data types and associated conventions. Some conventions, like the IEEE floating point standard, are agreed upon across multiple programming languages, compilers, machine languages, and the architecture of the processors they run on. This requires the coordination of hundreds of companies and tens of thousands of engineers. Other conventions can be more local, existing only in a particular code base, or a collection of files that all use a common library. This may require the coordination of multiple people (who are usually working together already) or may only affect a single person who simply wishes to produce clean, modifiable, and debuggable programs.

Suppose you are designing a program that regularly draws and computes various properties of rectangles. It would be very convenient to have a data type that captures the basic properties of a rectangle. In C, this is accomplished via the keyword __struct__.

<img src="../1. Programming Fundamentals/images/struct_A.png">

A __struct__ allows a programmer to bundle multiple variables into a single entity. For example, if we wish to define a rectangle via its 4 coordinates on an X-Y plane as shown in the left-most figure above (Visualization), these four coordinates can be bundled into a single, conglomerate data structure, whose internal structure will look like the code in center figure above (Code Fragment). Structs are represented conceptually with a single box in which all the component fields reside, each with their own box. The right-most figure above (Conceptual Representation) shows a variable called myRect with its 4 fields.

Syntactically, there are multiple ways to declare, define, and use structs. The figure below shows four different syntactic options that all create the same conceptual struct. Regardless of which syntactic option you choose, the drawing of your conceptual representation will be the same. It is not important for you to be “fluent” in all four options. You may choose a single approach and stick with it. However, it is important for you to know about all four options because others contributing to the same code base as you may have a different style, and internet searches will also result in many versions of the effectively the same code. You need to be aware of these differences so that you can correctly understand and extend code whose syntax differs from your preferred style.

<img src="../1. Programming Fundamentals/images/structOptions.png">

Struct declarations do not go inside functions; they live in the global scope of the program, next to function declarations and definitions. All of them use the keyword struct. Option 1 in the figure above begins with the keyword __struct__, followed by the tag of our choosing. In this case, we use the tag rect_t. Ending the tag in “_t” is a convention that makes it easier to recognize the name as identifying a type throughout your code. A name such as rect would be acceptable, just a little less reader-friendly. Everything inside the braces belongs to the definition of the newly defined struct named rect_t. The semi-colon indicates the completion of the definition.

The far right column in the above figure shows how to instantiate a variable for each syntactic option. For Option 1, the type of the variable is struct rect_t, and the name of the variable is myRect. Once you declare the variable, you can access the fields of the struct using a dot (period): myRect.top gives you access to the field top of type int inside the myRect variable. Note: when you instantiate a variable of type struct rect_t, you choose a top level name (myRect) only. The names of the fields are determined in the definition of the structure and cannot be customized on a per-instance basis.

A key part of good programming is using good abstractions. Structs are another form of abstraction. Once we have a rectangle struct, other pieces of code can operate on rectangles without looking at the implementation. We could write many functions to manipulate rectangles, and those functions could be the only pieces of code that know the internal details of rectangles—the rest of the code could just call those functions.

However, part of using good abstractions is using them correctly. In the case of structs, remember that their primary purpose is to group together data that belongs logically together. In this example, we use a struct for a rectangle—something that logically makes sense as a combination of other pieces of data. In the first figure above we illustrate the connection between the conceptual idea (the visualization on the left), and the declaration in the middle. We can think about operations on rectangles and understand what they are conceptually, without looking at the implementation details.

<h3>Typedef</h3>

<img src="../1. Programming Fundamentals/images/structOptions.png">

Many consider Option 1 in the figure above to be somewhat unwieldy, because the type of the variable includes the word struct in it. For example, suppose you wanted a function called shrinkRect that takes a rectangle as its input and returns a smaller rectangle as its output. Using the syntax of Option 1, the function would have the signature __struct rect_t shrinkRect(struct rect_t shrinkThisRectangle)__. Depending on how often you need to write out the type of the structure, this syntax can become cumbersome and make your code appear cluttered.

The solution to needing to type out “struct rect_t” every time you want to declare, pass, or use your new struct is to create a new data type that is explicitly of type struct. We do this using the keyword typedef. The exact syntax is shown in Option 2 above. The first lines declare the rect_tag struct in the same way as before. However, after this struct definition, the last line (typedef struct rect_tag rect_t;) is the declaration of the type “rect_t” which is defined as having the type “struct rect_tag”. Using "_tag" makes code easier to read and encourages the use of the type over the tag. Options 3 and 4 also “typedef” a new type, however, they both combine the typedef into a single statement with the structure declaration.

Although typedefs can simplify the use of structs, that is far from their only use. Any time that you are writing code in a specific context, typedefs can help you make your code more readable, by naming a type according to its meaning and use. For example, suppose you are writing a program that deals with colors.

In the context of programming color characteristics, you might want to define a new data type for the colors in an RGB value. For example, you could create a new data type called rgb_t (which represents one of the red, green, or blue components of the color), that is of type unsigned int (because we know the values should be positive integers) and then declare variables red, green, and blue of type rgb_t. An example of this is shown on the left side of the figure below.

<img src="../1. Programming Fundamentals/images/typedef.png">

Typedefs provide a helpful abstraction for programmers. Instead of having to write “unsigned int” throughout her code, or frankly even think about the range of acceptable values in RGB representations, the programmer simply uses the custom type rgb_t and gives it no further thought.

Typedefs have another nice property of limiting the definition of a particular type to a single place in the code base. Suppose a programmer wished to conserve the space dedicated to variables and therefore wished to use an unsigned char instead of an unsigned int (after all, the values from 0 to 255 all fit within the 8-bits of an unsigned char). Without a typedef, this change would require a tedious and error-prone search of many (but by no means all—it may be used for variables unrelated to colors) instances of unsigned int throughout the code, changing these types to unsigned char. With a typedef, the programmer simply changes the single line of code in which rgb_t was defined (see the right side of the figure). No other code changes are required.

__Heads up about typedef:__ The use of typedefs is somewhat controversial in some programming circles. In the context of structs, there are those who believe that it is important not to abstract the struct away from a type. They believe that programmers should always know when a particular variable is a struct and when it is not. Similarly, they believe that programmers should always be aware of the actual types of the data they use lest they fall prey to typing errors that could have been otherwise avoided. Use typedefs when the abstraction simplifies rather than obfuscates your code.

<h3>Enumerated Types</h3>

The last form of custom type that a programmer can create is called an enumerated type. Enumerated types are named constants that can increase the readability and the correctness of your code. They are most useful when you have a type of data with a set of values that you would like to label by their conceptual name (rather than using a raw number) and either the particular numerical values do not matter (as long as they are distinct), or they occur naturally in a sequential progression. For example, until 2011 the United States’ Homeland Security maintained a color-coded terrorism threat advisory scale that it used to maintain heightened or more relaxed security in various locations including major airports. There were five threat levels from green to red in ascending order of severity.

These five threat levels could be recorded in an enumerated type which we can create ourselves as shown in the following code.

```c
enum threat_level_t {
    LOW,
    GUARDED,
    ELEVATED,
    HIGH,
    SEVERE
};
```

We begin with the keyword enum, followed by the name of the new enumerated type, in this case threat_level_t. The various threat levels are placed in curly braces, as shown. Each level is assigned a constant value, starting with 0. The enumerated names are constant—they are not assignable variables. Their values cannot change throughout the program. The convention for indicating that a name denotes a constant is to write the name in all uppercase. However, variables of the enumerated type can be created, and assigned to normally.

Because enumerated types have integer values, they can be used in constructs such as simple value comparisons, switch statements, and for loops. the following code shows an example of the first two.

```c
void printThreat(enum threat_level_t threat) {
    switch(threat) {
        case LOW:
            printf("Green/Low.\n");
            break;
        case GUARDED:
            printf("Blue/Guarded.\n");
            break;
        case ELEVATED:
            printf("Yellow/Elevated.\n");
            break;
        case HIGH:
            printf("Orange/High.\n");
            break;
        case SEVERE:
            printf("Red/Severe.\n");
            break;
    }
}

void printShoes(enum threat_level_t currThreat) {
    if (currThreat >= ELEVATED) {
        printf("Please take off your shoes.\n");
    }
    else {
        printf("Please leave your shoes on.\n");
    }
}

int main(void) {
    enum threat_level_t myThreat = HIGH;
    printf("Current threat level is:\n");
    printThreat(myThreat);
    printShoes(myThreat);
    return 0;
}
```

Another example of enumerated types would be if we wanted to make a program that regularly refers to a small set of fruits: grapes, apples, oranges, bananas, and pears. Suppose we want to represent each of these as a number (because we regularly use constructs like switch statements on the fruits themselves), but we do not really care which number each is represented as. We can make a enumerated type, __enum fruit_t {GRAPE, APPLE,...};__ and then use these constants throughout our code.



<h1>Week 4: Project</h1>
