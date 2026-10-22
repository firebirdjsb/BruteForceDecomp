/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 30856A776CEC219E9BD91AECEA91F18D54CC7B613351C57307171276DD8FA1B2
 * Entry: 0x0007fa90, Ghidra index: 1507, label: FUN_0007fa90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_0007fa90(void)

{
  int iVar1;
  byte *pbVar2;
  int *unaff_EBX;
  byte *unaff_EDI;
  
  iVar1 = 0;
  while( true ) {
    iVar1 = iVar1 + 1;
    pbVar2 = (byte *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))(iVar1);
    if ((((pbVar2 != (byte *)0x0) && ((*pbVar2 & 1) != 0)) && (pbVar2 != unaff_EDI)) &&
       (((*(int *)(pbVar2 + 0x98) == *(int *)(unaff_EDI + 0x98) && ((*pbVar2 & 4) != 0)) &&
        (*(int *)(pbVar2 + 0x10) == *unaff_EBX)))) break;
    if (7 < iVar1) {
      return 0;
    }
  }
  return 1;
}
