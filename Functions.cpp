#include "Functions.h"
#include <iostream>

using namespace std;

template<typename Item_Type>
Single_Linked_List<Item_Type>::Single_Linked_List() : head(nullptr), tail(nullptr), num_items(0) {}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::push_front(const Item_Type& item) {
    // Create a new node with the given item
    Node* new_node = new Node(item);
    if (empty()) {
        // If the list is empty, set the new node as both head and tail
        head = new_node;
        tail = new_node;
    } else {
        // If the list is not empty, set the new node as the new head
        new_node->next = head;
        head = new_node;
    }
    num_items++; // Increment the number of items in the list
}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::push_back(const Item_Type& item) {
    // Create a new node with the given item
    Node* new_node = new Node(item);
    if (empty()) {
        // If the list is empty, set the new node as both head and tail
        head = new_node;
        tail = new_node;
    } else {
        // If the list is not empty, append the new node to the tail
        tail->next = new_node;
        tail = new_node;
    }
    num_items++; // Increment the number of items in the list
}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::pop_front() {
    if (!empty()) {
        // Remove the head node and update the head pointer
        Node* temp = head;
        head = head->next;
        delete temp;
        num_items--; // Decrement the number of items in the list
        if (empty()) {
            tail = nullptr; // If the list becomes empty, update the tail pointer
        }
    }
}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::pop_back() {
    if (!empty()) {
        if (head == tail) {
            // If there is only one node in the list, delete it and update head and tail
            delete head;
            head = nullptr;
            tail = nullptr;
            num_items--;
        } else {
            // Find the second-to-last node and update the tail pointer
            Node* current = head;
            while (current->next != tail) {
                current = current->next;
            }
            delete tail; // Delete the last node
            tail = current;
            tail->next = nullptr;
            num_items--; // Decrement the number of items in the list
        }
    }
}

template<typename Item_Type>
size_t Single_Linked_List<Item_Type>::size() const {
    return num_items;
}

template<typename Item_Type>
Item_Type Single_Linked_List<Item_Type>::front() const {
    if (!empty()) {
        return head->data;
    }
    // You may throw an exception or return a default value in case the list is empty
}

template<typename Item_Type>
Item_Type Single_Linked_List<Item_Type>::back() const {
    if (!empty()) {
        return tail->data;
    }
    // You may throw an exception or return a default value in case the list is empty
}

template<typename Item_Type>
bool Single_Linked_List<Item_Type>::empty() const {
    return num_items == 0;
}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::insert(size_t index, const Item_Type& item) {
    if (index >= num_items) {
        push_back(item);
    } else if (index == 0) {
        push_front(item);
    } else {
        Node* new_node = new Node(item);
        Node* current = head;
        for (size_t i = 0; i < index - 1; i++) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
        num_items++;
    }
}

template<typename Item_Type>
bool Single_Linked_List<Item_Type>::remove(size_t index) {
    if (index >= num_items) {
        return false;
    } else if (index == 0) {
        pop_front();
    } else {
        Node* current = head;
        for (size_t i = 0; i < index - 1; i++) {
            current = current->next;
        }
        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
        num_items--;
    }
    return true;
}

template<typename Item_Type>
size_t Single_Linked_List<Item_Type>::find(const Item_Type& item) const {
    Node* current = head;
    size_t index = 0;
    while (current != nullptr) {
        if (current->data == item) {
            return index;
        }
        current = current->next;
        index++;
    }
    return num_items; // Item not found, return the size of the list
}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::display() const {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Explicit Instantiation for int
template class Single_Linked_List<int>;
