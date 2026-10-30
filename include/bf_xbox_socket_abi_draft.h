/* Opaque Xbox XONLINE socket ABI parameter types — historical C11 and C++ drafts.
 *
 * 0x003450b4.cpp and 0x003450bf.cpp merely forward a sockaddr*
 * and a 32-bit stack length. Their recovered C does NOT establish the
 * socket-address structure or Windows/Xbox sockaddr binary layout.
 *
 * 0x00346d53.cpp and 0x00346f3f.cpp return signed socket counts.
 * The Xbox native x86 width is 32 bits; host size_t/ssize_t widths
 * must never be taken as evidence of x86 parameter ABI or network behavior.
 *
 * These aliases do NOT implement Xbox socket APIs, networking, or a
 * 64-player protocol; originals remain linkage/runtime-unverified.
 */
#ifndef BF_XBOX_SOCKET_ABI_DRAFT_H
#define BF_XBOX_SOCKET_ABI_DRAFT_H
#include <stdint.h>
typedef struct BF_XBOX_SOCKADDR_LAYOUT_UNKNOWN sockaddr;
typedef uint32_t bf_guest_socklen32; /* x86 stack word; signedness unverified */
typedef int32_t bf_guest_ssize32;    /* signed x86 return word; ABI unverified */
/* XBE 0x346240/0x3462DE read guest DWORD +4; 0x34624E/0x3462E1
 * read guest WORD +2. No sockaddr layout or native ABI is inferred.
 * Little-endian byte loads avoid host alignment/endianness assumptions. */
static inline uint16_t bf_xbox_sockaddr_word_at_2(const sockaddr *addr)
{
    const uint8_t *p = (const uint8_t *)(const void *)addr;
    return (uint16_t)((uint16_t)p[2] | ((uint16_t)p[3] << 8));
}
static inline uint32_t bf_xbox_sockaddr_dword_at_4(const sockaddr *addr)
{
    const uint8_t *p = (const uint8_t *)(const void *)addr;
    return (uint32_t)p[4] | ((uint32_t)p[5] << 8) |
           ((uint32_t)p[6] << 16) | ((uint32_t)p[7] << 24);
}
#endif
