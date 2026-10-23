//This contains all the code of the project

//Jannati's code


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


//Elma's code
