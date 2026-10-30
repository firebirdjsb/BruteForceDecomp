/* 0x00237EA0 direct-call allocator boundary, copied from pinned original
 * XBE instruction evidence in scripts/verify_002b8c60_heap_xbe.py.
 *
 * MOV ECX,[ESP+4]; XOR EAX,EAX; TEST ECX,ECX; JE return_zero;
 * PUSH ECX; PUSH EAX; CALL 0x002F77F3; PUSH EAX;
 * CALL 0x002F6E31; RET.
 *
 * The empty-allocation case returns EAX=0 and does not contact the heap.
 * Otherwise the EAX result of 0x002F6E31 is returned unchanged in
 * guest32 form, not as a native host pointer. The pushed words are:
 * heap handle from 0x002F77F3, zero flags, original guest size.
 *
 * The actual 0x002F6E31 original body is a complex allocator with
 * Xbox heap/SEH/guest-memory dependencies. Its Ghidra draft returns a
 * host-width pointer type and is NOT a proven guest-to-host interface.
 * Do not cast that host pointer back to 32 bits or invent host malloc.
 * Until an Xbox ABI-aware implementation exists, this direct-call
 * adapter intentionally has no definition and must NOT link natively.
 *
 * ABI_UNVERIFIED: callee register/stack/exception semantics, memory
 * translation and heap implementation remain unverified.
 */
#ifndef BF_00237EA0_HEAP_MALLOC_GUEST32_H
#define BF_00237EA0_HEAP_MALLOC_GUEST32_H
#include <stdint.h>
uint32_t bf_xbox_guest_call_002f6e31_u32(uint32_t guest_heap_handle,
                                           uint32_t flags,
                                           uint32_t guest_size);
uint32_t FUN_00237ea0(uint32_t guest_size);
#endif
