#include "Invoice.h"

Invoice::Invoice(std::string invoiceId) {
    this->invoiceId = invoiceId;
    dollarsOwed = 0;
}

void Invoice::addServiceCost(int costDollars) { 
    dollarsOwed += costDollars;
}
int Invoice::getDollarsOwed() {
    return dollarsOwed;
}
std::string Invoice::getInvoiceId() {
    return invoiceId;
}
