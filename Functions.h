#include <iostream>

template<typename Item_Type>
class Single_Linked_List {
private:
    // Node structure for each element in the list
    struct Node {
        Item_Type data;
        Node* next;
        Node(const Item_Type& item) : data(item), next(nullptr) {}
    };

    Node* head;         // Pointer to the head (first node) of the list
    Node* tail;         // Pointer to the tail (last node) of the list
    size_t num_items;   // Number of items (nodes) in the list

public:
    // Constructor
    Single_Linked_List();

    // Function to add an item to the front of the list
    void push_front(const Item_Type& item);

    // Function to add an item to the back of the list
    void push_back(const Item_Type& item);

    // Function to remove the item at the front of the list
    void pop_front();

    // Function to remove the item at the back of the list
    void pop_back();

    // Function to get the current size of the list
    size_t size() const;

    // Function to get the value of the item at the front of the list
    Item_Type front() const;

    // Function to get the value of the item at the back of the list
    Item_Type back() const;

    // Function to check if the list is empty
    bool empty() const;

    // Function to insert an item at a specific index in the list
    void insert(size_t index, const Item_Type& item);

    // Function to remove an item at a specific index from the list
    bool remove(size_t index);

    // Function to find the index of the first occurrence of an item in the list
    size_t find(const Item_Type& item) const;

    // Function to display the contents of the list
    void display() const;
};
