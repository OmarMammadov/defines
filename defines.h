#ifndef DEFINES_H_INCLUDED
#define DEFINES_H_INCLUDED


// Unsigned int types.

/* Unsigned 8-bit integer */
typedef unsigned char u8;

/* Unsigned 16-bit integer */
typedef unsigned short u16;

/* Unsigned 32-bit integer */
typedef unsigned int u32;

/* Unsigned 64-bit integer */
typedef unsigned long long u64;

// Signed int types.

/* Signed 8-bit integer */
typedef signed char i8;

/* Signed 16-bit integer */
typedef signed short i16;

/* Signed 32-bit integer */
typedef signed int i32;

/* Signed 64-bit integer */
typedef signed long long i64;

// Floating point types

/* 32-bit floating point number */
typedef float f32;

/* 64-bit floating point number */
typedef double f64;

// Boolean types

/* 32-bit boolean type, used for APIs which require it */
typedef int b32;

/* 8-bit boolean type */
typedef _Bool b8;


// Ensure all types are of the correct size.

// Properly define static assertions.
#if defined(__clang__) || defined(__GNUC__)
/* Static assertion */
#define STATIC_ASSERT _Static_assert
#else

/* Static assertion */
#define STATIC_ASSERT static_assert
#endif

/* Assert u8 to be 1 byte.*/
STATIC_ASSERT(sizeof(u8) == 1, "Expected u8 to be 1 byte.");

/* Assert u16 to be 2 bytes.*/
STATIC_ASSERT(sizeof(u16) == 2, "Expected u16 to be 2 bytes.");

/* Assert u32 to be 4 bytes.*/
STATIC_ASSERT(sizeof(u32) == 4, "Expected u32 to be 4 bytes.");

/* Assert u64 to be 8 bytes.*/
STATIC_ASSERT(sizeof(u64) == 8, "Expected u64 to be 8 bytes.");

/* Assert i8 to be 1 byte.*/
STATIC_ASSERT(sizeof(i8) == 1, "Expected i8 to be 1 byte.");

/* Assert i16 to be 2 bytes.*/
STATIC_ASSERT(sizeof(i16) == 2, "Expected i16 to be 2 bytes.");

/* Assert i32 to be 4 bytes.*/
STATIC_ASSERT(sizeof(i32) == 4, "Expected i32 to be 4 bytes.");

/* Assert i64 to be 8 bytes.*/
STATIC_ASSERT(sizeof(i64) == 8, "Expected i64 to be 8 bytes.");

/* Assert f32 to be 4 bytes.*/
STATIC_ASSERT(sizeof(f32) == 4, "Expected f32 to be 4 bytes.");

/* Assert f64 to be 8 bytes.*/
STATIC_ASSERT(sizeof(f64) == 8, "Expected f64 to be 8 bytes.");

/* True.*/
#define true 1
#define True 1

/* False. */
#define false 0
#define False 0

/*
// Platform detection
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__)
#define PLATFORM_WINDOWS 1
#ifndef _WIN64
#error "64-bit is required on Windows!"
#endif
#elif defined(__linux__) || defined(__gnu_linux__)
// Linux OS
#define PLATFORM_LINUX 1
#if defined(__ANDROID__)
#define PLATFORM_ANDROID 1
#endif
#elif defined(__unix__)
// Catch anything not caught by the above.
#define PLATFORM_UNIX 1
#elif defined(_POSIX_VERSION)
// Posix
#define PLATFORM_POSIX 1
#elif __APPLE__
// Apple platforms
#define PLATFORM_APPLE 1
#include <TargetConditionals.h>
#if TARGET_IPHONE_SIMULATOR
// iOS Simulator
#define PLATFORM_IOS 1
#define PLATFORM_IOS_SIMULATOR 1
#elif TARGET_OS_IPHONE
#define PLATFORM_IOS 1
// iOS device
#elif TARGET_OS_MAC
// HACK: Should probably be in the Vulkan Renderer lib, not here.
#define VK_USE_PLATFORM_MACOS_MVK
// Other kinds of Mac OS
#else
#error "Unknown Apple platform"
#endif
#else
#error "Unknown platform!"
#endif

*/
#endif // DEFINES_H_INCLUDED

