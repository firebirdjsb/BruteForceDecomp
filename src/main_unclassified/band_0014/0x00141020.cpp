/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D3580925F9B42777BC926D69F7F89E9783BE0448CDA70A5FEB1661B028217D9
 * Entry: 0x00141020, Ghidra index: 4096, label: FUN_00141020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0040c9d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00141020(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined4 *extraout_EDX;
  float10 fVar6;
  
  if (*(undefined4 **)(param_1 + 0x10) == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)**(undefined4 **)(param_1 + 0x10);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  fVar4 = 0.0;
  for (; puVar5 != puVar1; puVar5 = (undefined4 *)*puVar5) {
    iVar2 = puVar5[2];
    fVar3 = fVar4;
    if ((*(int *)(iVar2 + 8) <= param_2) && ((*(byte *)(iVar2 + 0xc) & 4) == 0)) {
      fVar6 = (float10)FUN_0013f750(iVar2 + 0x24);
      puVar5 = extraout_EDX;
      fVar3 = (float)(fVar6 + (float10)_DAT_0040c9d8);
      if ((float)(fVar6 + (float10)_DAT_0040c9d8) <= fVar4) {
        fVar3 = fVar4;
      }
    }
    fVar4 = fVar3;
  }
  return;
}
