#include <iostream>
#include <string>
#include <fstream>

class User {
    
    public:
        std::string sName, sPassword;
        int iPriviledge;
    
    bool check_passwd(std::string sEntPass) {

        for (int i = 0; i < sEntPass.length(); i++) {
            
            if (sEntPass[i] != sPassword[i]) {
                return false;
            }

        }
        return true;
    }

};

int main(int argc, char* argv[]) {

    if (argc != 3) {
        std::cout
            << "Usage:\n"
            << std::endl
            << "    register {username} {password}"
            << std::endl;
            return 1;
    }
    else if (argc == 3) {
        User user1;
        user1.sName = argv[1];
        user1.sPassword = argv[2];
        user1.iPriviledge = 1;
    
        std::string sEntPass, sCmd, sTemp;
        bool login = false;

        while(true) {

            std::cout << "> ";
            std::cin >> sCmd;

            if (sCmd == "Quit") {
            return 0;
            }
            else if (sCmd == "Login") {
                std::cout << "What is the " << user1.sName << " password? > ";
                std::cin >> sEntPass;
                login = user1.check_passwd(sEntPass);
                if (login) {
                    std::cout << "The login was successful\n";
                }
                else {
                    std::cout << "The login wasn't successful\n";
                }
            }
            else if (sCmd == "Settings") {

                if (login) {
                    std::cout << "Hello, " << user1.sName << std::endl;

                    std::cout
                        << "|***************************************************|\n"
                        << "                    Settings\n"
                        << "|***************************************************|\n"
                        << std::endl
                        << "    1 - Change username\n"
                        << "    2 - Change password\n"
                        << "    3 - Log out\n";
                
                    std::cin.ignore();
                    std::cin >> sCmd;

                    if (sCmd == "1") {
                    
                        std::cout << "Enter username: ";
                        std::cin.ignore();
                        std::cin >> sTemp;
                        user1.sName = sTemp;
                    }
                    else if (sCmd == "2") {
                    
                        std::cout << "Enter old password: ";
                        std::cin.ignore();
                        std::cin >> sEntPass;

                        if (user1.check_passwd(sEntPass)) {
                    
                            std::cout << "Enter new password: ";
                            std::cin.ignore();
                            std::cin >> sEntPass;

                            user1.sPassword = sEntPass;
                        }
                        else {
                            std::cout << "Error in the authentification" << std::endl;
                        }                    
                    }
                    else if (sCmd == "3") {
                        login = false;
                    }

                }
                else {
                    std::cout << "You aren't logged in" << std::endl;
                }
            }
            else {
                std::cout << "Invalid command" << std::endl;
            }

        }
    }

}