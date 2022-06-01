#include <iostream>
using namespace std;

class Node{
    public:
    int members;

    Node *next;
};
Node *sectionA;
Node *sectionB;
Node *storage;
Node *peekA;
Node *peekB;

void addSection(Node **headref, int x){
    Node *newnode = new Node;
    Node *last = *headref;
    newnode->members = x;
    newnode->next = NULL;

    if (*headref == NULL){
        *headref = newnode;
        return;
    }
    while (last->next != NULL){
        last = last->next;
    }
    last->next = newnode;
    return;
}

void sections(Node *headref){
    while (headref != NULL){
        cout << headref->members << " ";
        headref = headref->next;
    }
    printf("\n");
}

void intersection(){
    Node *cloneA = sectionA;
    Node *cloneB = sectionB;


    while(cloneB != NULL){
        if(cloneA == NULL){
            cloneA = sectionA;
            if(cloneB->next != NULL){
                cloneB = cloneB->next;
            }
            else{
                while(storage != NULL){
                    cout << storage->members << " ";
                    storage = storage->next;
                }
                return;
            }
        }
        if(cloneB->members == cloneA->members){
            addSection(&storage, cloneB->members);
            cloneA = cloneA->next;
        }
        else{
            cloneA = cloneA->next;
        }
    }   
}

void setUnion(){
    Node *cloneA = sectionA;
    Node *cloneB = sectionB;

    while(cloneB != NULL){
        if(cloneA == NULL){
            while(cloneB != NULL){
                addSection(&storage, cloneB->members);
                cloneB = cloneB->next;
            }

            if(cloneB == NULL){
                while(storage != NULL){
                    cout << storage->members << " ";
                    storage = storage->next;
                }
                return;
            }
        }

        if(cloneB == NULL){
            while(cloneA != NULL){
                addSection(&storage, cloneA->members);
                cloneA = cloneA->next;
            }

            if (cloneA == NULL){
                while(storage != NULL){
                    cout << storage->members << " ";
                    storage = storage->next;
                }
                return;
            }
        }

        if(cloneB->members != cloneA->members){
            addSection(&storage, cloneA->members);
            cloneA = cloneA->next;
        }
        else{
            addSection(&storage, cloneA->members);
            cloneA = cloneA->next;
            cloneB = cloneB->next;
        }
    }
        
}


void menu(){

    printf("1. Insert data A\n2. Insert data B\n3. Intersection output\n4. Union output\n\n");
    int input;
    cin >> input;

    if(input == 1){
        int x;
        printf("Input number for section A : ");
        cin >> x;
        addSection(&sectionA, x);
        addSection(&peekA, x);
        
        
        system("clear");
        printf("Input data to A successful\n\n");
        
        printf("Section A : ");
        sections(peekA);

        printf("\n");

        printf("Section B : ");
        sections(peekB);

        printf("\n\n");

        menu();
    }

    if(input == 2){
        int x;
        printf("Input number for section B : ");
        cin >> x;
        addSection(&sectionB, x);
        addSection(&peekB, x);
        system("clear");
        printf("Input data to B successful\n\n");

        printf("Section A : ");
        sections(peekA);

        printf("\n");

        printf("Section B : ");
        sections(peekB);

        printf("\n\n");

        menu();
    }

    if (input == 3){
        system("clear");
        printf("Intersection : ");
        intersection();

        printf("\n\n");

        printf("Section A : ");
        sections(peekA);

        printf("\n");

        printf("Section B : ");
        sections(peekB);

        printf("\n\n");
        menu();

    }

    if (input == 4){
        system("clear");
        printf("Union : ");
        setUnion();

        printf("\n\n");

        printf("Section A : ");
        sections(peekA);

        printf("\n");

        printf("Section B : ");
        sections(peekB);

        printf("\n\n");
        menu();
    }
}


int main(){
    system("clear");
    menu();
}