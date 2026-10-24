/* Original 0x0001f4f0-family byte layout, verified in the hash-pinned XBE.
 * 0x001e1cc4 / 0x001e1f04 advance records by 0x1c bytes. Helpers select
 * inline bytes at +4 or a guest DWORD at +4 using capacity at +0x18;
 * length is a DWORD at +0x14. Bytes +0..+3 remain opaque and untouched.
 * This view recovers storage geometry, not native C helper/allocator ABI.
 */
#ifndef BF_X86_SSO28_H
#define BF_X86_SSO28_H
#include <stdint.h>
#include <string.h>

enum {
    BF_X86_SSO28_SIZE = 0x1c,
    BF_X86_SSO28_STORAGE = 4,
    BF_X86_SSO28_INLINE_SIZE = 16,
    BF_X86_SSO28_LENGTH = 0x14,
    BF_X86_SSO28_CAPACITY = 0x18
};
typedef struct {
    uint8_t bytes[BF_X86_SSO28_SIZE];
} bf_x86_sso28;
_Static_assert(sizeof(bf_x86_sso28) == 0x1c, "Original string record is 28 bytes");
_Static_assert(sizeof(uint32_t) == 4, "Original fields are four-byte guest words");

/* The Xbox and supported Windows x86 hosts are little endian. memcpy avoids
 * alignment/aliasing assumptions. Read a field only after its observed write. */
static inline uint32_t bf_x86_sso28_capacity(const bf_x86_sso28 *object)
{
    uint32_t value;
    memcpy(&value, object->bytes + BF_X86_SSO28_CAPACITY, sizeof(value));
    return value;
}
static inline uint32_t bf_x86_sso28_heap_word(const bf_x86_sso28 *object)
{
    uint32_t value;
    memcpy(&value, object->bytes + BF_X86_SSO28_STORAGE, sizeof(value));
    return value;
}
/* Original writes: capacity DWORD=15, length DWORD=0, first inline BYTE=0.
 * Preserve all 19 other bytes. This performs no allocation or deallocation. */
static inline void bf_x86_sso28_write_empty_fields(bf_x86_sso28 *object)
{
    const uint32_t capacity = 15;
    const uint32_t length = 0;
    memcpy(object->bytes + BF_X86_SSO28_CAPACITY, &capacity, sizeof(capacity));
    memcpy(object->bytes + BF_X86_SSO28_LENGTH, &length, sizeof(length));
    object->bytes[BF_X86_SSO28_STORAGE] = 0;
}
#endif
