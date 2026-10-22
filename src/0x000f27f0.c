/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63DC8EE8F5FB2E9FD0D520C711A1096460DFF46A74FEFBF2449B341A56635C70
 * Entry: 0x000f27f0, Ghidra index: 3026, label: FUN_000f27f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined1 FUN_000f27f0(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined1 uVar3;
  int *unaff_EDI;
  
  uVar3 = 0;
  iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x18c))();
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x20) != '\0') {
      return 1;
    }
    uVar3 = 1;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      pbVar2 = (byte *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))(iVar1);
      if ((((pbVar2 != (byte *)0x0) && ((*pbVar2 & 1) != 0)) && (pbVar2 != param_1)) &&
         ((*(int *)(pbVar2 + 8) == *(int *)(param_1 + 8) && (*(int *)(pbVar2 + 0xc) == *unaff_EDI)))
         ) {
        return 0;
      }
    } while (iVar1 < 8);
  }
  return uVar3;
}
