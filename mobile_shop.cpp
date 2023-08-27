#include<iostream>
#include<cstring>
//Maximum Number of Phones in the Cart
#define MAX_PHONES 10

using namespace std;
int items=0;

//Class for mobile phones and brands
class mobilePhones {
    public:
        //Brands :----
        struct apple {
            string name, color;
            float price;
        } iphone[3];

        struct samsung {
            string name, color;
            float price;
        } samsung[3];

        struct xiaomi {
            string name, color;
            float price;
        } xiaomi[3];

        struct one_plus {
            string name, color;
            float price;
        } one_plus[3];

        struct vivo {
            string name, color;
            float price;
        } vivo[3];
};

//Class for Cart
class addToCart {
    public:
        string name, color;
        int price, amount, quantity;
};

//Functions According to Brands :----
void apple (class addToCart cart[], class mobilePhones phone);

void samsung1 (class addToCart cart[], class mobilePhones phone);

void xiaomi1 (class addToCart cart[], class mobilePhones phone);

void onePlus1 (class addToCart cart[], class mobilePhones phone);

void vivo1 (class addToCart cart[], class mobilePhones phone);

//Function for Billing
void billing (class addToCart cart[]);

//Main Function :----
int main() {
    //Defining an instance variable of Classes :---
        mobilePhones phone;
        addToCart cart[MAX_PHONES];

    //Setting Prices and Name of Brands Mobiles :-----
        //Apple Phones :----
            phone.iphone[0].name = "Iphone 14";
            phone.iphone[1].name = "Iphone 13";
            phone.iphone[2].name = "Iphone 12";

            phone.iphone[0].price = 968.84;
            phone.iphone[1].price = 751.78;
            phone.iphone[2].price = 726.33;

        //Samsung Phones :----
            phone.samsung[0].name = "Samsung S23 Ultra";
            phone.samsung[1].name = "Samsung Galaxy Z Fold4";
            phone.samsung[2].name = "Samsung Galaxy M53 5G";

            phone.samsung[0].price = 1515.69;
            phone.samsung[1].price = 1879.46;
            phone.samsung[2].price = 315.25;

        //Xiaomi Phones :----
            phone.xiaomi[0].name = "Xiaomi 13 Pro 5G";
            phone.xiaomi[1].name = "Xiaomi 12 Pro 5G";
            phone.xiaomi[2].name = "Xiaomi 11i 5G";

            phone.xiaomi[0].price = 970.04;
            phone.xiaomi[1].price = 545.64;
            phone.xiaomi[2].price = 230.38;

        //One Plus :-----
            phone.one_plus[0].name = "OnePlus 11 5G";
            phone.one_plus[1].name = "OnePlus 10 Pro 5G";
            phone.one_plus[2].name = "OnePlus Nord CE 2 5G";

            phone.one_plus[0].price = 788.15;
            phone.one_plus[1].price = 666.90;
            phone.one_plus[2].price = 218.25;

        //Vivo :----
            phone.vivo[0].name = "Vivo X90 Pro";
            phone.vivo[1].name = "Vivo Y27";
            phone.vivo[2].name = "Vivo T2x 5G";

            phone.vivo[0].price = 1030.67;
            phone.vivo[1].price = 181.87;
            phone.vivo[2].price = 157.62;
    //------------------------------------------------
    
    //Variable Instialation :---
    int choice;
    char conti = 'y';

    while(conti == 'y'){
        //Asking to Choose the Brands :---
            cout<<"-------------------------- Gada Electronics --------------------------\n";
            cout<<"Which Brand's Mobile you want :---\n\tPress:---\n\t\t1. Apple\n\t\t2. Samsung\n\t\t3. Xiaomi\n\t\t4. One Plus\n\t\t5. Vivo\n";
            cout<<"---------------------------------- X ---------------------------------\n";
            cout<<"Enter your choice : ";
            cin>>choice;

        //Navigating through Brands :----
        switch(choice){
            case 1:
                apple(cart, phone);
                break;
            case 2:
                samsung1(cart, phone);
                break;
            case 3:
                xiaomi1(cart, phone);
                break;
            case 4:
                onePlus1(cart, phone);
                break;
            case 5:
                vivo1(cart, phone);
                break;
            default:
                cout<<"\n\n\t\tWrong Input !!!......\n\n";
                continue;
                break;
        }

        cout<<"\nDo you want to Continue shopping in othe Brands (Press y for Continue) : ";
        cin>>conti;
    }

    billing(cart);

    return 0;
}

