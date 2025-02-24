# Lab 06

Welcome to your sixth lab.

## Starting point

Use the shortcut Ctrl + Shift + V to open the README.md file in Preview mode.

## Learning objectives

After completion of this lab, students will be able to

- understand loops
- handle arrays
- understand number system

## Instructions

Make sure you follow these instructions carefully. 
This is an evaluative lab. You will NOT get any help from TAs or instructors.

### Rename the file to your BITS ID

You should see a C file: `Lab06.c`. The first thing you should do is rename it to your `BITSID.c`. For example, if your ID is 2024AXPS5678G, the file should be renamed to `2024AXPS5678G.c`.

To rename a file,

- right click on it in the explorer column on the left,
- click the rename option,
- type in the new name and hit enter.

## Running your C program

To compile your file:

```sh
gcc <BITSID>.c -o Lab06
```

If your program has included <math.h>, use -lm flag for compilation
```sh
gcc <BITSID>.c -o Lab06 -lm
```
If your program has no compile-time errors, run your program by:

```sh
./Lab06
```

## Evaluative component

Look at the comments given in the code, and try to write a working code for the 2 functions given.

- Include all required header files. Do NOT include stdlib.h
- Do not change the main function.
- Do NOT use break and continue statements.
- Write the logic for the functions
- You are free to write any additional helper functions.

### Run against the given test cases

How do you know if your program is correct? We have some _test cases_ that do this for you.
Go to the terminal and run the command

```sh
python3 autograder.py <BITSID>.c Lab06-tests.json
```

> Your goal is to make _all_ test cases pass before you submit your lab.

> Try for other inputs as well. Your solution will be evaluated with other test cases.

## Preparing the submission

1. First, make sure the .c file is renamed properly and works as expected (Your ID should end with a G). 

2. Make sure you have only ONE `.c` file in your working folder.

3. Run the following command in the terminal to make the program to prepare submission an executable:

   ```sh
   chmod u+x prepare_submission
   ```

4. Execute that program to produce the submission file `YOURBITSID.tar.gz`:

   ```sh
   ./prepare_submission
   ```
   The command will only work on CC lab machines with Ubuntu.

5. Upload the created `YOURBITSID.tar.gz` file to the appropriate assignment on <https://quanta.bits-goa.ac.in/>.

   Be sure to not write anything in the 'Save As' option on the submission form while uploading your solution (`tar.gz` file) on quanta.

   Also, check that the correct `tar.gz` file has been uploaded before logging out from quanta. 

   Ensure that your submission is not in a draft form.
