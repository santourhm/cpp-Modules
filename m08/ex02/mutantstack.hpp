#ifndef MUTANTSTACK_HPP 
#define MUTANTSTACK_HPP

#include <deque>   
#include <stack>   
#include <iterator> 

template <typename T, typename Container = std::deque<T>> 
class mutantstack {
    private:

        Container c; 
        
    public:

    class iterator_impl {
        
            public:
                using iterator_category = std::bidirectional_iterator_tag;
                using value_type        = T;
                using difference_type   = std::ptrdiff_t;
                using pointer           = T*;
                using reference         = T&;
                
            private:
                typename std::deque<T>::iterator m_it;

            public:
                iterator_impl(typename std::deque<T>::iterator it) : m_it(it) {}

                reference operator*() const { return *m_it; }
                pointer   operator->() const { return &(*m_it); }

                iterator_impl& operator++() { ++m_it; return *this; }
                iterator_impl& operator--() { --m_it; return *this; }

                bool operator==(const iterator_impl& other) const { return m_it == other.m_it; }
                bool operator!=(const iterator_impl& other) const { return m_it != other.m_it; }
            };


        class const_iterator_impl {
            public:

                using iterator_category = std::bidirectional_iterator_tag;
                using value_type        = const T; 
                using difference_type   = std::ptrdiff_t;
                using pointer           = const T*; 
                using reference         = const T&; 

            private:
                typename std::deque<T>::const_iterator m_it;

            public:
                const_iterator_impl(typename std::deque<T>::const_iterator it) : m_it(it) {}

                reference operator*() const { return *m_it; }
                pointer   operator->() const { return &(*m_it); }

                const_iterator_impl& operator++() { ++m_it; return *this; }
                const_iterator_impl& operator--() { --m_it; return *this; }

                bool operator==(const const_iterator_impl& other) const { return m_it == other.m_it; }
                bool operator!=(const const_iterator_impl& other) const { return m_it != other.m_it; }
        };

        using iterator = iterator_impl;
        using const_iterator = const_iterator_impl;

        iterator begin() { return iterator(c.begin()); }
        iterator end() { return iterator(c.end()); }

        const_iterator begin() const { return const_iterator(c.cbegin()); }
        const_iterator end() const { return const_iterator(c.cend()); }
    
        mutantstack() : c() {}
        ~mutantstack() {}
        mutantstack(const mutantstack& ms) : c(ms.c) {}

        operator Container() const { return c; }
       
        void pop(void) { c.pop_back(); }
        void push(const T& v) { c.push_back(v); }
        bool empty() const { return c.empty(); }
        size_t size() const { return c.size(); }
        T& top() { return c.back(); }
        const T& top() const { return c.back(); }
        void swap(mutantstack& m) noexcept { c.swap(m.c); }
        
        template<typename... Args>
        void emplace(Args&&... args) { c.emplace_back(std::forward<Args>(args)...); }

};

#endif