void apple(class addToCart cart[], class mobilePhones phone) {
    //Variable Instialation :---
    int choice;
    char addCart;
    
    //Phones Menu :---
    cout<<"which mobile you want From Apple :----\n\tPress:---\n\t\t";
    for(int i=0; i<3; i++){
        cout<<i+1<<". "<<phone.iphone[i].name<<"\t$"<<phone.iphone[i].price<<"\n\t\t";
    }
    cout<<"4. Home\n\t\t";
    cout<<"\tEnter your Choice : ";
    cin>>choice;

    if(choice == 4){
        main();
    }
    //Asking to Add to Cart :---
    int quanti;
    char colour[20], conti;

    cout<<"\nDo you want "<<phone.iphone[choice-1].name<<" to Add to Cart(Press y to Add) : ";
    cin>>addCart;

    if(addCart == 'y'){
        if(items > MAX_PHONES){
            cout<<"\n\n\t\tCart is Full\n\n";
        }else{
            cart[items].name = phone.iphone[choice-1].name;

            //Asking For Colour :---
            cout<<"\nWhich Colour you want : ";
            cin>>colour;
            
            cart[items].color = colour;
            cart[items].price = phone.iphone[choice-1].price;

            //Asking For Quantity :----
            while(1){
                cout<<"\nHow many "<<phone.iphone[choice-1].name<<", do you want : ";
                cin>>quanti;

                if(quanti <= 5)
                    break;
                else{
                    cout<<"\nSorry, you can not add any mobile model of any brand more than 5..\n\n";
                    continue;
                }
            }

            cart[items].quantity = quanti;
            cart[items].amount = cart[items].quantity * cart[items].price;
            items++;

            cout<<"\nItems has been Added to Cart Successfully.\n";
            cout<<"Do you want to Continue Shopping in Apple(Press y for Continue) : ";
            cin>>conti;

            if(conti == 'y')
                apple(cart, phone);
        }
    }
}

void samsung1 (class addToCart cart[], class mobilePhones phone) {
    //Variable Instialation :---
    int choice;
    char addCart;
    
    //Phones Menu :---
    cout<<"which mobile you want From Samsung :----\n\tPress:---\n\t\t";
    for(int i=0; i<3; i++){
        cout<<i+1<<". "<<phone.samsung[i].name<<"\t$"<<phone.samsung[i].price<<"\n\t\t";
    }
    cout<<"4. Home\n\t\t";
    cout<<"\tEnter your Choice : ";
    cin>>choice;

    if(choice == 4)
        main();

    //Asking to Add to Cart :---
    int quanti;
    char colour[20], conti;

    cout<<"\nDo you want "<<phone.samsung[choice-1].name<<" to Add to Cart(Press y to Add) : ";
    cin>>&addCart;

    if(addCart == 'y'){
        if(items > MAX_PHONES){
            cout<<"\n\n\t\tCart is Full\n\n";
        }else{
            cart[items].name = phone.samsung[choice-1].name;

            //Asking For Colour :---
            cout<<"\nWhich Colour you want : ";
            cin>>colour;
            
            cart[items].color = colour;
            cart[items].price = phone.samsung[choice-1].price;

            //Asking For Quantity :----
            while(1){
                cout<<"\nHow many "<<phone.samsung[choice-1].name<<", do you want : ";
                cin>>quanti;

                if(quanti <= 5)
                    break;
                else{
                    cout<<"\nSorry, you can not add any mobile model of any brand more than 5..\n\n";
                    continue;
                }
            }

            cart[items].quantity = quanti;
            cart[items].amount = cart[items].quantity * cart[items].price;
            items++;

            cout<<"\nItems has been Added to Cart Successfully.\n";
            cout<<"Do you want to Continue Shopping in Samsung (Press y for Continue) : ";
            cin>>&conti;

            if(conti == 'y')
                samsung1(cart, phone);
        }
    }
}

