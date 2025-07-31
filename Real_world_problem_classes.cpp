#include <bits/stdc++.h>
using namespace std;
class Book {
private:
    string title;
    string author;
    int copies;
    static int totalBooks;
public:
    Book(string t = "unknown", string a = "unknown", int c = 0) {
        title = t;
        author = a;
        copies = c;
        totalBooks++;
    }
    void display() const {
        cout << "Title: " << title << ", Author: " << author << ", Available copies: " << copies << endl;
    }
    static void namesOfBooks() {
        cout << "Total Books in Library: " << totalBooks << endl;
    }
};
// Initialize static variable
int Book::totalBooks = 0;

int main() {
    Book Details[2] = {
        Book("The Lion", "William", 4),
        Book("Only Us", "Elon", 6),
    };
    cout << "Library stores:\n";
    
    for (int i = 0; i < 2; i++) {
        Details[i].display();
    }
    Book::namesOfBooks();
    return 0;
}
