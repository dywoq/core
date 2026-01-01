## Synopsis

```c++
namespace dywoq::cxx::core::type_traits {
  template <typename T, bool Satisfied> struct satisfied;
}
```

## Symbols
### `satisfied`
- _Declaration_: 
```c++
  template <typename _Tp, bool _Satisfied> struct satisfied {
    using type = _Tp;
    inline static constexpr auto yes = _Satisfied;

    satisfied(const satisfied &) = delete;
    satisfied(satisfied &&) = delete;
  };
```
- _Description_: A compile-time base class for type traits, which provides single yes/no condition, telling whether type trait is satisfied or not.
