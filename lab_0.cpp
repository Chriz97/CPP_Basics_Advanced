#include<iostream>

/* function declarations */
void switch_case(char[]);

char non_secure_password[] = "Giovanni2023";


/* function definitions */
int main() {
    std::cout << "Password before switch_case_function: " << non_secure_password << std::endl;
    switch_case(non_secure_password);
    std::cout << "Your secure password is: " << non_secure_password << std::endl;
    return 0;
}

void switch_case(char s[]) {
    while (*s) {
        if (isupper(*s)) {
            *s = tolower(*s);
        }
        else if (islower(*s)) {
            *s = toupper(*s);
        }
        else {
            *s = *s;
        }
        s++;
    }
}
