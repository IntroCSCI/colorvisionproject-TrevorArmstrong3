Super perfect colorblind people solution

## Description

It reads colors from a CSS file and outputs the hexidecimal color codes

### v0.2 Updates

*Coming soon*

### v1.0 Updates

*Coming soon*


## Developer

Trevor Armstrong

## Example

To run the program, give the following commands:

```
thing
```

Here is an example of the program running:

```
please enter filename:
thing
#ac2925
#ac2925
#ac2925
#ac2925
#ffffff
#222222
...
```

## C++ Guide

### Variables and Data Types

The types of variables used were strings, intigers, and arrays. They were each the best option because it allowed the code to flow smoothly over the fewest number of lines. The array was used to store each of the hexidecimal color code's number values and output it, the intergers kept track of which line was being read, which letter in that line and the target to search for. The strings handled the input and helped read the CSS file.

### Console Input and Output

The input and output are incredibly simple and cannot be messed up easily. There is only one required input and the output is all the hexidecimal color codes that are on the site.

### Decisions

Decisions were used to throw out any false values. In most files there will be pound signs that are not immediatly followed up be hexidecimal color codes so it was needed to decide what is actually a color and not something else. The program decides throwing out any pound sing that is not followed by exactly six different characters. These caracters have to be between zero and nine or between the letter a and f. once those conditions are passed it is stored and outputted as the value seen on the console.

### Iteration

Iteration was essential for this program because it outputs multiple things with only one proccess. It could not have been done without iteration because of the nature of this programs goal. It searches for the color codes and outputs all of them. For that it must loop itself inputing and outputing the characters after any "#" that is found.

### File Input and Output

This program likely works with any CSS file and can output the hexidecimal color codes found in the code. all that needs to be done is uploading the file to the replit and typing in the file name when the program asks for it.

### Arrays/Vectors

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*
