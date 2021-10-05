# Enigma - RSA encryption software

Windows application using algorithm Rivest–Shamir–Adleman (RSA) cryptosystem to create pair both public and private key and encrypt or decrypt given text using provided keys. Application has been written in C++ language, using .NET Framework and Visual Studio Express. More about RSA in <a href="https://en.wikipedia.org/wiki/RSA_(cryptosystem)">Wikipedia</a>.

### Description of the algorithm

I. Keys generation:
    1. Find two prime numers (p,q).
    2. Calculate (n): n = (p*q).
    3. Calculate Euler function for n: Ø = (p-1)*(q-1).
    4. Find (e) from: NWD(e,Ø) = 1, where 1 < e < n.
    5. Find (d): d*e mod Ø = 1.

   Public key (e,n)
   Private key (d,n)
  
II. Text encryption
    1. Provide (e,n). 
    2. Change each letter to ASCII value.
    3. Calculate value (z) of each letter: z = t^e mod n.
    4. Print (z) value of each letter.
    
III. Text decryption
    1. Provide (d,n).
    2. Read each value (values have to be separated by " ").
    3. Calculate value (t): t = c^d mod n.
    4. Print letter matching to ASCII value (t).

### Program layout
<table>
    <tr>
        <td align="center"><img src="https://github.com/jakubx6/rsa_encryption/blob/main/img/enigma.jpg" width=200></td>
    </tr>
</table>


### License
Take what you want and have fun ;)
