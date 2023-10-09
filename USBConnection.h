#ifndef USB_CONNECTION_H
#define USB_CONNECTION_H

#include <stack>

class USBConnection {
private:
    int id;

    // Private constructor to prevent direct object creation.
    USBConnection(int i) {
        id = i;
    }

public:
    // Static factory function to create objects.
    static USBConnection* CreateUsbConnection() {
        if (!ids.empty()) {
            int newId = ids.top();
            ids.pop();
            return new USBConnection(newId);
        } else {
            return nullptr; // No available ports.
        }
    }

    // Public destructor to return the used ID to the stack.
    ~USBConnection() {
        ids.push(id);
    }

    int get_id() const {
        return id;
    }

    // Static stack to store available IDs.
    static std::stack<int> ids;
};

// Initialize static members
std::stack<int> USBConnection::ids({3, 2, 1});

#endif  // USB_CONNECTION_H
