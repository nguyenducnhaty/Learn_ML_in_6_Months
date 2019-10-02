<h1>Week 1: Writing Code</h1>



<h2>Step 5</h2>

<h3>Step 5: Translation to Code</h3>

We should start Step 5 by writing down the declaration of the function that we are writing, with its body (the code inside of it) replaced by the generalized algorithm from Step 3, written as _comments_. Comments are lines in a program which have a syntactic indication that they are for humans only (to make notes on how things work, and help people read and understand your code), and not an actual part of the behavior of the program. When you execute code by hand, you should simply skip over comments, as they have no effect. In C, there are two forms of comments: __//__ comments to the end of the line, and __/*...*/__ makes everything between the slash-star and the star-slash into a comment.

One thing we may need to do in writing down the function declaration is to figure out its parameter types and return type.

<h3>Translating Algorithm Components</h3>

Once you have written the function declaration and written the algorithm steps as comments, you are ready to translate each step of the algorithm to code, line by line. If you have written good (i.e., clear and precise) steps in Step 3, this translation should be fairly straight forward—most steps you will want to implement naturally translate into the syntax we have already learned:

__Repetition:__
Whenever you have discovered repetition while generalizing your algorithm, it translates into a loop. Typically, if your repetition involves counting, you will use a *__for loop__*. Otherwise, if you are sure you always want to do the body at least once, a *__do-while__* is the most appropriate type. In other cases (which typically align with steps like "as long as (something)..." *__while loops__* are generally your best bet. If your algorithm calls for you to "stop repeating things" or "stop counting" you will want to translate that idea into a *__break__* statement. Meanwhile, if your algorithm calls for you to skip the rest of the steps in the current repetition, and go back the start of the loop, that translates into a *__continue__* statement.

__Decision Making:__
Whenever your algorithm calls for you to make a decision, that will translate into either *__if/else__* or *__switch/case__*. You will typically only want switch/case when you are making a decision based on many possible numerical values of one expression. Otherwise, you will want *__if/else__*.

When your algorithm knows the answer and has no more work to do, you should write a *__return__* statement, which returns the answer that you have computed.

Whenever you have a complex line in your algorithm—something that you cannot translate directly into a few lines of code—you should call another function to perform the work of that step. Abstracting code out into a separate function has another advantage—you can reuse that function to solve other problems later.

With a clearly defined algorithm, the translation to code should proceed in a fairly straightforward manner. Initially, you may need to look up the syntax of various statements, but you should quickly become familiar with them. If you find yourself struggling with this translation, it likely either means that your description of your algorithm is too vague (in which case, you need to go back to it, think about what precisely you meant, and refine it), or that the pieces of your algorithm are complex and you are getting hung up on them, rather than calling a function to do that piece, which you will write afterwards.

<h3>Top-down Design and Composability</h3>

__Top-down design:__
The process of taking large, complex pieces, and separating them out into their own function—known as top-down design —is crucial as you write larger and larger programs. While it may seem advantageous to just write everything in one giant function, such an approach not only makes the programming more difficult, but also tends to result in a complex mess that is difficult to test and debug. Whenever you have a chance to pull a well-defined logical piece of your program out into its own function, you should consider this an opportunity, not a burden.

__Composability__
When you are translating your code from your algorithmic description to C (or whatever other language you want), you can translate an instruction into code in the same way, no matter what other steps it is near, or what conditions or repetitions it is inside of. That is, you do not have to do anything special to write a loop inside of another loop, nor to write a conditional statement inside of a loop—you can just put the pieces together and they work as expected.

The ability to put things together and have them work as expected is called _composability_ and is important to building not only programs, but other complex systems. If you put a for loop inside of an if statement, you do not need to worry about any special rules or odd behaviors: you only need to know how a for loop and an if statement work, and you can reason about the behavior of their combination.


<h2>Tools</h2>

<h3>UNIX basics</h3>

UNIX is a multi-tasking, multi-user operating system, which is well-suited to programming and programming-related tasks (running servers, etc.). Technically speaking, UNIX refers to a specific operating system developed at Bell Labs in the 1970s, however, today it is more commonly used (slightly imprecisely) to mean “any UNIX-like” operating system, such as Linux, Free BSD, Solaris, AIX, and even Mac OSX. Here, we will use the more general term, and note that you are most likely to use Linux or Mac OSX.

__In the Beginning Was the Command Line:__

While UNIX has a graphical interface (GUI), its users often make use of the _command line_. In its simplest usage, the command line has you type the name of the program you want to run, whereas a GUI-based operating system might have you double-click on an icon of the program you want to run. The command line interface can be intimidating or frustrating at first, but an expert user will often prefer the command line to a GUI. Beyond being the natural environment to program in, it allows for us to perform more sophisticated tasks, especially automating those which might otherwise be repetitive.

To reach a command line prompt, you will need to use a terminal emulator (commonly referred to as just a "terminal"), which is a program that emulates a text-mode terminal. If you are running a UNIX based system (Linux or Mac OSX), a terminal is available natively. In Linux, if you are using the graphical environment, you can run xterm, or you can switch to an actual text-mode terminal by pressing Ctrl-Alt-F1 (to switch back to the graphical interface, you can press Ctrl-Alt-F7). If you are running Mac OSX, you can run the Terminal application (typically found under Applications >Utilities).

If you are running Windows, there are some command line options (typically called cmd or command, depending the version of Windows), however, these tend to be quite simplistic by UNIX standards. In fact, the Windows command prompt behaves entirely differently and uses different commands than a Unix shell. You could install a tool called Cygwin, which provides the basics of a UNIX environment if you wanted.

__Command line arguments:__

Many UNIX commands take arguments on the command line to specify exactly what they should do. In general, command line arguments are separated from the command name (and each other) by white space (one or more spaces or tabs). For example, ls -a .. will display "all" files in the parent directory, including those that are usually not displayed.

The ".." is an argument that tells ls which directory to display the contents of. The argument "-a" is an example of an “option.” Options are arguments that differ from “normal” arguments in that they start with a hyphen "-" and change the behavior of the command, rather than specifying the typical details of the program.

There are a handful of useful directory-related commands that you should know. The first is cd, which stands for “change directory.” This command changes the current directory to a different directory that you specify as its command line argument.

Another useful command is ls which lists the contents of a directory—what files and directories are inside of it. With no arguments, ls lists the contents of the current directory. If specify one or more path names as arguments, ls will list information about them. For path names that specify directories, ls will display the contents of the directories.

The _ls_ command also can take special arguments called “options”. For example, for _ls_ the -l option requests that _ls_ print extra information about each file that it lists. The -a option requests that _ls_ list all files. By contrast, its default behavior is to skip over files whose names begin with `.` (i.e., a dot). While this behavior may seem odd, it arises from the UNIX convention that files are named with a `.` if and only if you typically do not want to see them. One common use of these “dot files” is for configuration files (or directories). For example, a command shell (which parses and executes the commands you type at the prompt) maintains a configuration file in each user’s home directory. For the command shell _bash_, this file is called _.bashrc_. For the command shell _tsch_, this file is called _.cshrc_.

Two other useful directory-related commands are _mkdir_ and _rmdir_. The mkdir command takes one argument and creates a directory by the specified name. The rmdir command takes one argument and removes (deletes) the specified directory. To delete a directory using rmdir, the directory must be empty (it must contain no files or directories, except for . and .. which cannot be deleted).

__Displaying Files:__

Commands to display the contents of files: _cat, more, less, head,_ and _tail_.

The first of these, _cat_, reads one or more files, concatenates them together (which is where it gets its name), and prints them out. As you may have guessed by now, cat determines which file(s) to read and print based on its command line arguments. It will print out each file you name, in the order that you name them.

If you do not give _cat_ any command line arguments, then it will read _standard input_ and print it out. Typically, standard input is the input of the terminal that you run a program from—meaning it is usually what you type. If you just run _cat_ with no arguments, this means it will print back what you type in. While that may sound somewhat useless, it can become more useful when either standard input or standard output (where it prints: typically the terminal’s screen) are _redirected or piped_ somewhere else.

While you can use _cat_ to display the contents of a file, you typically want a bit more functionality than just printing the file out. The more command displays one screenfull and then waits until you press a key before displaying the next screenfull. It gets its name from the fact that it prompts ---_More_-- to indicate that you should press a key to see more text. The _less_ command supercedes _more_ and provides more functionality: you can scroll up and down with the arrow keys, and search for text. Many systems actually run less whenever you ask for more.

There are also commands to show just the start (_head_) or just the end (_tail_) of a file. Each of these commands can take an argument of how many lines to display from the requested file. Of course, for full details on any of these commands, see their man pages.

Note that these commands just let you view the contents of files.

__Moving, Copying, and Deleting:__

Another task you may wish to perform is to move (_mv_), copy (_cp_), or delete (_rm_—stands for “remove”) files. The first two take a source and a destination, in that order. That is where to move (or copy) the file from, followed by where to move (or copy) it to. If you give either of these commands more than 2 arguments, they assume that the first N-1 are sources, and the last is the destination, which must be a directory. In this case, each of the sources is moved (or copied) into that directory, keeping its original filename.

The _rm_ command takes any number of arguments, and deletes each file that you specify. If you want to delete a directory, you can use the rmdir command instead. If you use rmdir, the directory must be empty—it must contain no files or subdirectories (other than . and ..). You can also use _rm_ to recursively delete all files and directories contained within a directory by giving it the -r option.

__Pattern Expansion: Globbing and Braces__

You may (frequently) find yourself wishing to manipulate many files at once that conform to some pattern—for example, removing all files whose name ends with ~ (editors typically make backup files while you edit by appending ~ to the name). You may have many of these files, and typing in all of their names would be tedious.

Because these names follow a pattern, you can use _globbing_—paterns which expand to multiple arguments based on the file names in the current directory—to describe them succinctly. In this particular case, you could do `rm *~` (note there is no space between the `*` and the `~`; doing `rm * ~` would expand the `*` to all files in the directory, and then `~` would be a separate argument after all of them). Here, `*` is a pattern which means “match anything”. The entire pattern `*~` matches any file name (in the current directory) whose name ends with `~`. The shell expands the glob before passing the command line arguments to rm—that is, it will replace `*~` with the appropriately matching names, and rm will see all of those names as its command line arguments.

There are some other UNIX globbing patterns besides just `*`. One of them is ? which matches any one character. By contrast, `*` matches any number (including 0) of characters. You can also specify a certain set of characters to match with [...] or to exclude with [!...]. For example, if you were to use the pattern file0[123].txt it would match file01.txt, file02.txt, and file03.txt. If you did file0[!123].txt, then it would not match those names, but would match names like file09.txt, file0x.txt, or file0..txt (and many others).

Sometimes, you may wish to use one of these special characters literally—that is, you might want to use `*` to mean just the character `*`. In this case, you can escape the character to remove its special meaning. For example, `rm \*` will remove exactly the file named `*`, whereas `rm *` will remove all files in the current directory.



<h1>Week 2: Compiling and Running</h1>

<h2>Introduction</h2>

<h3>Compiling Overview</h3>

Compiling a program is the act of translating the human-readable code that a programmer wrote (called “source code”) into a machine-executable format. The compiler is the program that performs this process for you: it takes your source code as input, and writes out the actual executable file, which you can then run.

At its simplest, compiling your program is a matter of running the compiler and giving it a command line argument specifying the .c file with the source code for your program. There are many different C compilers, but the most popular one is called __gcc__, which stands for __“GNU Compiler Collection.”__ If you write a program in a file called _myProgram.c_, you could execute the command _gcc myProgram.c_ to compile your code. Assuming that there are no errors in your code, the compiler would produce an executable program called _a.out_, which you could then execute by typing the command _./a.out_.

<h3>Compilation Process</h3>

<img src="../2. Writing, Running, and Fixing Code in C/images/compiler.png">

This figure illustrates a high-level view of the process that gcc takes to compile a program. Light blue boxes represent code you have written; light green boxes represent built-in parts of C. The orange clouds indicate steps of this process (each is a separate program, but gcc invokes these programs for you), and the white boxes represent intermediate files that gcc generates to pass information from one stage to the next. The dark blue box in the upper right represents the final executable—the program that you can run to make your computer do whatever the program tells it to do.

<h3>Preprocessing</h3>

The first step, in the upper left is the _preprocessor_, which takes your C source file and combines it with any _header files_ that it includes, as well as expanding any _macros_ that you might have used. To help understand this process, we will look at our first complete C program, which is algorithmically simple (all it does is print Hello World), but useful for explaining the compilation process.

```c
#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0

int main (void) {
    printf("Hello World\n");
    return EXIT_SUCCESS;
}
```

The first two lines are *include __directives__*. These lines of code are not actually statements which are executed when the program is run, but rather directives to the preprocessor portion of the compiler. In particular, these directives tell the preprocessor to literally include the contents of the named file at that point in the program source, before passing it on to the later steps of the compilation process.

__Header Files__

These _#include_ directives name the file to be included in angle brackets (<>) because that file is one of the standard C header files. If you wrote your own header file, you would include it by placing its name in quotation marks (e.g., _#include "myHeader.h"_). (This is not a formal rule, but a very common convention.) Preprocessor directives begin with a pound sign (#) and have their own syntax.

In this particular program, there are two include directives. The first of these directs the preprocessor to include the file stdio.h and the second directs it to include stdlib.h. These header files—and header files in general—primarily contain three things: _function prototypes_, macro definitions, and type declarations.

A function prototype looks much like a function definition, except that it has a semicolon in place of the body. The prototype tells the compiler that the function exists somewhere in the program, as well as the return and argument types of the function. Providing the prototype allows the compiler to check that the correct number and type of arguments are passed to the function, and that the return value is used correctly without having the entire function definition available. In the case of printf, stdio.h provides the prototype. The actual implementation of printf is inside the C standard library.

__Macros__

Header files may also contain macro definitions. The simplest use of a macro definition is to define a constant, such as

```c
#define EXIT_SUCCESS 0
```

This directive (from stdlib.h) tells the preprocessor to define the symbol EXIT_SUCCESS to be 0. Whenever the preprocessor encounters the symbol EXIT_SUCCESS, it sees that it is defined as a macro and expands the macro to its definition. In this case, the definition is just 0, so the preprocessor replaces EXIT_SUCCESS with 0 in the source it passes on to the later stages of compilation. Note that the preprocessor splits the input into identifiers, and checks each identifier to see if it is a defined macro, so EXIT_SUCCESS_42 will NOT expand to 0_42, but rather will not be considered a macro and preprocessor will leave it alone (unless it is defined elsewhere).

Using macro definitions for constants provides a variety of advantages to the programmer over writing the numerical constant directly. For one, if the programmer ever needs to change the constant, only the macro definition must be changed, rather than all of the places where the constant is used. Another advantage is that naming the constant makes the code more readable. The naming of the constant in __return__ EXIT_SUCCESS gives you a clue that the return value here indicates that the program succeeded. In fact, this is exactly what this statement does. The return value from main indicates the success or failure of your program to whatever program ran it.

A third advantage of using macro defined constants is _portability_. While 0 may indicate success on your platform—the combination of the type of hardware and the operating system you have—it may mean failure on some other platform. If you hardcode the constant 0 into your code, then it may be correct on your platform, but may need to be rewritten to work correctly on another platform. By contrast, if you use the constants defined in the standard header files, then when you recompile your program on the new platform, it will just work correctly—the header files on that platform will have those constants defined to the correct values.


<h2>Compiler Details</h2>

<h3>More about Macros and Header Files</h3>

__More about Macros:__

The standard header file limits.h contains constants specifically for portability. These constants describe the maximum and minimum value of various types on the current platform. For example, if a program needs to know the maximum and minimum values for an __int__, it can use INT_MAX and INT_MIN respectively. On platforms where an __int__ is 32 bits, these would be defined like this:

```c
#define INT_MAX  2147483647
#define INT_MIN -2147483648
```

On a platform with a different size for the __int__ type, these would be defined to whatever value is appropriate for the size of the __int__ on that platform.

Macros can also take arguments, however, these arguments behave differently from function arguments. Recall that function calls are evaluated when the program runs, and the values of the arguments are copied into the function’s newly created frame. Macros are expanded by the preprocessor (while the program is being compiled, before it has even started running), and the arguments are just expanded textually. In fact, the macro arguments do not have any declared types, and do not even need to be valid C expressions—only the text resulting from the expansion needs to be valid (and well typed).

We could (though as we shall see shortly, we shouldn’t) define a SQUARE macro as follows:

```c
#define SQUARE(x) x * x
```

The preprocessor would then expand SQUARE(3) to 3 * 3, or SQUARE(45.9) to 45.9 * 45.9. Note that here, we are using the fact that macro arguments do not have types to pass it an __int__ in the first case and a __double__ in the second case. However, what happens if we attempt SQUARE(z-y)? If this were a function, we would evaluate z-y to a value and copy it into the stack frame for a call to SQUARE, however, this is a macro expansion, so the preprocessor works only with text. It expands the macro by replacing x in the macro definition with the text z-y, resulting in z-y * z-y. Note that this will compute z- (y*z) -y, which is not z-y squared.

__More about Header Files:__

Header files may also contain type declarations. For example, stdio.h contains a type declaration for a FILE type, which is used by a variety of functions which manipulate files. The functions also have their prototypes in stdio.h.

Another example of type declarations in standard header files are the integer types in stdint.h. As mentioned previously, integers come in different sizes, and the size of an __int__ varies from platform to platform. Often programmers do not care too much about the size of an int, but sometimes using a specifically sized __int__ is important. stdint.h defines types such as int32_t (which is guaranteed to be a 32-bit signed __int__ on any platform), or uint64_t (which is always a 64-bit __unsigned int__).

<h3>The Actual Compiler</h3>

The output of the preprocessor is stored in a temporary file, and passed to the actual compiler. At first, it may seem a bit confusing that one of the steps of the compilation process is the actual compiler. However, we often refer to complex processes by their eponymous step. For example, if you say “I am going to bake a cake,” even though only part of the process involves actually baking the cake (cooking the cake batter in the oven), we still understand that you will go through the entire process: finding a recipe, getting the ingredients, mixing the batter, baking the cake, letting it cool, and icing it.

The compiler reads the pre-processed source code—which has all the specified files included and all macro definitions expanded—and translates it into assembly. Assembly is the lowest level type of human readable code. In assembly, each statement corresponds to one machine instruction. Machine instructions correspond to very simple operations such as adding two numbers or moving a value to or from memory.

<h3>Compiler Errors</h3>

The compiler is a rather complex program. Its first task is to read in your program source and “understand” your program according to the rules of C—a task called the program. In order for the compiler to parse your program, the source code must have the correct syntax. If your code is not syntactically correct, the compiler will print an error message and attempt to continue parsing, but may be confused by the earlier errors.

__Dealing With Compilation Errors: Tip 1__ Remember that the compiler can get confused by earlier errors. If later errors are confusing, fix the first error, then try to recompile before you attempt to fix them.

__Dealing With Compilation Errors: Tip 2__ If parts of an error message are completely unfamiliar, try to ignore them and see if the rest of the error message(s) make sense. If so, try to use the part that makes sense to understand and fix your error. If not, search for the confusing parts on Google and see if any of them are relevant.

http://aop.cs.cornell.edu/errors/index.html provides more details on a variety of error messages, and will likely prove useful in helping you diagnose errors you may encounter.

Once the compiler finishes checking your code for errors, it will translate it into assembly—the individual machine instructions required to do what your program says. You can ask the compiler to _optimize_ your code—transform it to make the resulting assembly run faster—by specifying the -O option followed by the level of optimization that you want. Programs are usually compiled with no optimizations for testing and debugging (the code transformation makes the program very difficult to debug), and then re-compiled with optimizations once they are ready for release/use. Typically, real programs compiled with gcc are compiled with -O3 when they are optimized. gcc provides a variety of other options to control optimization at a finer level of detail

<h3>Assembling</h3>

The next step is to take the assembly that the compiler generated and _assemble_ it into an _object file. gcc_ invokes the assembler to translate the assembly instructions from the textual/human readable format into their numerical encodings that the processor can understand and execute.

Generally errors here are limited to cases in which you explicitly write the specific assembly level instructions that you want into your program (which is possible in C, but limited to very advanced situations) and make errors in those.

The important thing to understand about this step is that it results in an _object file_. The object file contains the machine-executable instructions for the source file that you compiled, but is not yet a complete program. The object file may reference functions that it does not define (such as those in the C library, or those written in other files). You can request that gcc stop after it assembles an object file by specifying the -c option. By default, the name of the object file will be the name of the .c file with the .c replaced by .o. For example, _gcc -c xyz.c_ will compile _xyz.c_ into _xyz.o_. If you wish to provide a different name for the object file, use the -o option followed by the name you want. For example, _gcc -c xyz.c -o awesomeName.o_ will produce an object file called _awesomeName.o_.

This ability to stop is important for large programs, where you will split the code into multiple different C files. Splitting the program into large files is primarily useful to help you keep the code split into manageable pieces. However, each source file can be individually compiled to an object file, and those object files can then be linked together.  If you change code in one file, you can recompile only that file (to generate a new object file for it), and re-link the program without recompiling any of the other source files.

<h3>Linking</h3>

The final step of the process is to _link_ the program. Linking the program takes one or more object files and combines them together with _various_ libraries, as well as some startup code, and produces the actual executable binary. The object files refer to functions by name, and the linker’s job is to resolve these references—finding the matching definition. If the linker cannot find the definition for a name (called a “symbol”) that is used, or if the same symbol is defined multiple times, it will report an error.

Linker errors—indicated by the fact that they are reported by _ld_ (the linker’s name)—are typically less common than other compiler errors. If you encounter an unresolved symbol error, it means that you either did not define the symbol, did not include the object file that defines the symbol in the link, or that the symbol was specified as only visible inside that object file (which can be done by using the _static_ keyword). If you encounter errors from duplicate definitions of a symbol, first make sure you did not try to name two different functions with the same name. Next, make sure you did not include any files twice on the compilation command line. Finally, make sure you do not _#include_ a .c file—only header files—and that you only include function _prototypes_ in the header file, not the function’s definition (there are some advanced exceptions to these rules, but if you are at that stage, you should understand the linking process and static keyword well enough to fix any problems).

Sometimes you may wish to use an external library—a collection of functions that are already written and packaged up to use for some purpose (e.g., drawing graphics, playing sound, advanced math, or many other purposes). The C library is one such example, which is linked in by default. For other libraries, you must specifically request that the linker link with the library with the -l command line option, specifying the name of the library right after the l.

If all goes well, the linker will resolve the all the symbol references, and combined the various object files and libraries together into an executable binary.


<h2>More Tools</h2>

<h3>Build Tool: make</h3>

As the program size increases, so does the compilation time. Fortunately, most of the time, one does not need to recompile all of the source code, if the object (.o) files from previous compilations are kept. Instead, only the file (or files) that were changed need to be recompiled, then the program needs to be linked again. Compiling each source file to an object file is accomplished with the -c option, and the various object files can then be listed on the command line to gcc in order to pass them to the linker.

However, orchestrating this process manually is tedious and error-prone. If the programmer forgets to recompile a file, then the program will not work correctly, possibly in strange ways. Doing this manually not only requires the programmer to remember all files that were changed, but also which files _#include_ files that were changed. For example, if the programmer changes _myHeader.h_, then any file which _#includes myHeader.h_ must also be recompiled, as the source files’ contents have _effectively_ changed.

Long ago, programmers developed the make utility to not only automate this process, but also to simplify compiling programs in general. The make command reads a file called Makefile (though you can ask it to read an input file by a different name) which specifies how to compile your program. Specifically, it names the _targets_ which can be made, their _dependencies_, and the _rules_ to make the target.

When make is run, it starts from a particular target—something that it can build out of other things. A common starting target might be your entire program. make first checks if the target is up-to-date. Checking that a target is up-to-date requires checking that all of the files that the target depends on are themselves up-to-date, and that none of them are newer than the target. For example, the target for the whole program may depended on many object files. If any such file is not itself up-to-date (for example, the object file may depend on a .c file, which just got changed), it is rebuilt first. make then follows whatever rule was specified for the target to build it from its dependencies. If the target is already up to date, then it does nothing.

Using make to compile the program is also useful when the command line to compile the program becomes complex, especially when other people may need to do the compilation. Large complicated programs may require linking with several libraries, as well as a variety of other command line options. Trying to remember all of these and type them in every time you compile is painful. Even worse, many real programs need to be compiled by other people—whether it is multiple members of a large development team, or people who you distribute the program to. Expecting these other people to figure out the command line required to make your program leads to much frustration for them. Providing a _Makefile_ allows anyone to build the program simply by typing _make_.

<h3>Fancier make Options</h3>

Recall that the input to make is a Makefile, which contains one or more rules that specify how to produce a target from its prerequisites (the files it depends on). The rule is comprised of the target specification, followed by a colon, and then a list of the prerequisite files. After the list of prerequisites, there is a newline, and then any commands required to rebuild that target from the prerequisites. The commands may appear over multiple lines; however, each line must begin with a TAB character (multiple spaces will not work, and accidentally using them instead of a TAB is often the source of problems with a Makefile).

When you run make, you can specify a particular target to build (if you do not specify one, make uses the first target in the Makefile as the default target). To build the target, make will first check if it is up to date. Checking if a target is up to date first requires ensuring that each prerequisite is up to date by potentially rebuilding it. This process bottoms out when make encounters a file that exists which is not itself the target of any rules. Such a file is up to date.

Once all files which a target depends on are ensured to be up to date, make checks if the target itself needs to be (re)built. First, make check if the target file exists. If not, it must be built. If the target file already exists, make compares its last-modified time (which is tracked by all major filesystems) to the last-modified times of each of the prerequisites specified in the rule. If any dependency is newer than the target file, then the target is out of date, and must be rebuilt. Note that if any of the prerequisites were rebuilt in this process, then that file will have been modified more recently than the target, thus forcing the target to be rebuilt.

__An example:__

To be a bit more concrete, let us look at a specific example of a Makefile:

```makefile
myProgram: oneFile.o anotherFile.o
    gcc -o myProgram oneFile.o anotherFile.o
oneFile.o: oneFile.c oneHeader.h someHeader.h
    gcc -std=gnu99 -pedantic -Wall -c oneFile.c
anotherFile.o: anotherFile.c anotherHeader.h someHeader.h
    gcc -std=gnu99 -pedantic -Wall -c anotherFile.c
```

In this Makefile there are three targets: myProgram, oneFile.o, and anotherFile.o. If we just type make, then make will attempt to (re)build myProgram, as that is the first target in the file, and thus the default. This target depends on oneFile.o and anotherFile.o, so the first thing make will do is make the oneFile.o target (much as if we had typed make oneFile.o).

oneFile.o depends on one .c and two .h files, none of which are targets of other rules. Therefore, make does not need to rebuild them. If they do not already exist, make will give an error like this:

```bash
make: *** No rule to make target 'oneHeader.h', needed by 'oneFile.o'.  Stop.
```

Assuming that all three of these .c/.h files exist, make will see if oneFile.o does not exist, or if any of those three files are newer than it. If so, then make will rebuild the file by running the specified gcc command. If oneFile.o already exists and is newer than the relevant source files, then nothing needs to be done to build it.

After processing oneFile.o, make does a similar process for anotherFile.o. After that completes, it checks if it needs to build myProgram (that is, if either myProgram does not exist, or either of the object files that it depends on are newer than it). If so, it runs the specified gcc command (which will link the object files and produce the binary called myProgram). If not, it will produce the message:

```bash
make: 'myProgram' is up to date.
```

Observe that, because of the way this procedure works, if you were to change code in oneFile.c, then only one of the two object files would be recompiled (oneFile.o), and then the program would be re-linked. The other object file (anotherFile.o) would not need to be recompiled.

__Variables:__

The way we have written our example Makefile has a lot of copying and pasting—something we want to avoid in anything we do. In particular, we might notice that we have the same compiler options in many places. If we wanted to change these options (e.g., to turn on optimizations, or add a debugging flag), we would have to do it in every place. Instead, we would prefer to put the compiler options in a variable, and use that variable in each of the relevant rules. For example, we might change our previous example to the following:

```makefile
CFLAGS=-std=gnu99 -pedantic -Wall
myProgram: oneFile.o anotherFile.o
    gcc -o myProgram oneFile.o anotherFile.o
oneFile.o: oneFile.c oneHeader.h someHeader.h
    gcc $(CFLAGS) -c oneFile.c
anotherFile.o: anotherFile.c anotherHeader.h someHeader.h
    gcc $(CFLAGS) -c anotherFile.c
```

Here, we define a variable CFLAGS, which we set equal to our desired compilation flags. We then use that variable by putting its name inside of `$()` in the rules. Note that changes to the Makefile do not automatically outdate targets which use them, so they will not necessarily be rebuilt with the new flags if you just type make after making the change (although you could make them all depend on Makefile).

__Clean:__

A common target to put in a Makefile is a clean target. The clean target is a bit different in that it does not actually create a file called clean (it is therefore called a “phony” target). Instead, it is a target intended to remove the compiled program, all object files, all editor backups (*.c~ *.h~), and any other files that you might consider to be cluttery. This target gets used to either force the entire program to be rebuilt (e.g., after you change various compilation flags in the Makefile), or if you just need to clean up the directory, leaving only the source files (e.g., if you are going to zip or tar up the source files to distribute them to someone).

We might add a clean target to our Makefile as follows:

```makefile
.PHONY: clean
clean:
    rm -f myProgram *.o *.c~ *.h~
```

Note that the .PHONY: clean tells make that clean is a phony target—we do not actually expect it to create a file called “clean”, nor would we want to consider it up to date and skip its commands if a file called “clean” already existed (as there are no prerequisites, it would be considered up to date if it existed). If we wanted other phony targets, we would list them all as if they were prerequisites of the .PHONY target (e.g. .PHONY: clean depend).

In general, you should add a clean target to your Makefiles, as most people will expect one to be present, and it can be quite useful.

__Generic rules:__

Our example Makefile improved slightly when we used a variable to hold the compilation flags. However, our Makefile still suffers from a lot of repetition, and would be a pain to maintain if we had more than a few sources files. If you look at what we wrote, we are doing pretty much the same thing to compile each of our .c source files into an object file. Whenever we find ourselves repeating ourselves, there should be a better way.

In make, we can write generic rules. A generic rule lets us specify that we want to be able to build (something).o from (something).c, where we represent the something with a percent-sign (%). As a first step, we might write (note that # indicates a comment to the end of the line):

```makefile
# A good start, but we lost the dependencies on the header files
CFLAGS=-std=gnu99 -pedantic -Wall
myProgram: oneFile.o anotherFile.o
    gcc -o myProgram oneFile.o anotherFile.o
%.o: %.c
    gcc $(CFLAGS) -c $<
.PHONY: clean
clean:
    rm -f myProgram *.o *.c~ *.h~
```

Here, we have replaced the two rules we had for each object file with one generic rule. It specifies how to make a file ending with .o from a file of the same name, except with .c instead of .o. In this rule, we cannot write the literal name of the source file, as it changes for each instance of the rule. Instead, we have to use the special built-in variable `$<`, which make will set to the name of the first prerequisite of the rule (in this case, the name of the .c file).

However, we have introduced a significant problem now. We have made it so that our object files no longer depend on the relevant header files. If we were to change a header file, then make might not rebuild all of the relevant object files. Such a mistake can cause strange and confusing bugs, as one object file may expect data in an old layout but the code will now be passed data in a different layout. We could make every object file depend on every header file (by writing %.o : %.c *.h), however, this approach is overkill—we would definitely rebuild everything that we need to when we change a header file, because we would rebuild every object file, even if we only need to rebuild a few.

We can fix this in a better way by adding the extra dependency information to our Makefile:

```makefile
# This fixes the problem
CFLAGS=-std=gnu99 -pedantic -Wall
myProgram: oneFile.o anotherFile.o
    gcc -o myProgram oneFile.o anotherFile.o
%.o: %.c
    gcc $(CFLAGS) -c $<
.PHONY: clean
clean:
    rm -f myProgram *.o *.c~ *.h~
oneFile.o: oneHeader.h someHeader.h
anotherFile.o: anotherHeader.h someHeader.h
```

Here, we still have the generic rule, but we also have specified the additional dependencies separately. Even though it looks like we have two rules, make understands that we are just providing additional dependence information because we have not specified any commands. If we did specify commands in the, they would supersede the generic rules for those targets.

Managing all of this dependency information by hand would, of course, be tedious and error-prone. The programmer would have to figure out every file which is transitively included by each source file, and keep the information up to date as the code changes. Instead, there is a tool called makedepend which will edit the Makefile to put all of this information at the end. In its simplest usage, makedepend takes as arguments all of the source files (i.e., all of the .c and/or .cpp files), and edits the Makefile. It can also be given a variety of options, such as -I path to tell it to look for include files in the specified path. See man makedepend for more details.

__Built-in generic rules:__

Some generic rules are so common that they are built into make, and we do not even have to write them. As you may suspect, building a .o file from a similarly named .c file is quite common, as it is what C programmers do most often. Accordingly, we do not even need to explicitly write our %.o: %.c rule if we are happy with the built-in generic rule for this pattern.

We can see the all of the rules (including both those that are built-in and those that are specified by the Makefile) by using make -p. Doing so also builds the default target as usual—if we want to avoid building anything, we can do make -p -f/dev/null to use the special file /dev/null as our Makefile (reading from /dev/null results in end-of-file right away, so the result will be a Makefile with no rules, thus it will not do anything).

If we use make -p to explore the built-in rules for building .o files from .c files, we will find:

```makefile
%.o: %.c
# commands to execute (built-in):
    $(COMPILE.c) $(OUTPUT_OPTION) $<
```

Understanding this rule requires us to look at the definitions of COMPILE.c and OUTPUT_OPTION, which are also included in the output of make -p:

```makefile
COMPILE.c = $(CC) $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c
OUTPUT_OPTION = -o $@
```

By default, CFLAGS (flags for the C-compiler) and CPPFLAGS (flags for the C preprocessor143), as well as TARGET_ARCH (flags to specify what architecture to target) are empty. By default CC (the C-compiler command) is cc (which may or may not be gcc depending on how our system is configured). The defaults for any of these variables (or any other variables) can be overridden by specifying their values in our Makefile. Note that `$@` in OUTPUT_OPTION is a special variable which is the name of the current target (much like `$<` is the name of the first prerequisite).

All of that may sound a bit complex but it basically boils down to the fact that the default rule is: cc -c -o something.o something.c, and we can override the specifics to get the behavior we want, while still using the default rule. That is, we might use the following Makefile:

```makefile
CC = gcc
CFLAGS = -std=gnu99 -pedantic -Wall
myProgram: oneFile.o anotherFile.o
    gcc -o myProgram oneFile.o anotherFile.o
.PHONY: clean depend
clean:
    rm -f myProgram *.o *.c~ *.h~
depend:
    makedepend anotherFile.c oneFile.c
# DO NOT DELETE
anotherFile.o: anotherHeader.h someHeader.h
oneFile.o: oneHeader.h someHeader.h
```

Here, we have specified that we want to use gcc as the C-compiler (CC), and specified the CFLAGS that we want. Now, when we try to compile an object file from a C file, the default rule will result in

__gcc -std=gnu99 -pedantic -Wall -c -o something.o something.c__

You should also note that we have added another phony target, depend which runs makedepend with the two C source files that we are working with. the # DO NOT DELETE line and everything below it are what makedepend added to our Makefile when I ran make depend. Note that if we re-run makedepend (preferably via the make depend), it will look for this line to tell where to delete the old dependency information and add its new information.

__Built-in functions:__

Our Makefile is looking more like something we could use in a large project, but we have still manually listed our source and object files in a couple places. If we were to add a new source file, but forget to update the makedepend command line, we would not end up with the right dependencies for that file when we run make depend. Likewise, we might forget to add object files in the correct places (e.g., if we add it to the compilation command line, but not the dependencies for the entire program, we may not rebuild that object file when needed).

We can fix these problems by using some of make’s built-in functions to automatically compute the set of .c files in the current directory, and then to generate the list of target object files from that list. The syntax of function calls in make is `$(functionName arg1, arg2, arg3)`. We can use the `$(wildcard pattern)` function to generate the list of .c files in the current directory: SRCS = `$(wildcard *.c)`. Then we can use the `$(patsubst pattern, replacement, text)` function to replace the .c endings with .o endings: OBJS = `$(patsubst %.c, %.o, $(SRCS))`. Once we have done this, we can use `$(SRCS)` and `$(OBJS)` in our Makefile:

```makefile
CC = gcc
CFLAGS = -std=gnu99 -pedantic -Wall
SRCS=$(wildcard *.c)
OBJS=$(patsubst %.c,%.o,$(SRCS))
myProgram: $(OBJS)
    gcc -o $@ $(OBJS)
.PHONY: clean depend
clean:
    rm -f myProgram *.o *.c~ *.h~
depend:
    makedepend $(SRCS)
# DO NOT DELETE
anotherFile.o: anotherHeader.h someHeader.h
oneFile.o: oneHeader.h someHeader.h
```

At this point, we have a Makefile that we could use on a large-scale project. The only thing we need to do when we add source files or include new header files in existing source files is run make depend to update the dependency information. Other than that, we can build our project with make, which will only recompile the required files.

We could, however, be a little bit fancier. In a real project, we likely want to build a debug version of our code (with no optimizations, and -ggdb3 to turn on debugging information—see the next module for more info about debugging), and an optimized version of our code that will run faster (where the compiler works hard to produce improve the instructions that it generates, but those transformations generally make debugging quite difficulty). We could change our CFLAGS back and forth between flags for debugging and flags for optimization, and remember to make clean each time we switch. However, we can also just set our Makefile up to build both debug and optimized object files and binaries with different names:

```makefile
CC = gcc
CFLAGS = -std=gnu99 -pedantic -Wall -O3
DBGFLAGS = -std=gnu99 -pedantic -Wall -ggdb3 -DDEBUG
SRCS=$(wildcard *.c)
OBJS=$(patsubst %.c,%.o,$(SRCS))
DBGOBJS=$(patsubst %.c,%.dbg.o,$(SRCS))
.PHONY: clean depend all
all: myProgram myProgram-debug
myProgram: $(OBJS)
    gcc -o $@ -O3 $(OBJS)
myProgram-debug: $(DBGOBJS)
    gcc -o $@ -ggdb3 $(DBGOBJS)
%.dbg.o: %.c
    gcc $(DBGFLAGS) -c -o $@ $<
clean:
    rm -f myProgram myProgram-debug *.o *.c~ *.h~
depend:
    makedepend $(SRCS)
    makedepend -a -o .dbg.o  $(SRCS)
# DO NOT DELETE
anotherFile.o: anotherHeader.h someHeader.h
oneFile.o: oneHeader.h someHeader.h
```

Now, if we make, we get both myProgram (the optimized version), and myProgram-debug (which is compiled for debugging).

__Parallelizing computation:__

One useful feature of make, especially on modern multi-core systems is the ability to have it run independent tasks in parallel. If you give make the -j option, it requests that it run as many tasks in parallel as it can. You may wish to ask it to limit the number of parallel tasks to a particular number at any given time, which you can do by specifying that number as an argument to the -j option (, make -j8 runs up to 8 tasks in parallel). On large projects, this may make a significant difference in how long a build takes.

You can use make for much more beyond just compiling C programs. In fact, you can use make for pretty much any task that you can describe in terms of creating targets from the prerequisites that they depend on. For most such tasks, you can put the parallelization capabilities of make to good use to speed up the task.

<h3>valgrind</h3>

_valgrind_ is particularly good at finding errors in your program that did not manifest simply because you got lucky when you ran it. When you run your program directly on the computer, it does not explicitly track whether a variable has been initialized—the compiler generates instructions which do exactly what your program specifies, and the computer does exactly what those instructions tell it to. When you run your program in _valgrind_, however, _valgrind_ explicitly tracks which variables are initialized and which are not. If your program uses the uninitialized value in certain ways, _valgrind_ will report an error to you.

valgrind is useful for detecting many other problems with your program that you might not otherwise discover easily. We highly recommend running your program in valgrind whenever you are testing your program.

<h3>Compiler Options</h3>

Usually, you will want to name the resulting program something meaningful, rather than the default _a.out_. To change the output file name, use the -o option, and specify the output file name after it. For example, _gcc -o myProgram myProgram.c_ would compile _myProgram.c_ (as above), but instead of producing _a.out_, it would name the program _myProgram_.

Another option you will commonly want to use is _--std=gnu99_. This option specifies that the compiler should use the C99 standard with GNU extensions. There are a actually a few different versions of C (referred to as “standards” because they reflect a standardization of features). gnu99 will match what we describe in this course, and is generally a reasonable standard to program in.

Another useful pair of options are _-Wall_ and _-Werror_. The first of these requests that the compiler issue _warnings_ for a wide range of questionable behavior. The compiler checks your program for certain kinds of errors, if it detects errors, it reports them to you and requires you to fix them before proceeding. Warnings are like errors in that the compiler will report a problem that it has detected, however, unlike errors, the compiler will continue and produce a program even if it warned you about something. The _-Werror_ option tells the compiler to treat all warnings as errors—making it refuse to compile the program until the programmer fixes all the warnings.

We strongly recommend compiling with at least the following warning options:

```
-Wall -Wsign-compare -Wwrite-strings -Wtype-limits -Werror
```
These options will help catch a lot of mistakes, and should not pose an undue burden on correctly written code.

Recent versions of gcc also support an option _-fsanitize=address_ which will generate code that includes extra checking to help detect a variety of problems at runtime. Using this option is also strongly recommended during your development cycle. However, we will note that (at least with gcc 4.8.2 and valgrind 3.10.0) you cannot run a program built with this option in valgrind. The two tools detect different, but overlapping sets of problems, so use of both is a good idea—they just have to be used separately.



<h1>Week 3: Testing and debugging</h1>

__Testing__ is the process of finding bugs in your code. Your goal is to discover inputs to the program for which it does not behave correctly. Once a program has failed one or more test cases, you want to debug it. __Debugging__ is the process of fixing bugs in a program.

<h2>Testing</h2>

<h3>Black Box Testing</h3>

The testing methodology that most people think of first is black box testing. In black box testing, the tester considers only the expected behavior of the function—not any implementation details—to devise test cases. The lack of access to the implementation details is where this testing methodology gets its name—the function’s implementation is treated as a “black box” which the tester cannot look inside.

Black box testing does not mean that the tester thinks of a few cases in an ad hoc manner and calls it a day. Instead, the tester—whose goal is to craft test cases that are likely to expose errors—should contemplate what cases are likely to be error prone from the way the function behaves. For example, suppose you needed to test a function to sum a list of integers. Without seeing the code, what test cases might you come up with?

We might start with a simple test case to test the basic functionality of the code—for example, seeing that the function gives an answer of 15 when given an input of {1,2,3,4,5}. However, we should also devise more difficult test cases, particularly those which test corner cases—inputs that require specific behavior unlike other cases. In this example, we might test with the empty list (that is, the list with no numbers in it), and see that we get 0 as our answer. We might make sure to test with a list that has negative numbers in it, or one with many very large numbers in it. You should contemplate what sorts of errors these test cases might expose.

Observe that we were able to contemplate good test cases for our hypothetical problem without going through Steps 1–5. You can actually come up with a set of black box tests for a problem before you start on it. Some programmers advocate a test-first development approach. One advantage is that if you have a comprehensive test-suite written before you start, you are unlikely to skimp on testing after you implement your code. Another advantage is that by thinking about your corner cases in advance, you are less likely to make mistakes in developing and implementing your algorithm.

<h3>Practical Tips for Designing Test Cases</h3>

- Test exactly at the boundary of validity. If a program requires between 7 and 18 things, you should have test cases with 6, 7,8, 17, 18, and 19 things. You need to make sure that 6 and 19 are rejected while 7, 8, 17, and 18 are accepted. Testing exactly at the boundaries is important because of the common “off by one” mistake.

- Think carefully about whether or not there are any special cases where one particular input value (or set of values has to be treated unusually). For example, in poker an Ace is usually ranked the highest, however, it can have the lowest ranking in an “Ace Low Straight” (5 4 3 2 A). If you are testing code related to poker hands, you would want to explicitly test this case, since it requires treating an input value differently from normal

- Think carefully about the requirements, and consider whether something could be misinterpreted, easily mis-implemented, or have variations which could seem correct. Suppose your algorithm works with sequences of decreasing numbers. You should test with a sequence like 7 6 6 5 4, which has two equal numbers in it. Checking equal numbers is a good idea here, since people might have misunderstood whether the sequence is strictly decreasing (equal numbers don’t count as continuing to decrease) or non-increasing (equal numbers do count).

__Consider all major categories of inputs, and be sure you cover them.__

- For numerical inputs, these would generally be negative, zero, and positive. One is also usually a good number to be sure you cover

- For sequences of data, your tests should cover an empty sequence, a single element sequence, and a sequence with many elements.

- For characters: lowercase letters, uppercase letters, digits, punctuation, spaces, non-printable characters

- For many algorithms, there are problem-specific categories that you should consider. For example, if you are testing a function related to prime numbers (e.g., isPrime), then you should consider prime and composite (not prime) numbers as input categories to cover.

- When you combine two ways to categorize data, cover all the combinations. For example, if you have a sequence of numbers, you should test with an empty list, a one element sequence with 0, a one element sequence with a negative number, a one element sequence with a positive number, and have each of negative, zero, and positive numbers appearing in your many-element sequences.

- An important corollary of the previous rules is that if your algorithm gives a set of answers where you can list all possible ones (true/false, values from an enum, a string from a particular set, etc), then your test cases should ensure that you get every answer at least once. Furthermore, if there are other conditions that you think are important, you should be sure that you get all possible answers for each of these conditions. For example, if you are getting a yes/no answer, for a numeric input, you should test with a negative number that gives yes, a negative number that gives no, a positive number that gives yes, a positive number that gives no, and zero [zero being only one input, will have one answer].

- All of this advice is a great starting point, but the most important thing for testing is to think carefully---imagine all the things that could go wrong, think carefully about how to test them, and make sure your test cases are actually testing what you think they are testing.

<h3>White Box Testing</h3>

Another testing methodology is _white box testing_. Unlike black box testing, white box testing involves examining the code to devise test cases. One consideration in white box tests is _test coverage_—a description of how well your test cases cover the different behaviors of your code.

Note that while white box and black box testing are different, they are not mutually exclusive, but rather complimentary. One might start by forming a set of black box test cases, implement the algorithm, then create more test cases to reach a desired level of test coverage.

We will discuss three levels of test coverage:
- __Statement coverage:__ Statement coverage means that every statement in the function is executed. Statement coverage is a minimal starting point, but if we want to test our code well, we likely want a stronger coverage metric.

- __Decision coverage:__ A stronger level of coverage in which all possible outcomes of decisions are exercised. For boolean tests, this means we construct a test case where the expression evaluates to true, and another where it evaluates to false. If we have a switch/case statement, we must construct at least one test case per choice in the case statement, plus one for the default case, even if it is implicit.

    To understand decision coverage more fully, it helps to visualize it. In order to visualize decision coverage, we need to understand the concept of a _control flow graph_ (often abbreviated “CFG”). A control flow graph is a directed graph (in the mathematical sense) whose nodes are basic blocks (_boxes_) and whose edges represent the possible ways the control flow arrow can move (_arrows_). A _basic block_ is a contiguous sequence of statements which must be executed in an “all-or-nothing” manner; the execution arrow cannot jump into nor out of the middle of a basic block. The CFG shows how the control flow arrow can move from one basic block to the next.

    <img src="../2. Writing, Running, and Fixing Code in C/images/cfg.png">

    We draw the CFG for one function at a time. We could also draw how the execution arrow moves between functions; that is called a _call graph_.

    Decision coverage corresponds to having a suite of test cases which covers every edge in the graph.


- __Path coverage:__ An even stronger type of test coverage is path coverage. To achieve path coverage, our test cases must span all possible valid paths through the control flow graph (following the direction of the arrows). The figure below shows the four paths through our example control flow graph, and color codes them based on which of our test cases cover them.

    <img src="../2. Writing, Running, and Fixing Code in C/images/cfg_example.png">

<h3>Generating Test Cases</h3>

One difficulty with testing arises from the fact that you want to test the cases you did not think of—but if you do not think of these cases, then how do you know to write tests for them? One approach to such a problem is to generate the test cases according to some algorithm. If the function we are testing takes a single integer as input, we might iterate over some large range (say -1,000,000 to 1,000,000) and use each integer in that range as a test case.

Another possibility is to generate the test cases (pseudo-)randomly (called, unsurprisingly, random testing). Note that pseudo-random means that the numbers look random (no “obvious” pattern) to a human, but are generated by an algorithm which will produce the same answer each time if they start from the same initial state (called a “seed”). Random testing can be appealing as it can hit a wide range of cases quickly that you might not think of at all. For example, if your algorithm has 6 parameters, and you decide you want to test 100,000 possibilities for each parameter in all combinations, you will need 100,000^6 = 10^30 test cases—even if you can do 10 trillion test cases per second (which would be beyond “fast” by modern standards), they will take about 3 million years to run! With random testing, you could run a few thousands or millions of cases, and rely on the Law of Large Numbers to make it likely that you encounter a lot of varieties of relationships between the parameters.

One tricky part about generating test cases algorithmically is that we need some way to verify the answer—and the function we are trying to test is what computes that answer. We obviously cannot trust our function to check itself, leaving us a seeming “chicken and egg” problem. In a very few cases, it may be appealing to write two versions of the function which can be used to check each other. This approach is appropriate when you are writing a complex implementation in order to achieve high performance, but you could also write a simpler (but slower) implementation whose correctness you would more readily be sure of. Here, it makes sense to implement both, and test the complex/optimized algorithm against the simpler/slower algorithm on many test cases.

<h3>Asserts</h3>

In any form of testing, it can be useful to not only check the end result, but also that the _invariants_ of the system are maintained in the middle of its execution. An invariant is a property that is (or should be) always true at a given point in the program. When you know an invariant that should be true at a given point in the code, you can write an _assert statement_, which checks that it is true. _assert(expr);_ checks that _expr_ is true. If it is true, then nothing happens, and execution continues as normal. However, if expr is false, then it prints a message stating that an assertion failed, and aborts the program—terminating it immediately wherever it is.

Note that _assert statements_ are an example of the principle that if our program has an error we want it to _fail fast_—that is, we would rather the program crash as soon after the error occurs as possible. The longer the program runs after an error occurs, the more likely it is to give incorrect answers and the more difficult it is to debug. Ideally, when our program has an error, we will have an assert fail immediately after it, pointing out exactly what the problem is and where it lies.

Many novice and intermediate programmers worry that _asserts_ will slow their program down. In general, the slowdown is negligible, especially on fast modern computers. In many situations, 1–2% performance just does not matter—do you really care if you get your answer in 0.1 seconds versus 0.11 seconds? However, there are performance critical situations where ever bit of speed matters. For these situations, you can pass the _-DNDEBUG_ option to the compiler to turn off the asserts in your optimized code. For all other situations, keeping them active is generally advisable.


<h2>Debugging</h2>

<h3>Step 7: Debugging</h3>

Once you have found a problem in your code, you need to fix it—this process is called _debugging_. Many novice programmers (and even some moderately experienced programmers) debug in an ad hoc fashion—trying to change something in their code, and hoping that it will fix their problem. Such an approach is seldom effective, and often leads to much frustration.

Returning to our doctor analogy from earlier, suppose you were sick and went to the doctor. Does your doctor say “Oh I don’t know what is wrong, but try this medicine. If it doesn’t fix things, come back tomorrow and we’ll try another medicine…” If your doctor does treat you this way, it might be time to find a new doctor! Trying random “fixes” in the hopes that you will get lucky on one is not a good way to diagnose and fix problems. Even worse, if your symptoms change during this process, you have no idea if one of the random “fixes” you tried made things worse, or if your untreated condition is progressing. Similar analogies can be made to any profession that diagnoses and fixes problems (such as mechanics).

Hopefully, your doctor (and mechanic) follow a more scientific approach to diagnosing and fixing problems. As do they, so should you in diagnosing and fixing your program. In fact, debugging should be an application of the _scientific method_, which you may have learned in a science class.

<h3>The Scientific Method</h3>

<img src="../2. Writing, Running, and Fixing Code in C/images/debugging.png">

__Observe a Phenomenon__

The figure above shows a flow-chart of the scientific method. In programming, our observation of phenomena relates to the behavior of our programs on certain inputs (“My program gives the wrong answer when I give it an input of 42!”). These observations typically arise from our test cases, but may happen under other circumstances (for example, the end user reports a problem that we did not discover in testing).

__Ask a Question__

Once you have observed a phenomena, the next step in the scientific method is to ask a question. Asking a good question here is crucial to the success of the rest of our scientific endeavor. While a broad question such as “What is wrong with my program and how do I fix it?” may seem appealing, it may be quite difficult to answer. Instead, we should aim for more focused questions: “On which line of code does my program crash?” or “Why does my program call myFunction with x=3 and y=-42?”.

Answering one question often leads to an observation that leads to another question—restarting the scientific process all over again. Discovering what is wrong in this iterative fashion is perfectly fine, and in fact a great way to proceed.

__Gather Information, Apply Expert Knowledge__

Many people will say that forming a hypothesis is the next step of the scientific method. If you can form a hypothesis immediately, that is great. However, forming a good hypothesis is difficult, and forming one right away is often not possible.

The next step of the scientific method is actually to gather information and combine it with your expert knowledge. In the case of debugging, you need to gather information about what is happening in your program, and combine this with your own expert knowledge on programming. Your expert knowledge comes in two parts here. One is your knowledge of programming in general and your domain knowledge of the particular program you are writing—the expected behaviors of each part of it.

Your expert knowledge will grow with practice in programming, and the domain for which you are writing programs. However, gathering information effectively is a skill of its own. The information gathering aspect of debugging is often conflated with the entirety of debugging—if you ask someone how they debug, they will often explain to you what techniques they use to gather information.

The simplest way to gather information is to insert print statements (in C, calls to _printf_) to display the values of various variables at various points in the program. The resulting output can give you information about the control flow of the program (which statements were executed, and in what order—as shown by what order your print statements print their output), and, of course the values of the variables that you print.

Gathering information by printing has the advantages that it is simple and requires no other knowledge or experience. However, it has several disadvantages as well. One is that changing what you print out requires recompiling and re-running your program. While this disadvantage may seem small, if your bug takes 15 minutes to manifest, restarting the program for each new piece of information you discover that you want can be quite time consuming. Another disadvantage is that the output may be overwhelming (i.e., thousands of lines of output to sift through) if your program executes for even a modest time before experiencing the problem. A third disadvantage is that it cannot replicate or replace many features that debuggers offer.

Another approach to information gathering is to use a _debugger_—a tool specifically designed to aid programmers in the debugging process. The debugger is in fact primarily aimed at this piece of the debugging process—gathering information.

__Form a Hypothesis__

Forming a good hypothesis is the key to proceeding effectively. The first characteristic of a good hypothesis is that it is testable. For a hypothesis to be testable, it must make specific predictions about the behavior of the program: when I give the program inputs that meet (_condition_), I will observe (_behavior_). For such a hypothesis, you can execute test cases to either refute this hypothesis (e.g., if the program’s behavior does not match the predictions that the hypothesis makes) or to become confident enough in our hypothesis that we accept it.

The second characteristic of a good hypothesis for debugging is that it is actionable—if we convince ourselves that it is true, it provides us with an indication of either how to fix the error in our code, or what the next steps towards it are. In the case of our contrived hypothesis, confirmation would likely suggest a special case of the algorithm which we did not consider. The fact that our hypothesis is specific (with regards to what types of inputs trigger the error) identifies the corner cases for us, guiding us to the path to fixing the problem.

<h3>Accept or Reject Your Hypothesis?</h3>

As we test, we will either convince ourselves that our hypothesis is correct, and accept it, or we will find that it is not true and reject it. In the former case, we now know what is wrong with our program and are ready to correct it. Typically, identifying the precise problem and cause are 90% of the battle—thus if our hypothesis was a good one, we are most of the way there. Of course, sometimes our problem is severe and requires significant modifications to our program. In the worst cases, a significant redesign and implementation of large portions of the code from scratch.

The decision to throw away large portions of code and redo them from scratch is not one to be taken lightly, nor an easy one to make. In making such a decision, the programmer should be wary of The Poker Player’s Fallacy — the temptation to make a decision based on prior investments rather than future outcomes. This term comes from a fallacy that many novice poker players succumb to: betting based on how much they have already put into the pot, rather than how likely they are to win the hand (“I’m already in for `$200`, so I may as well bet another `$10` on the off chance I win.”). If you are not likely to win the pot, betting another `$10` is just throwing that money away. The smart poker player will only bet on her current hand if she thinks she can win (whether by a better hand, or a bluff).

Similarly, when evaluating whether to modify the current code or throw it away and start fresh, you should not consider how much time you have already put into it, but rather how much time it will take to fix the current code versus redesigning it from scratch. Note that this is not intended to suggest you should throw away your code and redesign it from scratch every time there is an error. Instead, you should be contemplating the time required for both options, and making a rational tradeoff.

If instead of accepting your hypothesis, you find that you must reject it, do not despair. In investigating this hypothesis, you have gained valuable information which will inform your next hypothesis. One thing to be wary of when rejecting a hypothesis: there may be multiple errors in your code. Do not be mislead by symptoms of other errors masking your current problem.


<h2>Debugging Tools</h2>


<h3>Intro to gdb</h3>

A key tool in the debugging process is a piece of software called a _debugger_, it helps you gather information about what is going on in your code.

<h3>Getting Started with gdb</h3>

The first step in using gdb (or most any other debugging tool) is to compile the code with _debugging symbols_—extra information to help a debugging tool understand what the layout of the code and data in memory is—included in the binary. The -g option to gcc requests that it include this debugging information, but if you are using gdb in particular, you should use _-ggdb3_, which requests the maximum amount of debug information (e.g., it will include information about preprocessor macro definitions) in a gdb-specific format. Note that if you compile your program in multiple steps (object files, then linking), you should include _-ggdb3_ at all steps.

Once you have your program compiled with debugging symbols, you need to run _gdb_. You can run _gdb_ directly from the command line, however, it is much better to run it from inside of emacs. To run _gdb_ inside _emacs_, use the command _M-x gdb_ (that is either _ESC x_ or _ALT-x_ depending on your keyboard setup, then type gdb, and hit enter). At this point, emacs should prompt you for how you want to run _gdb_ (“Run gdb (like this):”), and provide a proposed command line. Typically the options that emacs proposes are what you want; however, you may want to change the name of the program to debug (specified as the last argument on the command line). Once you are happy with the command line, hit enter to start gdb.

At this point, you will end up with a buffer titled _*gdb*_, or _*gdb-prog*_ (where prog is the name of the program). The stars in the buffer name indicate that the buffer corresponds to interaction with a process, not a file on disk. This buffer should contain some output from gdb which tells you its version, some information about where to find the manual, and a message about the ``help'' command.

Some usefull _gdb_ commands:

__*start*__: Begin (or restart) the program’s execution. Stop the program (to accept more commands) as soon as execution enters _main_.

__*run*__: This command runs the program (possibly restarting it). It will not stop unless it encounters some other condition that causes it to stop.

__*step*__: Advance the program one “step”. More specifically, _gdb_ will execute until the execution arrow moves to a different line of source code, whether that is by going to the next line, jumping in response to control flow, or some other reason. In particular, step will go into a function called by the current line. This command can be abbreviated _s_.

__*next*__: Advance the program one line of code. However, unlike step, if the current line of code is a function call, _gdb_ will execute the entire called function without stopping. This command can be abbreviated _n_.

__*print*__: The print command takes an expression as an argument, evaluates that expression, and prints the results. Note that if the expression has side-effects, they will happen, and will affect the state of the program (e.g., if you do print x = 3, it will set x to 3, then print 3). You can put _/x_ after _print_ to get the result printed in hexadecimal format. This command can be abbreviated _p_ (or _p/x_ to print in _hex_). Every time you print the value of an expression, _gdb_ will remember the value in its own internal variables which are named `$1`, `$2`, etc (you can tell which one it used, because it will say which one it assigned to when it prints the value—e.g., `$1 = 42`). You can use these `$` variables in other expressions if you want to make use of these values later. _gdb_ also has a feature to let you print multiple elements from an array—if you put _@number_ after an lvalue, _gdb_ will print number values starting at the location you named. This feature is most useful with arrays—for example, if a is an array, you can do _p a[0]@5_ to print the first 5 elements of _a_.

__*display*__: The _display_ command takes an expression as an argument, and displays its value every time _gdb_ stops and displays a prompt. For example display _i_ will evaluate and print _i_ before each (_gdb_) prompt. You can abbreviate this command _disp_.

If you hit enter without entering any command, _gdb_ will repeat the last command you entered. This feature is most useful when you want to use step or next multiple times in a row.

Note that if you need to pass command line arguments to your program, you can either write them after the _start_ or _run_ command (e.g., _run someArg anotherArg_), or you can use set _args_ to set the command line arguments.

<h3>Investigating the State of Your Program</h3>

One of the most useful feature of a debugger is the ability to investigate the state of your program. The _print_ and _display_ commands that we have discussed so far provide a start, as they allow you to see what value an expression evaluates to, however, there is much more that you can do.

One useful features is the ability to inspect the current set of stack frames, and move up and down within them. The _backtrace_ command lists all of the stack frames (with the current one on top, and _main_ on the bottom), so that you can see what function calls got you to the current place. The backtrace also lists the line where each call was made (or where the execution arrow is, for the current frame).

When you print expressions, _gdb_ uses the variables in the current scope. However, sometimes, you might want to inspect variables in other frames further up the stack. You can instruct _gdb_ to select different frames with _up_ and _down_, which move up and down the stack specifically.

One particularly common use of _up_ is when your program stops in a failed _assert_. When this happens, _gdb_ will stop deep inside the C library, in the code that handles _assert_. However, you will want to get back to your own code, which is a few stack frames up. You can use up a few times until _gdb_ returns to a frame corresponding to your code.

You can also get information about various aspects of the program with the _info_ command, which has various subcommands. For example, _info frame_ will describe the memory layout of the current frame, _info types_ will describe the types that are in the current program. There are a variety of _info_ commands, but most of them are for more advanced uses—you can use help _info_ to see them all.

<h3>Controlling Execution</h3>

The _next_ and _step_ commands give you the basic ability to advance the state of the program, however, there are also more advanced commands for controlling the execution. If we are debugging a large, complex program, we may not want to step through every line one-by-one to reach the point in the program where we want to gather information.

One of the most useful ways to control the execution of our program is to set a _breakpoint_ on a particular line. A breakpoint instructs _gdb_ to stop execution whenever the program reaches that particular line. You can set a breakpoint with the _break_ command, followed by either a line number, or a function name (meaning to set the breakpoint at the start of that function). In emacs, you can also press C-x space to set a breakpoint at the point. It is also possible to set a breakpoint at a particular memory address, although that is a more advanced feature. When we set a breakpoint, _gdb_ will assign it a number, which we can use to identify it to other breakpoint-related commands.

Once we have a breakpoint set, we can _run_ the program (or _continue_, if it is already started), and it will execute until the breakpoint is encountered (or some other condition which causes execution to stop). When the breakpoint is encountered, _gdb_ will return control to us at a (_gdb_) prompt, allowing us to give it other commands—we might inspect the state of the program, set more breakpoints, and continue.

By default, breakpoints are _unconditional breakpoints_—_gdb_ will stop the program and give you control anytime it reaches the appropriate line. Sometimes, however, we may want to stop under a particular condition. For example, we may have a __for__ loop which executes 1,000,000 times, and we need information from the iteration where _i_ is _250,000_. With an unconditional breakpoint, the program would stop, and we would need to continue many times before we got the information we wanted. We can instead, use a _conditional breakpoint_—once where we give _gdb_ a C expression to evaluate to determine if it should give us control, or let the program continue to run.

We can put a condition on a breakpoint when we create it with the break command by writing if after the location, followed by the conditional expression. We can also add a condition later (or change an existing condition) with the cond command. For example, if we want to make a breakpoint on line size for the condition i==25000, we could tell gdb:

```shell
(gdb) break 7 if i==250000
```

Alternatively, if the breakpoint already existed, for example, as breakpoint 1, we could write

```shell
cond 1 i==250000
```

If we write a _cond_ command with no expression, then it makes a breakpoint unconditional. We can also _enable_ or _disable_ breakpoints (by their numeric id). A disabled breakpoint still exists (and can be re-enabled later), but has no effect—it will not cause the program to stop. We can also _delete_ a breakpoint by its numeric id. You can use the _info breakpoints_ command (which can be abbreviated _i b_) to see the status of current breakpoints.

Two other useful commands to control the execution of the program are _until_, which causes a loop to execute until it finishes (_gdb_ stops at the first line after the loop), and _finish_ (which can be abbreviated fin), which finishes the current function—i.e., causes execution until the current function returns.

<h3>Watchpoints</h3>

Another incredibly useful feature of _gdb_ is a _watchpoint_—the ability to have gdb stop when the value of a particular expression changes. For example, we can write _watch i_, which will cause gdb to stop whenever the value of _i_ changes. When _gdb_ stops in response to a watchpoint, it will print the old value of the expression and the new value.

Watchpoints can be a particularly powerful tool when you have pointer-related problems, and values of variables are changing through aliases. However, sometimes, the alias we have when we setup the watchpoint may go out of scope before the change we are interested in happens. For example, we may want to watch _*p_, but _p_ is a local variable, whose scope ends before the value changes. Whenever we face such a problem, we can _print p_, which will give us the pointer in a _gdb_ variable (e.g., `$6`), and then we can use that `$`-variable (which never goes out of scope—it lives until we restart gdb) to set our watchpoint: watch `*$6`.

<h3>Signals</h3>

Whenever your program receives a signal, _gdb_ will stop the program and give you control. There are three particularly common signals that come up during debugging. The first is SIGSEGV, which indicates a segmentation fault. If your program is segfaulting, then just running it in _gdb_ can help you gather a lot of information about what is happening. When the segfault happens, _gdb_ will stop, and your program will be on the line where the segfault happened. You can then begin inspecting the state of the program (printing out variables) to see what went wrong.

Another common signal is SIGABRT, which happens when you program calls _abort()_ or fails an _assert_. As with segfaults, if your code is failing asserts, then running it in gdb can be incredibly useful—you will get control of the program at the point where _assert_ causes the program to abort, and (after going up a few frames back into your own code), see exactly what was going on when the problem happened.

The other signal that is useful is SIGINT, which happens when the program is interrupted—e.g., by the user pressing Control-c (inside emacs, you have to press C-c C-c: Control-C twice). If your program is getting stuck in an infinite loop, you can run it in _gdb_, and then after a while, press Control-c. You can then see where the program is, and what it is doing. You are not guaranteed to be in the right place (you may interrupt the program before it gets into the infinite loop), but if you wait sufficiently long, you will typically end up where you want. You can then see what is happening, and why you are not getting the behavior you want.



<h1>Week 4: Project</h1>