void xiaomi1 (class addToCart cart[], class mobilePhones phone) {
    //Variable Instialation :---
    int choice;
    char addCart;
    
    //Phones Menu :---
    cout<<"which mobile you want From Xiaomi :----\n\tPress:---\n\t\t";
    for(int i=0; i<3; i++){
        cout<<i+1<<". "<<phone.xiaomi[i].name<<"\t$"<<phone.xiaomi[i].price<<"\n\t\t";
    }
    cout<<"4. Home\n\t\t";
    cout<<"\tEnter your Choice : ";
    cin>>choice;

    if(choice == 4)
        main();

    //Asking to Add to Cart :---
    int quanti;
    char colour[20], conti;

    cout<<"\nDo you want "<<phone.xiaomi[choice-1].name<<" to Add to Cart(Press y to Add) : ";
    cin>>&addCart;

    if(addCart == 'y'){
        if(items > MAX_PHONES){
            cout<<"\n\n\t\tCart is Full\n\n";
        }else{
            cart[items].name = phone.xiaomi[choice-1].name;

            //Asking For Colour :---
            cout<<"\nWhich Colour you want : ";
            cin>>colour;
            
            cart[items].color = colour;
            cart[items].price = phone.xiaomi[choice-1].price;

            //Asking For Quantity :----
            while(1){
                cout<<"\nHow many "<<phone.xiaomi[choice-1].name<<", do you want : ";
                cin>>quanti;

                if(quanti <= 5)
                    break;
                else{
                    cout<<"\nSorry, you can not add any mobile model of any brand more than 5..\n\n";
                    continue;
                }
            }

            cart[items].quantity = quanti;
            cart[items].amount = cart[items].quantity * cart[items].price;
            items++;

            cout<<"\nItems has been Added to Cart Successfully.\n";
            cout<<"Do you want to Continue Shopping in Xiaomi (Press y for Continue) : ";
            cin>>&conti;

            if(conti == 'y')
                xiaomi1(cart, phone);
        }
    }
}

void onePlus1 (class addToCart cart[], class mobilePhones phone) {
    //Variable Instialation :---
    int choice;
    char addCart;
    
    //Phones Menu :---
    cout<<"which mobile you want From One Plus :----\n\tPress:---\n\t\t";
    for(int i=0; i<3; i++){
        cout<<i+1<<". "<<phone.one_plus[i].name<<"\t$"<<phone.one_plus[i].price<<"\n\t\t";
    }
    cout<<"4. Home\n\t\t";
    cout<<"\tEnter your Choice : ";
    cin>>choice;

    if(choice == 4)
        main();

    //Asking to Add to Cart :---
    int quanti;
    char colour[20], conti;

    cout<<"\nDo you want "<<phone.one_plus[choice-1].name<<" to Add to Cart(Press y to Add) : ";
    cin>>&addCart;

    if(addCart == 'y'){
        if(items > MAX_PHONES){
            cout<<"\n\n\t\tCart is Full\n\n";
        }else{
            cart[items].name = phone.one_plus[choice-1].name;

            //Asking For Colour :---
            cout<<"\nWhich Colour you want : ";
            cin>>colour;
            
            cart[items].color = colour;
            cart[items].price = phone.one_plus[choice-1].price;

            //Asking For Quantity :----
            while(1){
                cout<<"\nHow many "<<phone.one_plus[choice-1].name<<", do you want : ";
                cin>>quanti;

                if(quanti <= 5)
                    break;
                else{
                    cout<<"\nSorry, you can not add any mobile model of any brand more than 5..\n\n";
                    continue;
                }
            }

            cart[items].quantity = quanti;
            cart[items].amount = cart[items].quantity * cart[items].price;
            items++;

            cout<<"\nItems has been Added to Cart Successfully.\n";
            cout<<"Do you want to Continue Shopping in One Plus (Press y for Continue) : ";
            cin>>&conti;

            if(conti == 'y')
                onePlus1(cart, phone);
        }
    }
}

