#include <stdio.h>
#include <string.h>

typedef struct user_data {
    char usrname[20];
    char pwd[20];
} USER_DATA;

int check_user(char*, char*, USER_DATA*, int);

USER_DATA user_db[2] = {
    {"Pavel", "secure"},
    {"Johannes", "intelligent"}
};

int main() {
    char user_name[] = "Pavel", user_pwd[] = "secure";
    int login_attempts = 0;

    // Limit the number of login attempts to 3.
    while (login_attempts < 3) {
        if (check_user(user_name, user_pwd, user_db, 2)) {
            printf("User %s has successfully logged in\n", user_name);
            break;
        }
        else {
            printf("Invalid combination %s:%s\n", user_name, user_pwd);
            login_attempts++;
        }
    }

    // If the user has exceeded the number of login attempts, lock their account.
    if (login_attempts >= 3) {
        printf("Account locked due to too many failed login attempts.\n");
    }

    return 0;
}

int check_user(char* uname, char* pwd, USER_DATA* db, int db_size) {
    int found = 0, i;
    for (i = 0; i < db_size; i++) {
        if (!strcmp(uname, db[i].usrname) && !strcmp(pwd, db[i].pwd))
            return 1;
    }
    return 0;
}
