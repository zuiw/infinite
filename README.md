# 这是一个用C++写的infinite类

## 1. 创建一个infinite类

```c++
#include "infinite.h"

int main() {
    infinite inf;

    cout << inf << ' ' << (inf > 1000000 ? "true" : "false"); // 输出 "infinite" true
    return 0;
}
```

## 2. 重载运算符

```c++
#include "infinite.h"

int main() {
    infinite inf;

    cout << inf + 1 << ' ' << inf - 1 << ' ' << inf * 1 << ' ' << inf / 1 << ' ' << inf % 1 << endl; // 输出 "infinite" "infinite" "infinite" "infinite" "infinite"
    return 0;
}
```