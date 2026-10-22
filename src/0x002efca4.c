/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FCE628FE2DDA032C31259AFAB54C640E63A420C0DB3C23057232B25001C8513C
 * Entry: 0x002efca4, Ghidra index: 10728, label: FUN_002efca4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6c34;
extern uint32_t *DAT_0040f554;
extern uint32_t DAT_0040f558;
extern uint32_t DAT_0040f55c;
undefined1 * FUN_002efca4(undefined4 *param_1,undefined1 *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  piVar1 = DAT_0040f554;
  if (DAT_0040f558 == '\0') {
    piVar1 = (int *)FUN_002f1965(*param_1,param_1[1]);
    FUN_002f182c(param_2 + (*piVar1 == 0x2d),piVar1[1] + param_3,piVar1);
  }
  else if (DAT_0040f55c == param_3) {
    iVar2 = (*DAT_0040f554 == 0x2d) + DAT_0040f55c;
    param_2[iVar2] = 0x30;
    (param_2 + iVar2)[1] = 0;
  }
  puVar3 = param_2;
  if (*piVar1 == 0x2d) {
    *param_2 = 0x2d;
    puVar3 = param_2 + 1;
  }
  if (piVar1[1] < 1) {
    FUN_002efb93();
    *puVar3 = 0x30;
    puVar3 = puVar3 + 1;
  }
  else {
    puVar3 = puVar3 + piVar1[1];
  }
  if (0 < (int)param_3) {
    FUN_002efb93();
    *puVar3 = DAT_003b6c34;
    if (piVar1[1] < 0) {
      uVar4 = -piVar1[1];
      if ((DAT_0040f558 != '\0') || ((int)uVar4 <= (int)param_3)) {
        param_3 = uVar4;
      }
      FUN_002efb93();
      puVar5 = (undefined4 *)(puVar3 + 1);
      for (uVar4 = param_3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = 0x30303030;
        puVar5 = puVar5 + 1;
      }
      for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
        *(undefined1 *)puVar5 = 0x30;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
  }
  return param_2;
}
