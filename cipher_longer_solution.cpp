
//IT IS LONGER SOLUTION FOR THE CIPHER PROJECT --DOGAN ALP AKBAS--

#include <iostream>
#include <string>
using namespace std;


int main() {
    cout<<"====================================================="<<endl;
    cout<<"Please enter your secret message to encrypted:";
    string message {};
    string encrypted_message {};
    string decrypted_message {};
    getline(cin,message);
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    for(char a:message){
        for(int i {0};i<alphabet.length();++i){
            if(a==alphabet[i]){
                a=key[i];
                encrypted_message+=a;
                break;
            }
            else if(a==' '){
                encrypted_message+=a;
                break;
            }
            else if(a<65){
                encrypted_message+=a;
                break;
            }
        }
    }


    cout<<"Your message is :"<<message<<endl;
    cout<<"\nYour encrypted message is :" <<encrypted_message<<endl;
    char selection {};
    do {
        cout << "\nDo you want to decrypted your message? Type (Y/N)...";
        cin >> selection;
        if (selection == 'Y' || selection == 'y') {
            for (char a: encrypted_message) {
                for (int i{0}; i < key.length(); ++i) {
                    if (a == key[i]) {
                        a = alphabet[i];
                        decrypted_message += a;
                        break;
                    } else if (a == ' ') {
                        decrypted_message += a;
                        break;
                    } else if (a < 65) {
                        decrypted_message += a;
                        break;
                    }

                }

            }
            cout << "===========================================" << endl;
            cout << "\nThe decrypted message is:" << decrypted_message << endl;
        }
        else if(selection=='n'||selection=='N'){
            cout<<"OK! Good bye."<<endl;
        }
    }while(selection!='N' && selection!='n');

    return 0;
}
