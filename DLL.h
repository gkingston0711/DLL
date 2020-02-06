
class node
{
    public:
    node();
    node(int value);
    ~node();
    int get_data();
    void set_data(int value);
    void link_next(node * connection);
    void link_prev(node * connection);
    node * go_next();
    node * go_prev();
    private:
        node *next;
        node *prev;
        int data;

};

class DLL
{

    public:
        DLL();
        ~DLL();
        void add_node(int value);
        void display(node *head);//needed for wrapper
        void display();
        void remove(node *head,int value);//needed for wrapper
        void remove(int value);

    private:
        node *head;
};
