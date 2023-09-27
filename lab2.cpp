#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    
    // Конструктор с параметром данных
    ListNode(int x) : val(x), next(nullptr) {}
    // Конструктор с параметром данных и указателем на следующий элемент списка
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};


class MyLinkedList {
public:
    MyLinkedList() : head(nullptr), size(0) {} 
	size_t get_size() { return size; }	// Получить размер списка
	void add_at_tail(int val);	// Добавить элемент в конец списка
	void add_at_index(size_t index, int val); // Добавить элемент по индексу
	void delete_at_index(size_t index);	// Удалить элемент по индексу
	void add_at_head(int val); // Добавить элемент в начало списка
    void print(); // Вывести значения элементов списка через пробел
    void reverse(); // Инвертировать порядок элементов в списке

private:
	ListNode* head;
	size_t size;
};

void MyLinkedList::add_at_head(int val) {
    ListNode* newNode = new ListNode(val);
    newNode->next = head;
    head = newNode;
    ++size;
}

void MyLinkedList::add_at_tail(int val) {
	// Создать новый экземляр ListNode или новый элемент списка
	ListNode* newNode = new ListNode(val, nullptr);

	if (head == nullptr) {
		head = newNode;
		return;
	}
	// Двигаем указатель it до достижения последнего элемента списка
	ListNode* it = head;
	while (it->next != nullptr)
		it = it->next;
	
	// Присваиеваем указателю на следующий элемент (next) текущего последнего элемента
	// адрес нового последнего элемента
	it->next = newNode;

	++size;
}
    
void MyLinkedList::delete_at_index(size_t index) {
	if (index >= size + 1) {
		cout << "Index is larger than the size=" << size << "\n";
		return;
	}
	
	ListNode* prev = head;

	if (index == 0) {
		head = head->next;
		delete prev;
	}
	
	ListNode* curr = head->next;
	size_t pos = 0;
	
	while (prev != nullptr && pos < index - 1) {
		prev = prev->next;
		curr = curr->next;
		++pos;
	}
	prev->next = curr->next;
	delete curr;

	--size;
}

void MyLinkedList::add_at_index(size_t index, int val) {
	ListNode* prev = head;
	ListNode* curr = head->next;
	size_t pos = 0;
	
	while (prev != nullptr && pos < index - 1) {
		prev = prev->next;
		curr = curr->next;
		++pos;
	}
	ListNode* newNode = new ListNode(val, curr);
	prev->next = newNode;

	++size;
}

void MyLinkedList::print() {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

void MyLinkedList::reverse() {
    ListNode* prev = nullptr;
    ListNode* current = head;
    ListNode* next = nullptr;

    while (current != nullptr) {
        next = current->next;  // Сохраняем указатель на следующий элемент
        current->next = prev;  // Изменяем указатель на следующий элемент на предыдущий
        prev = current;        // Перемещаем prev на текущий элемент
        current = next;        // Перемещаем current на следующий элемент
    }

    // Обновляем head, чтобы он указывал на новый начальный элемент
    head = prev;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    MyLinkedList* obj = new MyLinkedList();
    for (int val : arr) {
        obj->add_at_tail(val);
    }

    cout << "Original list: ";
    obj->print();

    cout << "Reversing the list...\n";
    obj->reverse();

    cout << "Reversed list: ";
    obj->print();

    cout << "Adding at head\n";
    obj->add_at_head(0);

    cout << "Updated list: ";
    obj->print();

    return 0;
}