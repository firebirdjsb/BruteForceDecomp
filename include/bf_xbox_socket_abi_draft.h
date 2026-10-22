/* Opaque Xbox XONLINE socket ABI parameter names — C11 drafts only.
 *
 * src/0x003450b4.c and src/0x003450bf.c merely forward a sockaddr*
 * and a 32-bit stack length. Their recovered C does NOT establish the
 * socket-address structure or Windows/Xbox sockaddr binary layout.
 *
 * src/0x00346d53.c and src/0x00346f3f.c return signed socket counts.
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
typedef uint32_t socklen_t; /* x86 stack word; signedness unverified */
typedef int32_t ssize_t;    /* signed x86 return word; ABI unverified */
#endif