void vivo1(class addToCart cart[], class mobilePhones phone) {
    //Variable Instialation :---
    int choice;
    char addCart;
    
    //Phones Menu :---
    cout<<"which mobile you want From Vivo :----\n\tPress:---\n\t\t";
    for(int i=0; i<3; i++){
        cout<<i+1<<". "<<phone.vivo[i].name<<"\t$"<<phone.vivo[i].price<<"\n\t\t";
    }
    cout<<"4. Home\n\t\t";
    cout<<"\tEnter your Choice : ";
    cin>>choice;

    if(choice == 4)
        main();

    //Asking to Add to Cart :---
    int quanti;
    char colour[20], conti;

    cout<<"\nDo you want "<<phone.vivo[choice-1].name<<" to Add to Cart(Press y to Add) : ";
    cin>>&addCart;

    if(addCart == 'y'){
        if(items > MAX_PHONES){
            cout<<"\n\n\t\tCart is Full\n\n";
        }else{
            cart[items].name = phone.vivo[choice-1].name;

            //Asking For Colour :---
            cout<<"\nWhich Colour you want : ";
            cin>>colour;
            
            cart[items].color = colour;
            cart[items].price = phone.vivo[choice-1].price;

            //Asking For Quantity :----
            while(1){
                cout<<"\nHow many "<<phone.vivo[choice-1].name<<", do you want : ";
                cin>>quanti;

                if(quanti <= 5)
                    break;
                else{
                    cout<<"\nSorry, you can not add any mobile model of any brand more than 5..\n\n";
                    continue;
                }
            }

            cart[items].quantity = quanti;
            cart[items].amount = cart[items].quantity * cart[items].price;
            items++;

            cout<<"\nItems has been Added to Cart Successfully.\n";
            cout<<"Do you want to Continue Shopping in Vivo (Press y for Continue) : ";
            cin>>&conti;

            if(conti == 'y')
                vivo1(cart, phone);
        }
    }
}

void billing(class addToCart cart[]) {
    float total=0;

    cout<<"\n*************************************************************************************************************************";
    cout<<"\n\t\t\t\t\t\t\t\tBill\t\t\t";
    cout<<"\n*************************************************************************************************************************\n";
    cout<<"\tSr.No.\t|\tItem(s)\t\t\t|\tPrice ( $ )\t\t\t|\tQuantity\t\t\t|\tAmount\t\t\t";
    cout<<"\n*************************************************************************************************************************\n";
    for(int i = 0; i < items; i++){
        if(cart[i].name.size() < 6){
            cout<<"\t"<<i+1<<"\t| "<<cart[i].name<<"\t\t\t\t|\t"<<cart[i].price<<"\t\t\t|\t"<<cart[i].quantity<<"\t\t\t|\t"<<cart[i].amount<<"\n";
        }else if(cart[i].name.size() > 14){
            cout<<"\t"<<i+1<<"\t| "<<cart[i].name<<"\t\t|\t"<<cart[i].price<<"\t\t\t|\t"<<cart[i].quantity<<"\t\t\t|\t"<<cart[i].amount<<"\n";
        }else if(cart[i].name.size() > 20){
            cout<<"\t"<<i+1<<"\t| "<<cart[i].name<<"\t|\t"<<cart[i].price<<"\t\t\t|\t"<<cart[i].quantity<<"\t\t\t|\t"<<cart[i].amount<<"\n";
        }else{
            cout<<"\t"<<i+1<<"\t| "<<cart[i].name<<"\t\t\t|\t"<<cart[i].price<<"\t\t\t|\t"<<cart[i].quantity<<"\t\t\t|\t"<<cart[i].amount<<"\n";
        }
    }
    cout<<"*************************************************************************************************************************\n";
    for(int i=0; i<=items; i++){
        total += cart[i].amount;
    }
    cout<<"Total = "<<total<<"\n";
    cout<<"*************************************************************************************************************************\n";
}