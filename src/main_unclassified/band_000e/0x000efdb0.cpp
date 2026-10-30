/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7777A6325B9DD6EBDD964A01A189C8522F681A43191C75D9F3868AEE0649E32
 * Entry: 0x000efdb0, Ghidra index: 2990, label: FUN_000efdb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_000efdb0(void)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  
  if (in_EAX != (int *)0x0) {
    iVar1 = (**(code **)(*in_EAX + 4))();
    if (iVar1 == 3) {
      iVar1 = in_EAX[0x1c];
      iVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1e4))();
      *(uint *)(iVar2 + 8) = (uint)(iVar1 != 0);
      return 1;
    }
  }
  return 0;
}
