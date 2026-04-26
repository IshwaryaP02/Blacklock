🔐 BlackLock
File Encryption & Decryption Tool in C
📌 Overview

BlackLock is a capstone project developed in C that focuses on enhancing data security by comparing plaintext storage with encrypted file storage.

The system allows users to securely encrypt and decrypt files using key-based cryptographic techniques, ensuring that sensitive data remains protected from unauthorized access.

🎯 Objective
To demonstrate the risks of plaintext storage
To implement a secure file encryption and decryption system
To evaluate how encryption improves data confidentiality
To provide a lightweight and efficient security solution using C
🚀 Features
🔐 Password-based file encryption
🔓 Secure file decryption
📁 Supports all file types (text, images, PDFs, etc.)
⚡ Fast and lightweight implementation
🧠 Demonstrates cryptographic concepts (XOR / AES concept)
💻 Command-line interface
🛠️ Tech Stack
Language: C
Libraries:
stdio.h
stdlib.h
string.h
stdint.h
Compiler: GCC / MSVC
Platform: Windows
⚙️ How It Works
🔐 Encryption Process
User provides:
Input file
Output file
Password/key
File is read in binary mode
Each byte is encrypted using a key-based algorithm
Encrypted data is saved as a new file
🔓 Decryption Process
User provides encrypted file and key
System applies reverse operation
Original file is restored
🧪 Usage
🔹 Compile
gcc encrypt.c -o encrypt.exe
gcc decrypt.c -o decrypt.exe
🔹 Encrypt a File
encrypt.exe input.txt output.enc mypassword
🔹 Decrypt a File
decrypt.exe output.enc decrypted.txt mypassword
📊 Plaintext vs Encrypted Storage
Feature	Plaintext	Encrypted
Readability	Direct	Unreadable
Security	Low	High
Data Protection	None	Strong
Unauthorized Access	Easy	Difficult
🔐 Security Insights
Plaintext files can be easily read if accessed
Encrypted files remain secure without the key
Demonstrates importance of cryptography in real-world systems
⚠️ Limitations
Basic encryption (XOR) is not industry-grade
No graphical user interface
Key management is user-dependent
🚀 Future Enhancements
Implement AES-256 encryption
Add GUI using Qt
Password strength validation
Secure key storage
Batch file encryption
Secure file deletion
📚 Learning Outcomes
File handling in C (binary operations)
Understanding encryption & decryption logic
Security evaluation techniques
System-level programming concepts
👨‍💻 Author

BlackLock Project – Capstone (C Programming)

⭐ Final Note

This project highlights how encryption transforms insecure plaintext storage into a secure system, reinforcing the importance of data protection in modern computing.
