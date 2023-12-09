# CIS-7

## Course Description

This course is an introduction to the discrete structures used in Computer Science with an emphasis on their applications. 

- **Functions**
- **Relations**
- **Sets**
- **Basic Logic**
- **Proof Techniques**
- **Basics of Counting**
- **Graphs**
- **Trees**
- **Discrete Probability**

## Vigenere Cipher Final Project

### Authors

- **Daniel Chvat**

### Date Published

- December 9, 2023

### Project Description

The goal of this project was to implement discrete structures concepts learned throughout the semester to create a program which can do Vigenere Cipher Encryption and Decryption.

### Reference Table

[![Reference Table]][Reference Table]

[Reference Table]: https://github.com/DanielChvat/CIS-7/blob/master/misc/Cipher_Table.JPG

### Encryption

Let the plaintext character at a given index be denoted by ${P_i}$, the corresponding key character be denoted by ${K_i}$ and the encrypted character be denoted by ${E_i}$. ${E_i}$ is found using the following formula:

${E_i} = {(P_i + K_i) \mod 26}$ 

### Decryption

Let the encrypted character at a given index be denoted by ${E_i}$, the corresponding key character be denoted by ${K_i}$ and the decrypted character be denoted by ${D_i}$. ${E_i}$ is found using the following formula:

${D_i} = {(E_i - K_i + 26) \mod 26}$ 

## Instructions

### Encryption

When the Program starts the user is presented the following prompt:

```sh
Vigenere Cypher Program
-----------------------
Please type E for Encrypt | D for Decrypt | Anything Else to Exit: 
```

If the user types the letter E in either lower or upper case the program enters `encryption mode`. The user is then presented the prompt:

```sh
Text to be Encrypted: 
```

The user must type the plaintext string they wish to encrypt after the `:` and is then presented the prompt:

```sh
Key to Encrypt with: 
```

The user must type the key they wish to encrypt the previously entered text with after the `:`. The program then outputs:

```sh
Encrypted Text: 
```

With the encrypted version of the text following the `:`.


