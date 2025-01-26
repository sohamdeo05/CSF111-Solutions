# Lab 01

Welcome to your first lab.

## Starting point

Use the shortcut Ctrl + Shift + V to open the README.md file in Preview mode.

## Learning objectives

After completion of this lab, students will be able to

* download the questions from the FTP server
* write the solution in a C program
* check it against the given test cases
* Understand the basic of conditionals (if, else if, else)

## Instructions

Make sure you follow these instructions carefully. Ask the TAs for help if needed.

### Rename the file to your BITS ID

You should see a C file: `Lab01.c`. The first thing you should do is rename it to your `BITSID.c`. For example, if your ID is 2024AXPS5678G, the file should be renamed to `2024AXPS5678G.c`. 

To rename a file,

* Right click on it in the Explorer column on the left,
* click the rename option,
* and type in the new name and hit Enter.

### Practice component

Open the `BITSID.c` file by double-clicking on it. Now, read the problem statement in the comments in `BITSID.c`, and follow the instructions there to write a working code for the problem.

### Running your first C program

Once you're done solving the problem, you can run your code to test it out. 

* Open a terminal: On the menu bar at the top: click Terminal > New Terminal. 
* A `TERMINAL` window opens at the bottom of your screen with a command prompt.

Type the following command in it and hit enter (of course, replace `<BITSID>` with your actual BITS ID so it finds the file in your folder):

```sh
gcc <BITSID>.c -o lab01.out
```

You should see a new file `lab01.out` in the Explorer on the left.

Run your program by typing the following command:

```sh
./lab01.out
```

### Run against the given test cases

How do you know if your program is correct? We have some *test cases* that do this for you.
Go to the terminal and run the command:

```sh
python3 autograder.py <BITSID>.c Lab01-tests.json
```

Here are two example outputs:
When your output does not match the expected output, i.e., the test case *fails*:
```txt
Testing code for student with BITS ID: 2023AXPS5678G
-----TEST CASE NUMBER 1-----
---Given Input---
210

---Expected Output---
Enter the magical number: 
The magical properties of 210 are:
- It's a multiple of 5 and 7.
Thank you for exploring the magical properties!

---Your Output---

---Result: Failed---

Final Score: 0 / 1
```

When your output does match the expected output, i.e., when the test case *passes*:

```txt
Testing code for student with BITS ID: 2023AXPS5678G
-----TEST CASE NUMBER 1-----
---Given Input---
210

---Expected Output---
Enter the magical number: 
The magical properties of 210 are:
- It's a multiple of 5 and 7.
Thank you for exploring the magical properties!

---Your Output---
Enter the magical number: 
The magical properties of 210 are:
- It's a multiple of 5 and 7.
Thank you for exploring the magical properties!

---Result: Passed---

Final Score: 1 / 1
```

> Your goal is to make *all* test cases pass (in this case, only one) before you submit your lab.

* You don't have to make any submissions for this lab. So try to get the correct output by the end of this exercise in order to ensure that you have thoroughly understood the topics taught in classes and in this lab.
