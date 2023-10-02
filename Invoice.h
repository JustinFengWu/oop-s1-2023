#include <string>

class Invoice {

    private:
    std::string invoiceId;
    int dollarsOwed;

    public:
    Invoice(std::string invoiceId);
    void addServiceCost(int costDollars);
    int getDollarsOwed();
    std::string getInvoiceId();
};



