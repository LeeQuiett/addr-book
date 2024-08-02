#pragma once
#define FILENAME "addr_book.dat"

// ������ ����ü ����
typedef struct {
    char name[30];
    char tel[15];
    char addr[100];
} Addr;


// �� ���� �Լ� ����
void add_addr(const char* filename, Addr* addr);

// �� ���� �Լ� ����
void print_message(char* message);

// ��Ʈ�ѷ� ���� �Լ� ����
void add_addr_controller(void);
void delete_addr_controller(void);
void search_addr_controller(void);
void print_addr_controller(void);
void exit_addr_controller(void);

//�޸𸮿� �ε�X
/*
typedef struct Node {
    Addr data;
    struct Node* next;
} Node;
Node* load_data_from_file(const char* filename);
void save_to_file(Node* head, const char* filename);
*/