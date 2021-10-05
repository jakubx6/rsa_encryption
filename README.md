# Enigma - RSA encryption software

Windows application using algorithm Rivest–Shamir–Adleman (RSA) cryptosystem, to create pairs, both public and private keys and encrypt or decrypt given text, using provided keys. Application has been written in C++ language, using .NET Framework and Visual Studio Express. More about RSA in <a href="https://en.wikipedia.org/wiki/RSA_(cryptosystem)">Wikipedia</a>.

### Description of the algorithm

I. Keys generation:  
&nbsp;&nbsp;1. Find two prime numers (p,q).  
&nbsp;&nbsp;2. Calculate (n): n = (p*q).  
&nbsp;&nbsp;3. Calculate Euler function for n: Ø = (p-1)*(q-1).  
&nbsp;&nbsp;4. Find (e) from: NWD(e,Ø) = 1, where 1 < e < n.  
&nbsp;&nbsp;5. Find (d): d*e mod Ø = 1.  
  
&nbsp;&nbsp;Public key (e,n)  
&nbsp;&nbsp;Private key (d,n)  
  
II. Text encryption:  
&nbsp;&nbsp;1. Provide (e,n).  
&nbsp;&nbsp;2. Change each letter to ASCII value.  
&nbsp;&nbsp;3. Calculate value (z) of each letter: z = t^e mod n.  
&nbsp;&nbsp;4. Print (z) value of each letter.  
      
III. Text decryption:  
&nbsp;&nbsp;1. Provide (d,n).  
&nbsp;&nbsp;2. Read each value (values have to be separated by " ").  
&nbsp;&nbsp;3. Calculate value (t): t = c^d mod n.  
&nbsp;&nbsp;4. Print letter matching to ASCII value (t).  
  
### Program layout
<table>
    <tr>
        <td align="center"><img src="https://github.com/jakubx6/rsa_encryption/blob/main/img/enigma.jpg" width=200></td>
    </tr>
</table>


### License
Take what you want and have fun ;)
