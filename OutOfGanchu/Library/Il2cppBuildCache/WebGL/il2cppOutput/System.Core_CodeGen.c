#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String SR::Format(System.String,System.Object)
extern void SR_Format_m7A21873FD59FBF9CD36B4F733BB49D1F470F8829 (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000003 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000004 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000005 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000006 System.Exception System.Linq.Error::NotSupported()
extern void Error_NotSupported_m51A0560ABF374B66CF6D1208DAF27C4CBAD9AABA (void);
// 0x00000007 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000009 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x0000000A System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<TKey,TSource>> System.Linq.Enumerable::GroupBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ConcatIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Except(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ExceptIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ReverseIterator(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000019 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x0000001C System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000001D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x0000001E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x0000001F TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000020 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000021 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000022 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000023 TSource System.Linq.Enumerable::LastOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000024 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000026 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000027 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000028 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000029 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000002A System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x0000002B System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
// 0x0000002C System.Int32 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Max_mE02EED2C10C2F8F0B2DCE468C87EF3064E854A8D (void);
// 0x0000002D System.Int32 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
// 0x0000002E System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002F TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000030 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000031 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000032 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000033 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000034 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000035 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000037 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000038 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000039 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000003B System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000003C System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003F System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000040 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000041 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000042 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000043 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000044 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000045 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000046 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000047 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000048 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000049 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000004B System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000004C System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000004D System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004F System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000050 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000051 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000052 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000053 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000054 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000055 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000056 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000057 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000058 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000059 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000005A System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000005B System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000005C TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000005D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005F System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000060 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000061 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000062 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000063 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000064 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000065 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000066 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000067 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::.ctor(System.Int32)
// 0x00000068 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::System.IDisposable.Dispose()
// 0x00000069 System.Boolean System.Linq.Enumerable/<ConcatIterator>d__59`1::MoveNext()
// 0x0000006A System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::<>m__Finally1()
// 0x0000006B System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::<>m__Finally2()
// 0x0000006C TSource System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006D System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerator.Reset()
// 0x0000006E System.Object System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerator.get_Current()
// 0x0000006F System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000070 System.Collections.IEnumerator System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000071 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000072 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000073 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000074 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000075 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000076 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000077 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000078 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000079 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007A System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::.ctor(System.Int32)
// 0x0000007B System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.IDisposable.Dispose()
// 0x0000007C System.Boolean System.Linq.Enumerable/<ExceptIterator>d__77`1::MoveNext()
// 0x0000007D System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::<>m__Finally1()
// 0x0000007E TSource System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000007F System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.Reset()
// 0x00000080 System.Object System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.get_Current()
// 0x00000081 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000082 System.Collections.IEnumerator System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000083 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::.ctor(System.Int32)
// 0x00000084 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::System.IDisposable.Dispose()
// 0x00000085 System.Boolean System.Linq.Enumerable/<ReverseIterator>d__79`1::MoveNext()
// 0x00000086 TSource System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000087 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerator.Reset()
// 0x00000088 System.Object System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerator.get_Current()
// 0x00000089 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000008A System.Collections.IEnumerator System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008B System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x0000008C System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x0000008D System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x0000008E System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x0000008F TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000090 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x00000091 System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x00000092 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000093 System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000094 System.Func`2<TElement,TElement> System.Linq.IdentityFunction`1::get_Instance()
// 0x00000095 System.Void System.Linq.IdentityFunction`1/<>c::.cctor()
// 0x00000096 System.Void System.Linq.IdentityFunction`1/<>c::.ctor()
// 0x00000097 TElement System.Linq.IdentityFunction`1/<>c::<get_Instance>b__1_0(TElement)
// 0x00000098 TKey System.Linq.IGrouping`2::get_Key()
// 0x00000099 System.Linq.Lookup`2<TKey,TElement> System.Linq.Lookup`2::Create(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000009A System.Void System.Linq.Lookup`2::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000009B System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.Lookup`2::GetEnumerator()
// 0x0000009C System.Collections.IEnumerator System.Linq.Lookup`2::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009D System.Int32 System.Linq.Lookup`2::InternalGetHashCode(TKey)
// 0x0000009E System.Linq.Lookup`2/Grouping<TKey,TElement> System.Linq.Lookup`2::GetGrouping(TKey,System.Boolean)
// 0x0000009F System.Void System.Linq.Lookup`2::Resize()
// 0x000000A0 System.Void System.Linq.Lookup`2/Grouping::Add(TElement)
// 0x000000A1 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.Lookup`2/Grouping::GetEnumerator()
// 0x000000A2 System.Collections.IEnumerator System.Linq.Lookup`2/Grouping::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A3 TKey System.Linq.Lookup`2/Grouping::get_Key()
// 0x000000A4 System.Int32 System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.get_Count()
// 0x000000A5 System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.get_IsReadOnly()
// 0x000000A6 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Add(TElement)
// 0x000000A7 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Clear()
// 0x000000A8 System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Contains(TElement)
// 0x000000A9 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.CopyTo(TElement[],System.Int32)
// 0x000000AA System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Remove(TElement)
// 0x000000AB System.Int32 System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.IndexOf(TElement)
// 0x000000AC System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.Insert(System.Int32,TElement)
// 0x000000AD System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.RemoveAt(System.Int32)
// 0x000000AE TElement System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.get_Item(System.Int32)
// 0x000000AF System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.set_Item(System.Int32,TElement)
// 0x000000B0 System.Void System.Linq.Lookup`2/Grouping::.ctor()
// 0x000000B1 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::.ctor(System.Int32)
// 0x000000B2 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.IDisposable.Dispose()
// 0x000000B3 System.Boolean System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::MoveNext()
// 0x000000B4 TElement System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000B5 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.IEnumerator.Reset()
// 0x000000B6 System.Object System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.IEnumerator.get_Current()
// 0x000000B7 System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::.ctor(System.Int32)
// 0x000000B8 System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::System.IDisposable.Dispose()
// 0x000000B9 System.Boolean System.Linq.Lookup`2/<GetEnumerator>d__12::MoveNext()
// 0x000000BA System.Linq.IGrouping`2<TKey,TElement> System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current()
// 0x000000BB System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.IEnumerator.Reset()
// 0x000000BC System.Object System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.IEnumerator.get_Current()
// 0x000000BD System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x000000BE System.Boolean System.Linq.Set`1::Add(TElement)
// 0x000000BF System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x000000C0 System.Void System.Linq.Set`1::Resize()
// 0x000000C1 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x000000C2 System.Void System.Linq.GroupedEnumerable`3::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x000000C3 System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.GroupedEnumerable`3::GetEnumerator()
// 0x000000C4 System.Collections.IEnumerator System.Linq.GroupedEnumerable`3::System.Collections.IEnumerable.GetEnumerator()
// 0x000000C5 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x000000C6 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000C7 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000C8 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x000000C9 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x000000CA System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000CB System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000CC TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000CD System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000CE System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000CF System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000D0 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000D1 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000D2 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000D3 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000D4 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000D5 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000D6 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000D7 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000D8 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000D9 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000DA TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000DB System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
extern void Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A (void);
// 0x000000DC System.Void System.Linq.Expressions.Expression::.cctor()
extern void Expression__cctor_m69557D69429E0BF3BEDD70DD10F659876E6968E3 (void);
// 0x000000DD System.Exception System.Linq.Expressions.Error::ExtensionNodeMustOverrideProperty(System.Object)
extern void Error_ExtensionNodeMustOverrideProperty_mAC352E09338C9957B04ECD67B350317839E2C9DE (void);
// 0x000000DE System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
extern void LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042 (void);
// 0x000000DF System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
extern void MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C (void);
// 0x000000E0 System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::get_Expression()
extern void MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A (void);
// 0x000000E1 System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::GetMember()
extern void MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87 (void);
// 0x000000E2 System.String System.Linq.Expressions.Strings::ExtensionNodeMustOverrideProperty(System.Object)
extern void Strings_ExtensionNodeMustOverrideProperty_m6E6F9F848EDD10684FF52BF21D95D84983E92CFC (void);
// 0x000000E3 System.Void System.Dynamic.Utils.CacheDict`2::.ctor(System.Int32)
// 0x000000E4 System.Int32 System.Dynamic.Utils.CacheDict`2::AlignSize(System.Int32)
// 0x000000E5 System.Exception System.Dynamic.Utils.ContractUtils::get_Unreachable()
extern void ContractUtils_get_Unreachable_m814C0ABAB566942A64D62EE4BF63B9C75B8BDF5D (void);
// 0x000000E6 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000E7 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000E8 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000E9 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000EA System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000EB System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x000000EC System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000ED System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000EE System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000EF System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000F0 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000F1 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000F2 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000F3 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000F4 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000F5 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000F6 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000F7 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000F8 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000F9 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000FA System.Void System.Collections.Generic.HashSet`1::ExceptWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000FB System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000FC System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000FD System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x000000FE System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x000000FF System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000100 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000101 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000102 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000103 System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x00000104 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x00000105 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000106 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000107 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000108 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000109 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000010A System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000010B System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[267] = 
{
	SR_Format_m7A21873FD59FBF9CD36B4F733BB49D1F470F8829,
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	Error_NotSupported_m51A0560ABF374B66CF6D1208DAF27C4CBAD9AABA,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	Enumerable_Max_mE02EED2C10C2F8F0B2DCE468C87EF3064E854A8D,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A,
	Expression__cctor_m69557D69429E0BF3BEDD70DD10F659876E6968E3,
	Error_ExtensionNodeMustOverrideProperty_mAC352E09338C9957B04ECD67B350317839E2C9DE,
	LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042,
	MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C,
	MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A,
	MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87,
	Strings_ExtensionNodeMustOverrideProperty_m6E6F9F848EDD10684FF52BF21D95D84983E92CFC,
	NULL,
	NULL,
	ContractUtils_get_Unreachable_m814C0ABAB566942A64D62EE4BF63B9C75B8BDF5D,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[267] = 
{
	3126,
	3420,
	3420,
	3531,
	3531,
	3531,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	3370,
	-1,
	3370,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2128,
	3548,
	3420,
	2141,
	2141,
	2141,
	2141,
	3420,
	-1,
	-1,
	3531,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[75] = 
{
	{ 0x02000005, { 111, 4 } },
	{ 0x02000006, { 115, 9 } },
	{ 0x02000007, { 126, 7 } },
	{ 0x02000008, { 135, 10 } },
	{ 0x02000009, { 147, 11 } },
	{ 0x0200000A, { 161, 9 } },
	{ 0x0200000B, { 173, 12 } },
	{ 0x0200000C, { 188, 1 } },
	{ 0x0200000D, { 189, 2 } },
	{ 0x0200000E, { 191, 12 } },
	{ 0x0200000F, { 203, 9 } },
	{ 0x02000010, { 212, 11 } },
	{ 0x02000011, { 223, 11 } },
	{ 0x02000012, { 234, 6 } },
	{ 0x02000013, { 240, 6 } },
	{ 0x02000014, { 246, 4 } },
	{ 0x02000015, { 250, 3 } },
	{ 0x02000018, { 253, 17 } },
	{ 0x02000019, { 274, 5 } },
	{ 0x0200001A, { 279, 1 } },
	{ 0x0200001C, { 280, 8 } },
	{ 0x0200001E, { 288, 4 } },
	{ 0x0200001F, { 292, 3 } },
	{ 0x02000020, { 295, 5 } },
	{ 0x02000021, { 300, 7 } },
	{ 0x02000022, { 307, 3 } },
	{ 0x02000023, { 310, 7 } },
	{ 0x02000024, { 317, 4 } },
	{ 0x0200002F, { 321, 3 } },
	{ 0x02000032, { 324, 36 } },
	{ 0x02000034, { 360, 2 } },
	{ 0x06000007, { 0, 10 } },
	{ 0x06000008, { 10, 10 } },
	{ 0x06000009, { 20, 5 } },
	{ 0x0600000A, { 25, 5 } },
	{ 0x0600000B, { 30, 1 } },
	{ 0x0600000C, { 31, 2 } },
	{ 0x0600000D, { 33, 2 } },
	{ 0x0600000E, { 35, 4 } },
	{ 0x0600000F, { 39, 1 } },
	{ 0x06000010, { 40, 2 } },
	{ 0x06000011, { 42, 1 } },
	{ 0x06000012, { 43, 2 } },
	{ 0x06000013, { 45, 1 } },
	{ 0x06000014, { 46, 2 } },
	{ 0x06000015, { 48, 1 } },
	{ 0x06000016, { 49, 2 } },
	{ 0x06000017, { 51, 1 } },
	{ 0x06000018, { 52, 5 } },
	{ 0x06000019, { 57, 3 } },
	{ 0x0600001A, { 60, 2 } },
	{ 0x0600001B, { 62, 1 } },
	{ 0x0600001C, { 63, 7 } },
	{ 0x0600001D, { 70, 2 } },
	{ 0x0600001E, { 72, 2 } },
	{ 0x0600001F, { 74, 4 } },
	{ 0x06000020, { 78, 4 } },
	{ 0x06000021, { 82, 3 } },
	{ 0x06000022, { 85, 4 } },
	{ 0x06000023, { 89, 4 } },
	{ 0x06000024, { 93, 3 } },
	{ 0x06000025, { 96, 1 } },
	{ 0x06000026, { 97, 3 } },
	{ 0x06000027, { 100, 2 } },
	{ 0x06000028, { 102, 2 } },
	{ 0x06000029, { 104, 5 } },
	{ 0x0600002B, { 109, 1 } },
	{ 0x0600002D, { 110, 1 } },
	{ 0x0600003D, { 124, 2 } },
	{ 0x06000042, { 133, 2 } },
	{ 0x06000047, { 145, 2 } },
	{ 0x0600004D, { 158, 3 } },
	{ 0x06000052, { 170, 3 } },
	{ 0x06000057, { 185, 3 } },
	{ 0x06000099, { 270, 4 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[362] = 
{
	{ (Il2CppRGCTXDataType)2, 2069 },
	{ (Il2CppRGCTXDataType)3, 7221 },
	{ (Il2CppRGCTXDataType)2, 3175 },
	{ (Il2CppRGCTXDataType)2, 2811 },
	{ (Il2CppRGCTXDataType)3, 13783 },
	{ (Il2CppRGCTXDataType)2, 2167 },
	{ (Il2CppRGCTXDataType)2, 2818 },
	{ (Il2CppRGCTXDataType)3, 13892 },
	{ (Il2CppRGCTXDataType)2, 2813 },
	{ (Il2CppRGCTXDataType)3, 13821 },
	{ (Il2CppRGCTXDataType)2, 2070 },
	{ (Il2CppRGCTXDataType)3, 7222 },
	{ (Il2CppRGCTXDataType)2, 3195 },
	{ (Il2CppRGCTXDataType)2, 2820 },
	{ (Il2CppRGCTXDataType)3, 13930 },
	{ (Il2CppRGCTXDataType)2, 2184 },
	{ (Il2CppRGCTXDataType)2, 2828 },
	{ (Il2CppRGCTXDataType)3, 14374 },
	{ (Il2CppRGCTXDataType)2, 2824 },
	{ (Il2CppRGCTXDataType)3, 14133 },
	{ (Il2CppRGCTXDataType)2, 722 },
	{ (Il2CppRGCTXDataType)3, 65 },
	{ (Il2CppRGCTXDataType)3, 66 },
	{ (Il2CppRGCTXDataType)2, 1248 },
	{ (Il2CppRGCTXDataType)3, 5500 },
	{ (Il2CppRGCTXDataType)2, 723 },
	{ (Il2CppRGCTXDataType)3, 87 },
	{ (Il2CppRGCTXDataType)3, 88 },
	{ (Il2CppRGCTXDataType)2, 1270 },
	{ (Il2CppRGCTXDataType)3, 5509 },
	{ (Il2CppRGCTXDataType)3, 16671 },
	{ (Il2CppRGCTXDataType)2, 743 },
	{ (Il2CppRGCTXDataType)3, 420 },
	{ (Il2CppRGCTXDataType)2, 2538 },
	{ (Il2CppRGCTXDataType)3, 11197 },
	{ (Il2CppRGCTXDataType)3, 6322 },
	{ (Il2CppRGCTXDataType)2, 2048 },
	{ (Il2CppRGCTXDataType)2, 1444 },
	{ (Il2CppRGCTXDataType)3, 6011 },
	{ (Il2CppRGCTXDataType)3, 16557 },
	{ (Il2CppRGCTXDataType)2, 726 },
	{ (Il2CppRGCTXDataType)3, 244 },
	{ (Il2CppRGCTXDataType)3, 16587 },
	{ (Il2CppRGCTXDataType)2, 728 },
	{ (Il2CppRGCTXDataType)3, 280 },
	{ (Il2CppRGCTXDataType)3, 16594 },
	{ (Il2CppRGCTXDataType)2, 732 },
	{ (Il2CppRGCTXDataType)3, 332 },
	{ (Il2CppRGCTXDataType)3, 16622 },
	{ (Il2CppRGCTXDataType)2, 741 },
	{ (Il2CppRGCTXDataType)3, 401 },
	{ (Il2CppRGCTXDataType)3, 16682 },
	{ (Il2CppRGCTXDataType)3, 5050 },
	{ (Il2CppRGCTXDataType)2, 1162 },
	{ (Il2CppRGCTXDataType)2, 1599 },
	{ (Il2CppRGCTXDataType)2, 1741 },
	{ (Il2CppRGCTXDataType)2, 1839 },
	{ (Il2CppRGCTXDataType)2, 830 },
	{ (Il2CppRGCTXDataType)3, 1150 },
	{ (Il2CppRGCTXDataType)3, 1151 },
	{ (Il2CppRGCTXDataType)2, 2168 },
	{ (Il2CppRGCTXDataType)3, 8002 },
	{ (Il2CppRGCTXDataType)3, 16713 },
	{ (Il2CppRGCTXDataType)2, 957 },
	{ (Il2CppRGCTXDataType)3, 1810 },
	{ (Il2CppRGCTXDataType)2, 1638 },
	{ (Il2CppRGCTXDataType)2, 1749 },
	{ (Il2CppRGCTXDataType)3, 5507 },
	{ (Il2CppRGCTXDataType)3, 5508 },
	{ (Il2CppRGCTXDataType)3, 1811 },
	{ (Il2CppRGCTXDataType)2, 1600 },
	{ (Il2CppRGCTXDataType)3, 16468 },
	{ (Il2CppRGCTXDataType)2, 724 },
	{ (Il2CppRGCTXDataType)3, 221 },
	{ (Il2CppRGCTXDataType)2, 1965 },
	{ (Il2CppRGCTXDataType)2, 1483 },
	{ (Il2CppRGCTXDataType)2, 1615 },
	{ (Il2CppRGCTXDataType)2, 1742 },
	{ (Il2CppRGCTXDataType)2, 1966 },
	{ (Il2CppRGCTXDataType)2, 1484 },
	{ (Il2CppRGCTXDataType)2, 1616 },
	{ (Il2CppRGCTXDataType)2, 1743 },
	{ (Il2CppRGCTXDataType)2, 1617 },
	{ (Il2CppRGCTXDataType)2, 1744 },
	{ (Il2CppRGCTXDataType)3, 5501 },
	{ (Il2CppRGCTXDataType)2, 1967 },
	{ (Il2CppRGCTXDataType)2, 1485 },
	{ (Il2CppRGCTXDataType)2, 1618 },
	{ (Il2CppRGCTXDataType)2, 1745 },
	{ (Il2CppRGCTXDataType)2, 1968 },
	{ (Il2CppRGCTXDataType)2, 1486 },
	{ (Il2CppRGCTXDataType)2, 1619 },
	{ (Il2CppRGCTXDataType)2, 1746 },
	{ (Il2CppRGCTXDataType)2, 1620 },
	{ (Il2CppRGCTXDataType)2, 1747 },
	{ (Il2CppRGCTXDataType)3, 5502 },
	{ (Il2CppRGCTXDataType)2, 1594 },
	{ (Il2CppRGCTXDataType)2, 1595 },
	{ (Il2CppRGCTXDataType)2, 1739 },
	{ (Il2CppRGCTXDataType)3, 5499 },
	{ (Il2CppRGCTXDataType)2, 1482 },
	{ (Il2CppRGCTXDataType)2, 1612 },
	{ (Il2CppRGCTXDataType)2, 1481 },
	{ (Il2CppRGCTXDataType)3, 16566 },
	{ (Il2CppRGCTXDataType)3, 5049 },
	{ (Il2CppRGCTXDataType)2, 1161 },
	{ (Il2CppRGCTXDataType)2, 1597 },
	{ (Il2CppRGCTXDataType)2, 1740 },
	{ (Il2CppRGCTXDataType)2, 1838 },
	{ (Il2CppRGCTXDataType)3, 16627 },
	{ (Il2CppRGCTXDataType)3, 16626 },
	{ (Il2CppRGCTXDataType)3, 7223 },
	{ (Il2CppRGCTXDataType)3, 7225 },
	{ (Il2CppRGCTXDataType)2, 482 },
	{ (Il2CppRGCTXDataType)3, 7224 },
	{ (Il2CppRGCTXDataType)3, 7233 },
	{ (Il2CppRGCTXDataType)2, 2073 },
	{ (Il2CppRGCTXDataType)2, 2814 },
	{ (Il2CppRGCTXDataType)3, 13822 },
	{ (Il2CppRGCTXDataType)3, 7234 },
	{ (Il2CppRGCTXDataType)2, 1680 },
	{ (Il2CppRGCTXDataType)2, 1779 },
	{ (Il2CppRGCTXDataType)3, 5518 },
	{ (Il2CppRGCTXDataType)3, 16472 },
	{ (Il2CppRGCTXDataType)2, 2825 },
	{ (Il2CppRGCTXDataType)3, 14134 },
	{ (Il2CppRGCTXDataType)3, 7226 },
	{ (Il2CppRGCTXDataType)2, 2072 },
	{ (Il2CppRGCTXDataType)2, 2812 },
	{ (Il2CppRGCTXDataType)3, 13784 },
	{ (Il2CppRGCTXDataType)3, 5517 },
	{ (Il2CppRGCTXDataType)3, 7227 },
	{ (Il2CppRGCTXDataType)3, 16471 },
	{ (Il2CppRGCTXDataType)2, 2821 },
	{ (Il2CppRGCTXDataType)3, 13931 },
	{ (Il2CppRGCTXDataType)3, 7240 },
	{ (Il2CppRGCTXDataType)2, 2074 },
	{ (Il2CppRGCTXDataType)2, 2819 },
	{ (Il2CppRGCTXDataType)3, 13893 },
	{ (Il2CppRGCTXDataType)3, 8049 },
	{ (Il2CppRGCTXDataType)3, 4037 },
	{ (Il2CppRGCTXDataType)3, 5519 },
	{ (Il2CppRGCTXDataType)3, 4036 },
	{ (Il2CppRGCTXDataType)3, 7241 },
	{ (Il2CppRGCTXDataType)3, 16473 },
	{ (Il2CppRGCTXDataType)2, 2829 },
	{ (Il2CppRGCTXDataType)3, 14375 },
	{ (Il2CppRGCTXDataType)3, 7254 },
	{ (Il2CppRGCTXDataType)2, 2076 },
	{ (Il2CppRGCTXDataType)2, 2827 },
	{ (Il2CppRGCTXDataType)3, 14136 },
	{ (Il2CppRGCTXDataType)3, 7255 },
	{ (Il2CppRGCTXDataType)2, 1683 },
	{ (Il2CppRGCTXDataType)2, 1782 },
	{ (Il2CppRGCTXDataType)3, 5523 },
	{ (Il2CppRGCTXDataType)3, 5522 },
	{ (Il2CppRGCTXDataType)2, 2816 },
	{ (Il2CppRGCTXDataType)3, 13824 },
	{ (Il2CppRGCTXDataType)3, 16485 },
	{ (Il2CppRGCTXDataType)2, 2826 },
	{ (Il2CppRGCTXDataType)3, 14135 },
	{ (Il2CppRGCTXDataType)3, 7247 },
	{ (Il2CppRGCTXDataType)2, 2075 },
	{ (Il2CppRGCTXDataType)2, 2823 },
	{ (Il2CppRGCTXDataType)3, 13933 },
	{ (Il2CppRGCTXDataType)3, 5521 },
	{ (Il2CppRGCTXDataType)3, 5520 },
	{ (Il2CppRGCTXDataType)3, 7248 },
	{ (Il2CppRGCTXDataType)2, 2815 },
	{ (Il2CppRGCTXDataType)3, 13823 },
	{ (Il2CppRGCTXDataType)3, 16484 },
	{ (Il2CppRGCTXDataType)2, 2822 },
	{ (Il2CppRGCTXDataType)3, 13932 },
	{ (Il2CppRGCTXDataType)3, 7261 },
	{ (Il2CppRGCTXDataType)2, 2077 },
	{ (Il2CppRGCTXDataType)2, 2831 },
	{ (Il2CppRGCTXDataType)3, 14377 },
	{ (Il2CppRGCTXDataType)3, 8050 },
	{ (Il2CppRGCTXDataType)3, 4039 },
	{ (Il2CppRGCTXDataType)3, 5525 },
	{ (Il2CppRGCTXDataType)3, 5524 },
	{ (Il2CppRGCTXDataType)3, 4038 },
	{ (Il2CppRGCTXDataType)3, 7262 },
	{ (Il2CppRGCTXDataType)2, 2817 },
	{ (Il2CppRGCTXDataType)3, 13825 },
	{ (Il2CppRGCTXDataType)3, 16486 },
	{ (Il2CppRGCTXDataType)2, 2830 },
	{ (Il2CppRGCTXDataType)3, 14376 },
	{ (Il2CppRGCTXDataType)3, 5514 },
	{ (Il2CppRGCTXDataType)3, 5515 },
	{ (Il2CppRGCTXDataType)3, 5526 },
	{ (Il2CppRGCTXDataType)3, 423 },
	{ (Il2CppRGCTXDataType)3, 422 },
	{ (Il2CppRGCTXDataType)2, 1675 },
	{ (Il2CppRGCTXDataType)2, 1775 },
	{ (Il2CppRGCTXDataType)3, 5516 },
	{ (Il2CppRGCTXDataType)2, 1692 },
	{ (Il2CppRGCTXDataType)2, 1795 },
	{ (Il2CppRGCTXDataType)3, 425 },
	{ (Il2CppRGCTXDataType)2, 639 },
	{ (Il2CppRGCTXDataType)2, 744 },
	{ (Il2CppRGCTXDataType)3, 421 },
	{ (Il2CppRGCTXDataType)3, 424 },
	{ (Il2CppRGCTXDataType)3, 246 },
	{ (Il2CppRGCTXDataType)3, 247 },
	{ (Il2CppRGCTXDataType)2, 1663 },
	{ (Il2CppRGCTXDataType)2, 1768 },
	{ (Il2CppRGCTXDataType)3, 249 },
	{ (Il2CppRGCTXDataType)2, 473 },
	{ (Il2CppRGCTXDataType)2, 727 },
	{ (Il2CppRGCTXDataType)3, 245 },
	{ (Il2CppRGCTXDataType)3, 248 },
	{ (Il2CppRGCTXDataType)3, 282 },
	{ (Il2CppRGCTXDataType)2, 2632 },
	{ (Il2CppRGCTXDataType)3, 12648 },
	{ (Il2CppRGCTXDataType)2, 1666 },
	{ (Il2CppRGCTXDataType)2, 1770 },
	{ (Il2CppRGCTXDataType)3, 12649 },
	{ (Il2CppRGCTXDataType)3, 284 },
	{ (Il2CppRGCTXDataType)2, 475 },
	{ (Il2CppRGCTXDataType)2, 729 },
	{ (Il2CppRGCTXDataType)3, 281 },
	{ (Il2CppRGCTXDataType)3, 283 },
	{ (Il2CppRGCTXDataType)3, 334 },
	{ (Il2CppRGCTXDataType)2, 2634 },
	{ (Il2CppRGCTXDataType)3, 12650 },
	{ (Il2CppRGCTXDataType)2, 1669 },
	{ (Il2CppRGCTXDataType)2, 1772 },
	{ (Il2CppRGCTXDataType)3, 12651 },
	{ (Il2CppRGCTXDataType)3, 336 },
	{ (Il2CppRGCTXDataType)2, 477 },
	{ (Il2CppRGCTXDataType)2, 733 },
	{ (Il2CppRGCTXDataType)3, 333 },
	{ (Il2CppRGCTXDataType)3, 335 },
	{ (Il2CppRGCTXDataType)2, 831 },
	{ (Il2CppRGCTXDataType)3, 1152 },
	{ (Il2CppRGCTXDataType)2, 479 },
	{ (Il2CppRGCTXDataType)2, 742 },
	{ (Il2CppRGCTXDataType)3, 402 },
	{ (Il2CppRGCTXDataType)3, 403 },
	{ (Il2CppRGCTXDataType)3, 223 },
	{ (Il2CppRGCTXDataType)2, 471 },
	{ (Il2CppRGCTXDataType)3, 225 },
	{ (Il2CppRGCTXDataType)2, 725 },
	{ (Il2CppRGCTXDataType)3, 222 },
	{ (Il2CppRGCTXDataType)3, 224 },
	{ (Il2CppRGCTXDataType)2, 703 },
	{ (Il2CppRGCTXDataType)3, 0 },
	{ (Il2CppRGCTXDataType)2, 1278 },
	{ (Il2CppRGCTXDataType)3, 5512 },
	{ (Il2CppRGCTXDataType)2, 705 },
	{ (Il2CppRGCTXDataType)3, 2 },
	{ (Il2CppRGCTXDataType)2, 705 },
	{ (Il2CppRGCTXDataType)2, 2435 },
	{ (Il2CppRGCTXDataType)3, 10384 },
	{ (Il2CppRGCTXDataType)3, 10386 },
	{ (Il2CppRGCTXDataType)3, 6017 },
	{ (Il2CppRGCTXDataType)3, 5076 },
	{ (Il2CppRGCTXDataType)2, 1174 },
	{ (Il2CppRGCTXDataType)2, 3252 },
	{ (Il2CppRGCTXDataType)2, 737 },
	{ (Il2CppRGCTXDataType)3, 367 },
	{ (Il2CppRGCTXDataType)3, 10385 },
	{ (Il2CppRGCTXDataType)2, 391 },
	{ (Il2CppRGCTXDataType)2, 1852 },
	{ (Il2CppRGCTXDataType)3, 10387 },
	{ (Il2CppRGCTXDataType)3, 10388 },
	{ (Il2CppRGCTXDataType)2, 1445 },
	{ (Il2CppRGCTXDataType)3, 6016 },
	{ (Il2CppRGCTXDataType)2, 3244 },
	{ (Il2CppRGCTXDataType)2, 1622 },
	{ (Il2CppRGCTXDataType)2, 1748 },
	{ (Il2CppRGCTXDataType)3, 5503 },
	{ (Il2CppRGCTXDataType)3, 5504 },
	{ (Il2CppRGCTXDataType)3, 16086 },
	{ (Il2CppRGCTXDataType)2, 740 },
	{ (Il2CppRGCTXDataType)3, 394 },
	{ (Il2CppRGCTXDataType)3, 6018 },
	{ (Il2CppRGCTXDataType)3, 14690 },
	{ (Il2CppRGCTXDataType)2, 652 },
	{ (Il2CppRGCTXDataType)3, 5084 },
	{ (Il2CppRGCTXDataType)2, 1177 },
	{ (Il2CppRGCTXDataType)2, 3270 },
	{ (Il2CppRGCTXDataType)3, 12645 },
	{ (Il2CppRGCTXDataType)3, 12646 },
	{ (Il2CppRGCTXDataType)2, 1856 },
	{ (Il2CppRGCTXDataType)3, 12647 },
	{ (Il2CppRGCTXDataType)2, 419 },
	{ (Il2CppRGCTXDataType)3, 10389 },
	{ (Il2CppRGCTXDataType)2, 2437 },
	{ (Il2CppRGCTXDataType)3, 10390 },
	{ (Il2CppRGCTXDataType)3, 6012 },
	{ (Il2CppRGCTXDataType)2, 736 },
	{ (Il2CppRGCTXDataType)3, 360 },
	{ (Il2CppRGCTXDataType)3, 11187 },
	{ (Il2CppRGCTXDataType)2, 833 },
	{ (Il2CppRGCTXDataType)3, 1153 },
	{ (Il2CppRGCTXDataType)3, 11192 },
	{ (Il2CppRGCTXDataType)3, 4015 },
	{ (Il2CppRGCTXDataType)2, 512 },
	{ (Il2CppRGCTXDataType)3, 11188 },
	{ (Il2CppRGCTXDataType)2, 2535 },
	{ (Il2CppRGCTXDataType)3, 1197 },
	{ (Il2CppRGCTXDataType)2, 848 },
	{ (Il2CppRGCTXDataType)2, 1137 },
	{ (Il2CppRGCTXDataType)3, 4021 },
	{ (Il2CppRGCTXDataType)3, 11189 },
	{ (Il2CppRGCTXDataType)3, 4010 },
	{ (Il2CppRGCTXDataType)3, 4011 },
	{ (Il2CppRGCTXDataType)3, 4009 },
	{ (Il2CppRGCTXDataType)3, 4012 },
	{ (Il2CppRGCTXDataType)2, 1133 },
	{ (Il2CppRGCTXDataType)2, 3242 },
	{ (Il2CppRGCTXDataType)3, 5511 },
	{ (Il2CppRGCTXDataType)3, 4014 },
	{ (Il2CppRGCTXDataType)2, 1572 },
	{ (Il2CppRGCTXDataType)3, 4013 },
	{ (Il2CppRGCTXDataType)2, 1488 },
	{ (Il2CppRGCTXDataType)2, 3198 },
	{ (Il2CppRGCTXDataType)2, 1639 },
	{ (Il2CppRGCTXDataType)2, 1750 },
	{ (Il2CppRGCTXDataType)3, 1172 },
	{ (Il2CppRGCTXDataType)2, 835 },
	{ (Il2CppRGCTXDataType)2, 3248 },
	{ (Il2CppRGCTXDataType)3, 5066 },
	{ (Il2CppRGCTXDataType)2, 1170 },
	{ (Il2CppRGCTXDataType)3, 6036 },
	{ (Il2CppRGCTXDataType)3, 6037 },
	{ (Il2CppRGCTXDataType)2, 1450 },
	{ (Il2CppRGCTXDataType)3, 6040 },
	{ (Il2CppRGCTXDataType)2, 1450 },
	{ (Il2CppRGCTXDataType)3, 6042 },
	{ (Il2CppRGCTXDataType)2, 1491 },
	{ (Il2CppRGCTXDataType)3, 6046 },
	{ (Il2CppRGCTXDataType)3, 6051 },
	{ (Il2CppRGCTXDataType)3, 6050 },
	{ (Il2CppRGCTXDataType)2, 3268 },
	{ (Il2CppRGCTXDataType)3, 6039 },
	{ (Il2CppRGCTXDataType)3, 6038 },
	{ (Il2CppRGCTXDataType)3, 6047 },
	{ (Il2CppRGCTXDataType)2, 1849 },
	{ (Il2CppRGCTXDataType)3, 6044 },
	{ (Il2CppRGCTXDataType)3, 17081 },
	{ (Il2CppRGCTXDataType)2, 1138 },
	{ (Il2CppRGCTXDataType)3, 4028 },
	{ (Il2CppRGCTXDataType)1, 1569 },
	{ (Il2CppRGCTXDataType)2, 3206 },
	{ (Il2CppRGCTXDataType)3, 6043 },
	{ (Il2CppRGCTXDataType)1, 3206 },
	{ (Il2CppRGCTXDataType)1, 1849 },
	{ (Il2CppRGCTXDataType)2, 3268 },
	{ (Il2CppRGCTXDataType)2, 3206 },
	{ (Il2CppRGCTXDataType)2, 1644 },
	{ (Il2CppRGCTXDataType)2, 1753 },
	{ (Il2CppRGCTXDataType)3, 6041 },
	{ (Il2CppRGCTXDataType)3, 6048 },
	{ (Il2CppRGCTXDataType)3, 6049 },
	{ (Il2CppRGCTXDataType)3, 6045 },
	{ (Il2CppRGCTXDataType)3, 6052 },
	{ (Il2CppRGCTXDataType)2, 354 },
	{ (Il2CppRGCTXDataType)3, 4040 },
	{ (Il2CppRGCTXDataType)2, 493 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	267,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	75,
	s_rgctxIndices,
	362,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
