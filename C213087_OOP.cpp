#include <iostream>
#include <fstream>
using namespace std;

ifstream inp("productIN.txt");
ifstream inb("buyerIN.txt");
ifstream inc("customerIN.txt");
ofstream outp("productOut.txt");
ofstream outb("buyerOut.txt");
ofstream outc("customerOut.txt");

class primary_properties
{
public:
    string product_ID, product_category, product_name;
    void product_identification()
    {
        getline(inp, product_ID);
        getline(inp, product_category);
        getline(inp, product_name);
    }
    void product_identification_out()
    {
        outp << "Product ID : " << product_ID << endl;
        outp << "Product Category : " << product_category << endl;
        outp << "Product Name : " << product_name << endl;
    }
};
class sold_product : public primary_properties
{
public:
    string customerID;
    string customer_Price;

    void sold_product_in()
    {
        getline(inc, customerID);
        inc >> customer_Price;
    }
    void sold_product_out()
    {

        outc << "Customer ID : " << customerID << endl;
        outc << "Price : " << customer_Price << endl;
    }
    void primary_properties_sold_product(primary_properties q)
    {
        outc << "Product ID : " << q.product_ID << endl;
        outc << "Product Category : " << q.product_category << endl;
        outc << "Product Name : " << q.product_name << endl;
    }
};
class bought_product : public primary_properties
{
public:
    string buyerID;
    string buy_price;
    string buyerName;
    void bought_product_in()
    {
        getline(inb, buyerID);
        getline(inb, buy_price);
        getline(inb, buyerName);
    }
    void bought_product_out()
    {

        outb << "Buyer ID : " << buyerID << endl;
        outb << "Price : " << buy_price << endl;
        outb << "Buyer Name : " << buyerName << endl;
    }
    void primary_properties_bought_product(primary_properties q)
    {
        outb << "Product ID : " << q.product_ID << endl;
        outb << "Product Category : " << q.product_category << endl;
        outb << "Product Name : " << q.product_name << endl;
    }
};
int main()
{
    primary_properties pp;
    pp.product_identification();
    pp.product_identification_out();
    sold_product sp;
    
    sp.primary_properties_sold_product(pp);
    sp.sold_product_in();
    sp.sold_product_out();
    bought_product bp;
    
    bp.primary_properties_bought_product(pp);
    bp.bought_product_in();
    bp.bought_product_out();

    inp.close();
    inb.close();
    inc.close();
    outp.close();
    outb.close();
    outc.close();

    return 0;
}
