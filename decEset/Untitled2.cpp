#include <iostream>
#include <set>

template <typename T>
class Set {
private:
    struct Node {
        T value;
        Node* next;

        Node(const T& val) : value(val), next(nullptr) {}
    };

    Node* head;

public:
    Set() : head(nullptr) {}

    ~Set() {
        clear();
    }

    bool isEmpty() const {
        return head == nullptr;
    }

    bool contains(const T& value) const {
        Node* current = head;
        while (current != nullptr) {
            if (current->value == value) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void insert(const T& value) {
        if (contains(value)) {
            std::cout << "Elemento já existe no conjunto." << std::endl;
            return;
        }

        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void remove(const T& value) {
        if (isEmpty()) {
            std::cout << "Conjunto vazio." << std::endl;
            return;
        }

        if (head->value == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            std::cout << "Elemento removido do conjunto." << std::endl;
            return;
        }

        Node* current = head;
        while (current->next != nullptr && current->next->value != value) {
            current = current->next;
        }

        if (current->next == nullptr) {
            std::cout << "Elemento não encontrado no conjunto." << std::endl;
            return;
        }

        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
        std::cout << "Elemento removido do conjunto." << std::endl;
    }

    void clear() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }

    void print() const {
        if (isEmpty()) {
            std::cout << "Conjunto vazio." << std::endl;
            return;
        }

        Node* current = head;
        while (current != nullptr) {
            std::cout << current->value << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    std::set<int> set;

    set.insert(1);
    set.insert(2);
    set.insert(3);

    std::cout << "Conjunto: ";
    for (int elem : set) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::cout << "Conjunto contém 2: " << (set.count(2) ? "true" : "false") << std::endl;
    std::cout << "Conjunto contém 4: " << (set.count(4) ? "true" : "false") << std::endl;

    set.erase(2);

    std::cout << "Conjunto após remover o 2: ";
    for (int elem : set) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    set.clear();

    std::cout << "Conjunto após limpar: ";
    for (int elem : set) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
