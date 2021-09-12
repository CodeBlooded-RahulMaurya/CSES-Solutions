### sort a vector of pair wrt second element
```cpp
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}
 sort(v.begin(), v.end(), sortbysec);
```
------
compare forward and backward iterators
```cpp
   auto left = m.begin();
    auto right = m.crbegin();
    while (left != (right).base())
```
---------------------