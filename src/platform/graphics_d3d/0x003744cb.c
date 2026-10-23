/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C30BB145E692E3D250EDB8D98F795086908D7F23C1A58CC0446432FA7324D90
 * Entry: 0x003744cb, Ghidra index: 13424, label: FUN_003744cb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0010020c;
undefined4 FUN_003744cb(void)

{
  int iVar1;
  int *in_EAX;
  
  iVar1 = *in_EAX;
  in_EAX[0x2a] = *(uint *)(iVar1 + 0x1800) >> 0x10 & 0xfffc;
  in_EAX[0x30] = *(uint *)(iVar1 + 0x1808) & 0xff;
  in_EAX[0x2b] = *(int *)(&DAT_0010020c + iVar1);
  in_EAX[0x2f] = 0xfe502a;
  return 1;
}
