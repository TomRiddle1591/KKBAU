#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100
#define FILE_NAME "contacts.txt"

typedef struct {
    int id;
    char name[50];
    char phone[20];
    char email[50];
} Contact;

Contact contacts[MAX_CONTACTS];
int totalContacts = 0;

/* Function declarations */
void addContact();
void viewAllContacts();
void deleteContact();
void saveContactsToFile();
void loadContactsFromFile();
void clearInputBuffer();
int generateNextId();

int main() {
    int choice;

    loadContactsFromFile();

    while (1) {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Delete Contact\n");
        printf("4. Save Contacts\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clearInputBuffer();

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                viewAllContacts();
                break;
            case 3:
                deleteContact();
                break;
            case 4:
                saveContactsToFile();
                printf("Contacts saved successfully.\n");
                break;
            case 5:
                saveContactsToFile();
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

void clearInputBuffer() {
    while (getchar() != '\n');
}

int generateNextId() {
    int maxId = 0;
    int i;

    for (i = 0; i < totalContacts; i++) {
        if (contacts[i].id > maxId) {
            maxId = contacts[i].id;
        }
    }

    return maxId + 1;
}

void addContact() {
    if (totalContacts >= MAX_CONTACTS) {
        printf("Contact list is full.\n");
        return;
    }

    contacts[totalContacts].id = generateNextId();

    printf("Enter name: ");
    fgets(contacts[totalContacts].name, sizeof(contacts[totalContacts].name), stdin);
    contacts[totalContacts].name[strcspn(contacts[totalContacts].name, "\n")] = '\0';

    printf("Enter phone: ");
    fgets(contacts[totalContacts].phone, sizeof(contacts[totalContacts].phone), stdin);
    contacts[totalContacts].phone[strcspn(contacts[totalContacts].phone, "\n")] = '\0';

    printf("Enter email: ");
    fgets(contacts[totalContacts].email, sizeof(contacts[totalContacts].email), stdin);
    contacts[totalContacts].email[strcspn(contacts[totalContacts].email, "\n")] = '\0';

    totalContacts++;

    printf("Contact added successfully.\n");
}

void viewAllContacts() {
    int i;

    if (totalContacts == 0) {
        printf("No contacts found.\n");
        return;
    }

    printf("\n===== All Contacts =====\n");
    for (i = 0; i < totalContacts; i++) {
        printf("ID    : %d\n", contacts[i].id);
        printf("Name  : %s\n", contacts[i].name);
        printf("Phone : %s\n", contacts[i].phone);
        printf("Email : %s\n", contacts[i].email);
        printf("-------------------------\n");
    }
}

void deleteContact() {
    int id, i, index = -1;

    if (totalContacts == 0) {
        printf("No contacts to delete.\n");
        return;
    }

    printf("Enter contact ID to delete: ");
    scanf("%d", &id);
    clearInputBuffer();

    for (i = 0; i < totalContacts; i++) {
        if (contacts[i].id == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Contact not found.\n");
        return;
    }

    for (i = index; i < totalContacts - 1; i++) {
        contacts[i] = contacts[i + 1];
    }

    totalContacts--;

    printf("Contact deleted successfully.\n");
}

void saveContactsToFile() {
    FILE *file;
    int i;

    file = fopen(FILE_NAME, "w");
    if (file == NULL) {
        printf("File could not be opened.\n");
        return;
    }

    for (i = 0; i < totalContacts; i++) {
        fprintf(file, "%d|%s|%s|%s\n",
                contacts[i].id,
                contacts[i].name,
                contacts[i].phone,
                contacts[i].email);
    }

    fclose(file);
}

void loadContactsFromFile() {
    FILE *file;

    file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        return;
    }

    while (fscanf(file, "%d|%49[^|]|%19[^|]|%49[^\n]\n",
                  &contacts[totalContacts].id,
                  contacts[totalContacts].name,
                  contacts[totalContacts].phone,
                  contacts[totalContacts].email) == 4) {
        totalContacts++;
    }

    fclose(file);
}