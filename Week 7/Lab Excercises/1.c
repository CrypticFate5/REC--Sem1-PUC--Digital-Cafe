// Given a list of strings, concatenate those strings into the alphabetically smallest string possible. For example, 'a' < 'b', 'ab' < 'ac' and 'ab' < 'abc'.

 

// Example

 

// substrings = ['a','bd','ac','cd']

 

// Return 'aacbdcd'.

 

// Example

 

// substrings = ['c', 'cc', 'cca', 'cccb']

 

// Return 'ccacccbccc'.

 

// Function Description

 

// Complete the function smallestString in the editor below.

 

// smallestString has the following parameter(s):

// string substrings[n]:  an array of strings

 

// Returns:

// string: the alphabetically smallest string formed by the concatenation of all elements of substrings

 

// Constraints

 

// ·       1 ≤ n ≤ 3500

// ·       1 ≤ length of substrings[i] ≤ 1000

// ·       Each substrings[i] is composed of lowercase letters only, ascii[a-z].

 

// Input Format for Custom Testing

// Input from stdin will be processed as follows and passed to the function.

 

// The first line contains an integer n, the size of the array substrings.

// Each of the next n lines contains a string substrings[i].

 

// Sample Case 0

// Sample Input

 

// STDIN     Function

// -----     -----

// 3      →  substrings[] size n = 3

// a      →  substrings = ['a', 'bc', 'ad']

// bc

// ad

 

 

// Sample Output

 

// aadbc

 

// Explanation

 

// The strings that can be created in alphabetical order are are 'aadbc', 'abcad', 'adabc', 'adbca', 'bcaad', 'bcada'. The smallest is 'aadbc'.

 

// Sample Case 1

// Sample Input

 

// STDIN     Function

// -----     -----

// 3      →  substrings[] size n = 3

// abc    →  substrings = ['abc', 'ab', 'bc']

// ab

// bc

 

// Sample Output

 

// ababcbc

 

// Explanation

 

// The strings that can be formed are 'abcabbc', 'abcbcab', 'ababcbc', 'abbcabc', 'bcabcab' and 'bcababc'. The alphabetically smallest string is 'ababcbc'.

 

// Sample Case 2

// Sample Input

 

// STDIN     Function

// -----     -----

// 3     →  substrings[] size n = 3

// dd    →  substrings = ['dd', 'dda', 'ddb']

// dda

// ddb

 

// Sample Output

 

// ddddaddb

 

// Explanation

 

// The strings that can be formed are 'ddddaddb', 'ddddbdda', 'ddaddddb', 'ddaddbdd', 'ddbdddda', 'ddbddadd'. The alphabetically smallest string is 'ddddaddb'.

 

