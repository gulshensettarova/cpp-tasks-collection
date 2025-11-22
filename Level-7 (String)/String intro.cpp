/*
  ================================================
  C++ STRING MOVZUSU - TAM IZAHLI NÜMUN?L?R
  ================================================

  String - metn saxlamaq ucun istifade olunan simvollarin ardicilligidir.
  Meselen, "Salam" sozundeki her bir herf (S, a, l, a, m) bir simvoldur.

  C++-da string iki formada istifade oluna biler:
  1. C-style string (char massivleri ile)
  2. C++ string class (#include <string> ile gelen std::string tipi)

  Bu faylda std::string class-dan istifade olunacaq.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    /*
      1. STRING DEYISEN YARATMAQ
    */
    string name = "Gulshen";
    string greeting("Salam!");

    cout << "Name: " << name << endl;
    cout << "Greeting: " << greeting << endl;


    /*
      2. STRINGLERI BIRLESDIRMEK (CONCATENATION)
    */
    string message = "Salam, " + name + "!";
    cout << message << endl;


    /*
      3. STRINGIN UZUNLUGU (length / size)
    */
    string word = "Programming";
    cout << "Uzunluq: " << word.length() << endl;
    cout << "Uzunluq (size): " << word.size() << endl;


    /*
      4. STRING ELEMENTLERINE INDEX ILE MURACIET ETMEK
    */
    string text = "Code";
    cout << "Birinci herf: " << text[0] << endl;
    cout << "Sonuncu herf: " << text[3] << endl;


    /*
      5. STRING DEYERINI DEYISMEK
    */
    string lang = "Java";
    lang[0] = 'K'; // J -> K
    cout << "Yeni versiya: " << lang << endl;


    /*
      6. ISTIFADECIDEN STRING ALMAQ
      Qeyd: cin sadece bir soz oxuyur, getline ise tam setri.
    */
    string user;
    cout << "Adinizi daxil edin: ";
    cin >> user;
    cout << "Salam, " << user << "!" << endl;

    cin.ignore(); // getline-dan evvel buffer-i temizleyir
    string fullname;
    cout << "Tam adinizi daxil edin: ";
    getline(cin, fullname);
    cout << "Salam, " << fullname << "!" << endl;


    /*
      7. STRING MUQAYISESI
    */
    string a = "Hello";
    string b = "World";

    if (a == b)
        cout << "Stringler beraberdir" << endl;
    else
        cout << "Stringler ferqlidir" << endl;


    /*
      8. EN COX ISTIFADE OLUNAN STRING METODLARI
    */
    string text2 = "Programming Language";

    cout << "Uzunluq: " << text2.length() << endl;
    cout << "Bosdur mu? " << text2.empty() << endl;
    cout << "Hisse (substr 0-3): " << text2.substr(0, 3) << endl;
    cout << "Simvol 'a'-nin yeri: " << text2.find('a') << endl;

    text2.append(" C++");
    cout << "Append neticesi: " << text2 << endl;

    text2.erase(0, 6);
    cout << "Erase neticesi: " << text2 << endl;

    text2.replace(0, 11, "NewLang");
    cout << "Replace neticesi: " << text2 << endl;


    /*
      9. STRING VE LOOP
    */
    string word2 = "Hello";
    cout << "Simvollarin sira ile cap edilmesi:" << endl;
    for (int i = 0; i < word2.length(); i++) {
        cout << word2[i] << " ";
    }
    cout << endl;


    /*
      10. STRING + INTEGER (to_string)
    */
    int age = 25;
    string info = "Menim yasim " + to_string(age) + " dir.";
    cout << info << endl;


    /*
      11. STRING ICINDE DEYISMEK (replace)
    */
    string text3 = "Men Java oyrenirem";
    text3.replace(4, 4, "C++");
    cout << text3 << endl;


    /*
      12. STRINGI TERSINE CAP ETMEK
    */
    string rev = "C++";
    cout << "Ters versiya: ";
    for (int i = rev.length() - 1; i >= 0; i--) {
        cout << rev[i];
    }
    cout << endl;


    /*
      13. MINI PRAKTIK NÜMUNE
    */
    string username, password;
    cout << "\n===== BANK SISTEMINE GIRIS =====" << endl;
    cout << "Istifadeci adi: ";
    cin >> username;
    cout << "Parol: ";
    cin >> password;

    if (username == "Gulshen" && password == "12345") {
        cout << "Xosh geldiniz, " << username << "!" << endl;
    } else {
        cout << "Giris xetasi!" << endl;
    }

    return 0;
}

/*
  ================================================
  QISA XULASE:

  string - simvollar ardicilligi (metn tipi)
  +  -> stringleri birlesdirir
  [] -> herf secmek ucun
  length() -> uzunlugu qaytarir
  empty() -> bosh olub-olmadigini yoxlayir
  append(), substr(), find(), replace(), erase() -> emeliyyatlar ucun
  getline() -> tam setri oxuyur
  ==, != -> muqayise
  to_string() -> reqemi stringe cevirir


*/
