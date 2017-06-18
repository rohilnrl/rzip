# rzip
A fast, simple compression tool that utilizes the [Huffman algorithm.](http://www.geeksforgeeks.org/greedy-algorithms-set-3-huffman-coding/)     

# Description 
Rzip is a command-line program written in C that creates and decompresses archives in the **.rzip** format. It is compatible only with UNIX at this time.

# Usage 
```    
rzip [OPTIONS] [PATH] 
```

# Options  
```
-p, --pack                         Compress the given folders/files 

-x, --extract                      Decompress the specified .rzip file while preserving directory structure    

-n, --no-structure                 Decompress the specified .rzip file while disregarding directory structure 

-v, --verbose                      Toggle verbose output           
    
 ```  


# Authors 
Rohil Narula    
Shrey Khandwekar
