#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_TEXT 1000
#define MAX_HISTORY 100

typedef struct {
    char items[MAX_HISTORY][MAX_TEXT];
    int top;
} Stack;

void initStack(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int push(Stack *s, const char *text) {
    if (s->top >= MAX_HISTORY - 1)
        return 0;

    strcpy(s->items[++s->top], text);
    return 1;
}

int pop(Stack *s, char *text) {
    if (isEmpty(s))
        return 0;

    strcpy(text, s->items[s->top--]);
    return 1;
}

void clearStack(Stack *s) {
    s->top = -1;
}

void readLine(const char *prompt, char *buffer, size_t size) {
    int ch;
    printf("%s", prompt);

    if (fgets(buffer, size, stdin) == NULL) {
        buffer[0] = '\0';
        return;
    }

    if (strchr(buffer, '\n') != NULL) {
        buffer[strcspn(buffer, "\n")] = '\0';
    } else {
        while ((ch = getchar()) != '\n' && ch != EOF) {
        }
    }
}

void insertText(char *text, Stack *undo, Stack *redo) {
    char input[MAX_TEXT];

    readLine("Enter text to insert: ", input, sizeof(input));

    if (input[0] == '\0') {
        printf("No text entered.\n");
        return;
    }

    if (strlen(text) + strlen(input) >= MAX_TEXT) {
        printf("Document capacity exceeded.\n");
        return;
    }

    if (!push(undo, text)) {
        printf("Undo history is full.\n");
        return;
    }

    strcat(text, input);
    clearStack(redo);
    printf("Text inserted successfully.\n");
}

void deleteText(char *text, Stack *undo, Stack *redo) {
    char input[50];
    char *end;
    long n;
    size_t len = strlen(text);

    if (len == 0) {
        printf("Document is already empty.\n");
        return;
    }

    readLine("Characters to delete: ", input, sizeof(input));
    n = strtol(input, &end, 10);

    if (end == input || *end != '\0' ||
        n <= 0 || (unsigned long)n > len) {
        printf("Invalid number of characters.\n");
        return;
    }

    if (!push(undo, text)) {
        printf("Undo history is full.\n");
        return;
    }

    text[len - (size_t)n] = '\0';
    clearStack(redo);
    printf("Characters deleted successfully.\n");
}

void undoAction(char *text, Stack *undo, Stack *redo) {
    if (isEmpty(undo)) {
        printf("Nothing to undo.\n");
        return;
    }

    if (!push(redo, text)) {
        printf("Redo history is full.\n");
        return;
    }

    pop(undo, text);
    printf("Undo successful.\n");
}

void redoAction(char *text, Stack *undo, Stack *redo) {
    if (isEmpty(redo)) {
        printf("Nothing to redo.\n");
        return;
    }

    if (!push(undo, text)) {
        printf("Undo history is full.\n");
        return;
    }

    pop(redo, text);
    printf("Redo successful.\n");
}

void clearDocument(char *text, Stack *undo, Stack *redo) {
    if (text[0] == '\0') {
        printf("Document is already empty.\n");
        return;
    }

    if (!push(undo, text)) {
        printf("Undo history is full.\n");
        return;
    }

    text[0] = '\0';
    clearStack(redo);
    printf("Document cleared successfully.\n");
}

int main(void) {
    char text[MAX_TEXT] = "";
    char input[50];
    char *end;
    long choice;
    Stack undoStack, redoStack;

    initStack(&undoStack);
    initStack(&redoStack);

    printf("====================================\n");
    printf(" TEXT EDITOR WITH UNDO AND REDO\n");
    printf("       Using Stack in C\n");
    printf("====================================\n");

    while (1) {
        printf("\n========== MENU ==========\n");
        printf("1. Insert Text\n");
        printf("2. Delete Characters\n");
        printf("3. Undo\n");
        printf("4. Redo\n");
        printf("5. Display Document\n");
        printf("6. Clear Document\n");
        printf("7. Exit\n");
        printf("==========================\n");

        readLine("Enter your choice: ", input, sizeof(input));
        choice = strtol(input, &end, 10);

        if (end == input || *end != '\0') {
            printf("Invalid choice. Enter 1 to 7.\n");
            continue;
        }

        switch (choice) {
            case 1:
                insertText(text, &undoStack, &redoStack);
                break;
            case 2:
                deleteText(text, &undoStack, &redoStack);
                break;
            case 3:
                undoAction(text, &undoStack, &redoStack);
                break;
            case 4:
                redoAction(text, &undoStack, &redoStack);
                break;
            case 5:
                printf("\nCurrent Document:\n%s\n",
                       text[0] ? text : "[Empty]");
                break;
            case 6:
                clearDocument(text, &undoStack, &redoStack);
                break;
            case 7:
                printf("Thank you for using the Text Editor!\n");
                return 0;
            default:
                printf("Invalid choice. Enter 1 to 7.\n");
        }
    }
}