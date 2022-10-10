# SANTA-Esolang

An Esoteric Programming Language created by @EarthRulerr using C++. 

See the Esolangs WIKI article:
Source code: https://github.com/EarthRulerr/SANTA-Esolang
Run SANTA code: https://replit.com/@EarthRulerr/SANTA-Esolang?v=1

# HOW TO USE

<code>
  PRINTER this is some text that will be printed to console.
  HOHOHO this is a comment.
  SANTA! HOHOHO this will print "Hello, World!"
  </code>
  
  <code>HOHOHO</code> is a comment. You can only comment before PRINTER. If anything is ran on the same line as PRINTER and after PRINTER (IE <code>PRINTER example HOHOHO example</code> it will result in error, although running <code>HOHOHO example PRINTER example</code> will work properly. 

Examples of same line programming with SANTA:

<code>
Correct Use:
 COOKIES 5 MILK 5 MULTIPLY SANTA! PRINTER this will do 5x5 then print "Hello, World!" and then print this text!
  SANTA! HOHOHO hello! PRINTER this will print "Hello, World!" then print this text!
  
  Improper Use:
  COOKIES 5 MILK 5 MULTIPLY PRINTER hello! HOHOHO hello!
  PRINTER hello! SANTA! COOKIES 5 MILK 5 DIV
</code>

# COOKIES AND MILK (Math)

Need to do some basic math? I have built division, multiplication, subtraction, and addition into SANTA!

<code>
  COOKIES 2 MILK 2 MULTIPLY 
  Outout: 4, 2*2 (4/2)
  
  COOKIES 36 MILK 6 DIV
  Output: 6, 36/6 (6*6)
  
  COOKIES 10 MILK 5
  Output: 15, 10+5
  
  COOKIES 30 MILK 2
  Output: 28, 30-2
  </code>

