//  Copyright [2022] <Copyright JangJinYoung>
#ifndef CNU_CSE_OOD_OOD13_SORT_H_
#define CNU_CSE_OOD_OOD13_SORT_H_

template < class T>
void Sort(typename T::iterator begin, typename T::iterator end) {
    for (auto i = begin; i != end; i++) {
        for (auto j = begin; j != end; j++) {
            if (*i < *j) {
                int temp = *i;
                *i = *j;
                *j = temp;
                continue;
            } else {
            }
        }
    }
}

#endif  //  CNU_CSE_OOD_OOD13_SORT_H_
