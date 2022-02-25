class DynamicArray {
    private:
        int arr[0];
        int len;
        int capacity;
    public:
        DynamicArray(int capacity);
        DynamicArray();
        int size();
        bool isEmpty();
};