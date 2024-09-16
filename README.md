# Bank Management System

## Overview

The **Bank Management System** is a comprehensive C-based project designed to simulate the core functionalities of a banking system. It allows customers to manage their accounts, make transactions, apply for and repay loans, and view transaction history. Admin users can view all accounts, total balances, and transaction histories across customers. The system supports multi-threaded transaction simulations and includes encryption for password storage and transaction descriptions for enhanced security.

The project is designed with modularity and scalability in mind, separating core functionalities into different modules such as customer management, transaction processing, loan management, and security. The data is persisted across sessions using file storage.

## Features

### Customer Features:
- **Customer Account Creation**: Customers can create accounts with a unique ID and a hashed password. The account includes a starting balance.
- **Login System**: Customers log in with their unique ID and password, which are securely hashed using SHA-256.
- **View Account Details**: Customers can view their account details, including balance and recent transactions.
- **Deposit and Withdraw Funds**: Customers can deposit and withdraw money from their account. The transaction is processed in real time, and their balance is updated.
- **Transaction History**: Customers can view their transaction history, including details such as the amount and description of each transaction.
- **Apply for Loans**: Customers can apply for loans with customizable amounts, interest rates, and repayment durations.
- **Repay Loans**: Customers can repay loans in installments or fully, with their balance and loan amounts being adjusted accordingly.

### Admin Features:
- **View All Accounts**: Admins can view details of all customer accounts, including their balance.
- **View Total Balance**: Admins can see the total sum of balances across all customer accounts.
- **View Transaction History**: Admins can view the transaction history of all customers, including transaction amounts and encrypted descriptions.
- **Multi-threaded Transaction Simulation**: Admins can simulate transactions for multiple customers in a multi-threaded environment to stress-test the system.

### Data Storage:
- **File-based Persistence**: Customer and transaction data is stored in files (`customer.dat` and `transactions.dat`). These files ensure that the data persists between sessions, and any updates to customer or transaction information are written to these files.

### Security Features:
- **Password Encryption**: Customer passwords are hashed using SHA-256 to ensure secure storage.
- **Encrypted Transaction Descriptions**: Transaction descriptions are encrypted using a simple XOR-based encryption for added privacy.
- **Authentication**: Admin and customer authentication systems ensure that only valid users can access the system.

## File Structure

```bash
├── Makefile            # For compiling the project
├── account.h           # Header file for account management
├── admin.c             # Admin functionalities implementation
├── admin.h             # Header file for admin functionalities
├── bank_management     # Compiled executable (created after running `make`)
├── customer.c          # Customer-related functionalities implementation
├── customer.dat        # Persistent storage of customer data
├── customer.h          # Header file for customer management
├── file_manager.c      # File I/O operations for saving/loading data
├── file_manager.h      # Header file for file management
├── loan.c              # Loan management functionalities implementation
├── loan.h              # Header file for loan management
├── main.c              # Main program file containing the entry point
├── security.c          # Security features like password hashing
├── security.h          # Header file for security functionalities
├── transaction.c       # Transaction processing implementation
├── transaction.h       # Header file for transaction management
