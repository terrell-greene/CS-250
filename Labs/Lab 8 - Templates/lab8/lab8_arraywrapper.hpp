#ifndef _ARRAY_WRAPPER
#define _ARRAY_WRAPPER

const int MAX_SIZE = 10;

template <typename T>
class ArrayWrapper {
    T m_data[10];
    int m_itemCount;
    
public:
    ArrayWrapper() : m_itemCount(0) {
    }
    
    void Push(T data){
        if (m_itemCount < MAX_SIZE) {
            m_data[m_itemCount] = data;
            m_itemCount++;
        }
    }
    
    void Display(){
        for (int i = 0; i < m_itemCount; i++) {
            cout << "'" << m_data[i] << "'" << " ";
        }
    }
};

#endif
