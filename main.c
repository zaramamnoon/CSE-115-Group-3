//This contains all the code of the project

//Jannati's code
void clear_screen(){
    system("cls");
}
int read_int() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    getchar(); 
    return n;
}
void pause_screen(){
    char ch;
    printf("\nPress Enter to go back");
    ch = getchar();
}

//Zara's code - LOGIN
void save_password(const char *pass) {  //password is declared as a constant
    char buf[PASS_LEN];   //buff is a buffer to store the password temporarily
    FILE *fp;  //file pointer
    memset(buf, 0, sizeof(buf));  //setting buffer to all zeros
    strncpy(buf, pass, PASS_LEN - 1);
    encrypt_decrypt(buf);  //encryption and decryption together as XOR encryption is used
    fp = fopen(PASS_FILE, "wb");
    if (fp == NULL) {  //points to null
        printf("Password file could not be written!\n");
        return;
    }
    fwrite(buf, sizeof(buf), 1, fp);
    fclose(fp);
} //modules to load, change password etc is yet remaining to be written


//Juthi's code


//Sanjida's code


//Elma's code - main()
int main() {
    int choice;

    if (!login()) {
        printf("\nThe password has been entered incorrectly too many times. Program closed.\n");
        return 1;
    }
    pause_screen();

    while (1) {
        clear_screen();
        printf("=========== MY DIARY ===========\n");
        printf("1. Add Entry\n");
        printf("2. View All Entries\n");
        printf("3. Search Entry\n");
        printf("4. Edit Entry\n");
        printf("5. Delete Entry\n");
        printf("6. Change Password\n");
        printf("0. Exit\n");
        printf("================================\n");
        printf("Choice: ");
        choice = read_int();
        printf("\n");

        switch (choice) {
            case 1: add_entry();       break;
            case 2: view_entries();    break;
            case 3: search_entries();  break;
            case 4: edit_entry();      break;
            case 5: delete_entry();    break;
            case 6: change_password(); break;
            case 0:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
        pause_screen();
    }
}
