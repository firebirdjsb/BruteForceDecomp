/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AD59939B5A135346F1EB098288B435DD407FAEB83CB50AF34965AD818AB96039
 * Entry: 0x00374cf1, Ghidra index: 13436, label: FUN_00374cf1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400100;
void FUN_00374cf1(undefined4 *param_1)

{
  byte *pbVar1;
  int iVar2;
  int *unaff_EDI;
  
  iVar2 = *unaff_EDI;
  while ((((*(byte *)(iVar2 + 0x3214) & 0x10) == 0 || ((*(byte *)(iVar2 + 0x2400) & 0x10) == 0)) ||
         ((*(byte *)(iVar2 + 0x3220) & 0x10) != 0))) {
    FUN_00377d70(unaff_EDI);
    if (*(int *)(&DAT_00400100 + iVar2) != 0) {
      FUN_00377cb0();
    }
    if ((*(uint *)(iVar2 + 0x100) & 0x1000000) != 0) {
      FUN_00377a50();
    }
  }
  pbVar1 = (byte *)(iVar2 + 0x3220);
  *param_1 = *(undefined4 *)pbVar1;
  pbVar1[0] = 0;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  do {
  } while ((*pbVar1 & 0x10) != 0);
  return;
}
