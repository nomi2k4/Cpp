#include "header.h"

int main()
{
    BorrowList library;

    // Adding records
    library.addBorrowRecord("Data Structures", "abc", "Ali", "S101", "2025-10-01", "2025-10-15", 0, 0.0);
    library.addBorrowRecord("C++ Programming", "xyz", "Ahmed", "S102", "2025-10-02", "2025-10-16", 1, 0.0);
    library.addBorrowRecord("Database Systems", "lmn", "Sara", "S103", "2025-10-03", "2025-10-17", 0, 50.0);
    library.addBorrowRecord("Operating Systems", "pqr", "Fatima", "S104", "2025-10-04", "2025-10-18", 2, 0.0);

    // Display all records
    library.displayAllRecords();

    return 0;
}
