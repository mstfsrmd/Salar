#ifndef _PRIMITIVE_BASIC_TYPES_H__
#define _PRIMITIVE_BASIC_TYPES_H__

typedef char                Char;
typedef unsigned char       Byte;
typedef enum {FALSE, TRUE}  Bool; 
typedef void                Void;

typedef char                Int8;
typedef short               Int16;
typedef int                 Int32;
typedef long long           Int64;
typedef unsigned char       UInt8;
typedef unsigned short      UInt16;
typedef unsigned int        UInt32;
typedef unsigned long long  UInt64;

typedef unsigned long       UIntPtr; 
typedef long                IntPtr;  

typedef float               Float;
typedef double              Double;

//typedef unsigned long     Size;
//typedef long              SSize;
typedef unsigned int        Size;
typedef int                 SSize;
//typedef size_t            Size;
//typedef ssize_t           SSize;

typedef Void*               Handle;
typedef UInt32              Id;


#define INVALID_HANDLE      NULL
#define INVALID_ID          ((Id)-1)

#define INFINITE_UINT32    ((UInt32)-1)
#define INFINITE_UINT64    ((UInt64)-1)


//---------------------------------


#define GENERAL_VALUE_MAX_SIZE   8

typedef Byte GeneralValueArray[GENERAL_VALUE_MAX_SIZE];


typedef union {
    Char              chr;
    Byte              byt;
    Bool              bl;
    Int8              i8;
    Int16             i16;
    Int32             i32;
    Int64             i64;
    UInt8             u8;
    UInt16            u16;
    UInt32            u32;
    UInt64            u64;
    Float             flt;
    Double            dbl;
    Void*             ptr;
    UIntPtr           uptr;
    IntPtr            iptr;
    Size              siz;
    SSize             ssiz;
    GeneralValueArray* general_value_array;
}
GeneralValue;


#endif  // _PRIMITIVE_BASIC_TYPES_H__