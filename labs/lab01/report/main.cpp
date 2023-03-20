#include <iostream>
using namespace std;


struct technique{
    string name;
    float price;
    float diagonal;
    float MHz_processor;
    int amount;
    technique *next; //ссылка на следующий элемент
};

void addfirst(technique *&shop, string nm, float pr, float diag, float mhz, int am) {
    technique *new_tech;
    new_tech = new technique;
    new_tech->name = nm;
    new_tech->price = pr;
    new_tech->diagonal = diag;
    new_tech->MHz_processor = mhz;
    new_tech->amount = am;
    new_tech->next = shop;
    shop = new_tech;
}

void addlast(technique *&shop, string nm, float pr, float diag, float mhz, int am){
    technique *tmp = shop;  // tmp - это вспомогательный указатель на голове списка.
    if (shop == nullptr){
        addfirst(shop, nm, pr, diag, mhz, am);
    } while (tmp->next != nullptr){ // в цикле while просходит поиск последнего элемента
        tmp = tmp->next; // переход к следующему узлу
    }
    technique *new_tech;
    new_tech = new technique;
    new_tech->name = nm;
    new_tech->price = pr;
    new_tech->diagonal = diag;
    new_tech->MHz_processor = mhz;
    new_tech->amount = am;
    new_tech->next = nullptr; // после того, как найден последний элемент
    tmp->next = new_tech; // добавление узла после узла tmp
}

void addafter(technique *&shop, string nm, float pr, float diag, float mhz, int am, string name_after){
    if (shop == nullptr){
        cout << "This list is empty";
    }
    technique *tmp = shop;
    while (tmp != nullptr && tmp->name != name_after){
        tmp = tmp->next;
    }
    if (tmp == nullptr){
        cout << "This list is empty";
    }
    technique *new_tech;
    new_tech = new technique;
    new_tech->name = nm;
    new_tech->price = pr;
    new_tech->diagonal = diag;
    new_tech->MHz_processor = mhz;
    new_tech->amount = am;
    new_tech->next = tmp->next;
    tmp->next = new_tech;
}

void addbefore(technique *&shop, string nm, float pr, float diag, float mhz, int am, string name_before) {
    if (shop == nullptr){
        cout << "This list is empty\n";
    }
    if (shop->name == name_before){
        addfirst(shop,nm,pr,diag,mhz,am);
        return;
    }
    technique *tmp = shop->next;
    technique *prev = shop;
    while (tmp->next != nullptr && tmp->name != name_before){
        prev = prev->next; tmp = tmp->next;
    } if (tmp->next == nullptr && tmp->name != name_before){
        cout << "Element not found in list\n";
    }
    technique *new_tech;
    new_tech = new technique;
    new_tech->name = nm;
    new_tech->price = pr;
    new_tech->diagonal = diag;
    new_tech->MHz_processor = mhz;
    new_tech->amount = am;
    new_tech->next = tmp;
    prev->next = new_tech;
}

void del (technique *&shop, string del_name){
    technique *tmp = shop;
    if (shop->name == del_name){
        shop = shop->next; delete tmp;
    }
    if (shop->next == nullptr){
        cout << "This list is empty";
    }
    technique *prev = shop;
    tmp = shop->next;
    while (tmp->next != nullptr && tmp->name != del_name){
        prev = prev->next; tmp = tmp->next;
    }
    if (tmp->next == nullptr && tmp->name != del_name){
        cout << "Element not found in list";
    }
    prev->next = tmp->next;
    delete tmp;
    return;
}

void printlist(technique *shop){
    if (shop == nullptr){
        cout << "This list is empty";
    }

    technique *tmp = shop;
    while(tmp != nullptr){
        cout << "\nName product: " << tmp->name << "\nPrice product: " << tmp->price
        << "\nDiagonal product: " << tmp->diagonal << "\nMHz_processor: " << tmp->MHz_processor
        << "\nAmount product: " << tmp->amount << endl;
        tmp = tmp->next;
    }
}

void pass(){
    cout << "\n-------------------";
}

    technique *shop = nullptr;

    string name1 = "Laptop";
    float price1 = 3214.244;
    float diagonal1 = 15.6;
    float MHz_processor1 = 3.8;
    int amount1 = 1321;

    string name2 = "Monoblock";
    float price2 = 3800.244;
    float diagonal2 = 15.6;
    float MHz_processor2 = 4.2;
    int amount2 = 901;

    string name3 = "Iphone";
    float price3 = 140242;
    float diagonal3 = 5.9;
    float MHz_processor3 =3.7;
    int amount3 = 1024;

    string name4 = "Samsung";
    float price4 = 90000;
    float diagonal4 = 6;
    float MHz_processor4 = 3.4;
    int amount4 = 10204;
int main(){

    printlist(shop);
    pass();

    addfirst(shop, name1, price1, diagonal1, MHz_processor1, amount1);
    printlist(shop);
    pass();

    addlast(shop, name2, price2, diagonal2, MHz_processor2, amount2);
    printlist(shop);
    pass();

    addafter(shop, name3, price3, diagonal3, MHz_processor3, amount3, "Laptop");
    printlist(shop);
    pass();

    addbefore(shop, name4, price4, diagonal4, MHz_processor4, amount4, "Iphone");
    printlist(shop);
    pass();

    del(shop, "Samsung");
    printlist(shop);
    pass();
}
