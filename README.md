Tasks
0. push, pall
Implement the push and pall opcodes.

The push opcode
The opcode push pushes an element to the stack.
The pall opcode
The opcode pall prints all the values on the stack, starting from the top of the stack.


1. pint 
Implement the pint opcode.

The pint opcode
The opcode pint prints the value at the top of the stack, followed by a new line.


2. pop 
Implement the pop opcode.

The pop opcode
The opcode pop removes the top element of the stack.


3. swap 
Implement the swap opcode.

The swap opcode
The opcode swap swaps the top two elements of the stack.


4. add 
mplement the add opcode.

The add opcode
The opcode add adds the top two elements of the stack.


5. nop 
Implement the nop opcode.

The nop opcode
The opcode nop doesn’t do anything.

6. sub 
Implement the sub opcode.

The sub opcode
The opcode sub subtracts the top element of the stack from the second top element of the stack.


7. div 
Implement the div opcode.

The div opcode
The opcode div divides the second top element of the stack by the top element of the stack.


8. mul 
Implement the mul opcode.

The mul opcode
The opcode mul multiplies the second top element of the stack with the top element of the stack.


9. mod 
mplement the mod opcode.

The mod opcode
The opcode mod computes the rest of the division of the second top element of the stack by the top element of the stack.


10. comments 
Every good language comes with the capability of commenting. When the first non-space character of a line is #, treat this line as a comment (don’t do anything).


11. pchar 
Implement the pchar opcode.

The pchar opcode
The opcode pchar prints the char at the top of the stack, followed by a new line.


12. pstr 
Implement the pstr opcode.

The pstr opcode
The opcode pstr prints the string starting at the top of the stack, followed by a new line.


13. rotl 
Implement the rotl opcode.

The rotl opcode
The opcode rotl rotates the stack to the top.


14. rotr 
Implement the rotr opcode.

The rotr opcode
The opcode rotr rotates the stack to the bottom.


15. stack, queue 
Implement the stack and queue opcodes.

The stack opcode
The opcode stack sets the format of the data to a stack (LIFO). This is the default behavior of the program.
The queue opcode
The opcode queue sets the format of the data to a queue (FIFO).
When switching mode:

    The top of the stack becomes the front of the queue
    The front of the queue becomes the top of the stack


16. Brainf*ck 
Write a Brainf*ck script that prints School, followed by a new line.

    All your Brainf*ck files should be stored inside the bf sub directory
    You can install the bf interpreter to test your code: sudo apt-get install bf
    Read: Brainf*ck



17. Add two digits 
Add two digits given by the user.

    Read the two digits from stdin, add them, and print the result
    The total of the two digits with be one digit-long (<10)


18. Multiplication 
Multiply two digits given by the user.

    Read the two digits from stdin, multiply them, and print the result
    The result of the multiplication will be one digit-long (<10)


19. Multiplication level up 
Multiply two digits given by the user.
Read the two digits from stdin, multiply them, and print the result, followed by a new line.
