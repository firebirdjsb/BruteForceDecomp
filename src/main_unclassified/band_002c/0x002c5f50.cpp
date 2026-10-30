/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73E65A54B89BAA9095DA094D00DB86C09A85EC66296DA8FD566E18B8339EE54A
 * Entry: 0x002c5f50, Ghidra index: 10075, label: FUN_002c5f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469f24;
extern uint32_t _DAT_00469f34;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002c5f50(void)

{
  int iVar1;
  undefined4 in_EDX;
  int unaff_ESI;
  
  iVar1 = *(int *)(*(int *)(unaff_ESI + 4) + 0x20);
  FUN_002c2f40(in_EDX,DAT_00469f24,0x3f800000);
  if ((_DAT_00469f34 <= *(float *)(iVar1 + 0x58)) ||
     ((*(uint *)(*(int *)(iVar1 + 0x40) + 0x4c) & 0x300) == 0x100)) {
    FUN_002c4720(*(undefined4 *)(unaff_ESI + 4));
  }
  return;
}
