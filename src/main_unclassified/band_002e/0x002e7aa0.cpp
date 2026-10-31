/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FCDFA822CA60847DF692F6808ED0116CE1B64574F548ABF17908B160A05E372B
 * Entry: 0x002e7aa0, Ghidra index: 10526, label: FUN_002e7aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declarations; direct CALL targets checked against the pinned XBE.
 * ABI_UNVERIFIED: source signatures are not recovered Xbox/native interfaces.
 */
extern void * __cdecl _memmove(void *__dest,void *__src,size_t __n);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040e89c;
undefined4 FUN_002e7aa0(int param_1,undefined4 param_2,char param_3)

{
  undefined4 *__src;
  
  __src = (undefined4 *)(param_1 * 0x10 + DAT_0040e89c);
  if (param_3 == '\0') {
    __src[*(byte *)(__src + 3)] = param_2;
    *(char *)(__src + 3) = *(char *)(__src + 3) + '\x01';
    return 0;
  }
  _memmove(__src + 1,__src,(uint)*(byte *)(__src + 3) << 2);
  *(char *)(__src + 3) = *(char *)(__src + 3) + '\x01';
  *__src = param_2;
  return 0;
}
