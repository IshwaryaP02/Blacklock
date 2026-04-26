#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ANSI color codes (Dark UI)
#define RESET   "\033[0m"
#define CYAN    "\033[1;36m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define RED     "\033[1;31m"
#define BLUE    "\033[1;34m"

#define MAX 100

void plaintext_storage();
void encrypt_file();
void decrypt_file();
void header();

int main() {
    int choice;

    while (1) {
        header();
        printf(YELLOW " 1. Plaintext Storage\n");
        printf(" 2. Encrypt File\n");
        printf(" 3. Decrypt File\n");
        printf(" 4. Exit\n" RESET);
        printf(BLUE "\n Enter your choice: " RESET);
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                plaintext_storage();
                break;
            case 2:
                encrypt_file();
                break;
            case 3:
                decrypt_file();
                break;
            case 4:
                printf(GREEN "\n Thank you! Exiting...\n" RESET);
                exit(0);
            default:
                printf(RED "\n Invalid choice! Try again.\n" RESET);
        }
    }
    return 0;
}

// Header UI
void header() {
    system("cls || clear");  // Windows / Linux
    printf(CYAN);
    printf(" ===============================================\n");
    printf("   FILE ENCRYPTION & DECRYPTION SECURITY TOOL\n");
    printf(" ===============================================\n");
    printf(RESET);
}

// Module 1: Plaintext Storage
void plaintext_storage() {
    FILE *fp;
    char filename[MAX], data[MAX];

    printf(BLUE "\n Enter filename: " RESET);
    scanf("%s", filename);

    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf(RED " Error opening file!\n" RESET);
        return;
    }

    printf(BLUE " Enter data (no spaces): " RESET);
    scanf("%s", data);

    fprintf(fp, "%s", data);
    fclose(fp);

    printf(GREEN "\n Plaintext file stored successfully!\n" RESET);
    printf(YELLOW " WARNING: Data is readable and insecure.\n" RESET);
    getchar(); getchar();
}

// Module 2: Encryption
void encrypt_file() {
    FILE *in, *out;
    char infile[MAX], outfile[MAX], key[MAX];
    char ch;
    int i = 0;

    printf(BLUE "\n Enter input filename: " RESET);
    scanf("%s", infile);

    printf(BLUE " Enter encrypted output filename: " RESET);
    scanf("%s", outfile);

    printf(BLUE " Enter password key: " RESET);
    scanf("%s", key);

    in = fopen(infile, "r");
    out = fopen(outfile, "w");

    if (in == NULL || out == NULL) {
        printf(RED " File error!\n" RESET);
        return;
    }

    while ((ch = fgetc(in)) != EOF) {
        fputc(ch ^ key[i % strlen(key)], out);
        i++;
    }

    fclose(in);
    fclose(out);

    printf(GREEN "\n File encrypted successfully!\n" RESET);
    printf(YELLOW " Encrypted file is unreadable without key.\n" RESET);
    getchar(); getchar();
}

// Module 3: Decryption
void decrypt_file() {
    FILE *in, *out;
    char infile[MAX], outfile[MAX], key[MAX];
    char ch;
    int i = 0;

    printf(BLUE "\n Enter encrypted filename: " RESET);
    scanf("%s", infile);

    printf(BLUE " Enter decrypted output filename: " RESET);
    scanf("%s", outfile);

    printf(BLUE " Enter password key: " RESET);
    scanf("%s", key);

    in = fopen(infile, "r");
    out = fopen(outfile, "w");

    if (in == NULL || out == NULL) {
        printf(RED " File error!\n" RESET);
        return;
    }

    while ((ch = fgetc(in)) != EOF) {
        fputc(ch ^ key[i % strlen(key)], out);
        i++;
    }

    fclose(in);
    fclose(out);

    printf(GREEN "\n File decrypted successfully!\n" RESET);
    printf(YELLOW " Original data restored.\n" RESET);
    getchar(); getchar();
}
