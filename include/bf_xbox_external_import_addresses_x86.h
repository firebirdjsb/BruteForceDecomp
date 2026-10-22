/* Address-only Xbox kernel/external import labels in recovered Brute Force C.
 *
 * Original retail XBE SHA-256:
 * B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 *
 * Observed in current Ghidra C drafts:
 * - KeTickCount_exref: callsites dereference a DWORD from its address.
 * - XboxHDKey_exref: callsites read an indexed byte or pass the address
 *   with a length of 0x10 to XcHMAC/other consumers. This header contains
 *   NO key material and intentionally supplies no storage definition.
 * - XboxHardwareInfo_exref: callsites read indexed bytes/flags.
 * - LaunchDataPage_exref: callsites load/store a pointer-sized value
 *   through the external import storage address (Xbox x86 pointer=32 bits).
 * - ExEventObjectType_exref: callsites pass the external symbol address
 *   to ObReferenceObjectByHandle.
 *
 * These are byte-addressable *C11 source inspection placeholders* only.
 * Their Xbox import indirection, actual address, size, type, lifetime,
 * mutability, contents, byte ordering and runtime semantics are not proved.
 * Never treat these declarations as working native-PC ABI adapters; never
 * synthesize actual Xbox secrets or invent definitions to make the link pass.
 *
 * CAUTION: Pointers in 64-bit host C are not interchangeable with the
 * original 32-bit Xbox import/virtual addresses; per-function x86 evidence
 * is required before changing any dereference or pointer conversion.
 */
#ifndef BF_XBOX_EXTERNAL_IMPORT_ADDRESSES_X86_H
#define BF_XBOX_EXTERNAL_IMPORT_ADDRESSES_X86_H
#include <stdint.h>
extern uint8_t KeTickCount_exref[];
extern uint8_t XboxHDKey_exref[];
extern uint8_t XboxHardwareInfo_exref[];
extern uint8_t LaunchDataPage_exref[];
extern uint8_t ExEventObjectType_exref[];
#endif
