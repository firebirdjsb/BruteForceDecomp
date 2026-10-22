/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7389FA850402B21FA2E0A3E4FE2998F0360934ED004CE1169C89D7CC54CC1004
 * Entry: 0x000fbc80, Ghidra index: 3140, label: FUN_000fbc80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000fbc80(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined4 *puVar7;
  
  if (param_2 != param_1) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)*puVar1;
    }
    puVar2 = *(undefined4 **)(param_2 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)*puVar2;
    }
    while (puVar7 != puVar1) {
      if (puVar5 == puVar2) {
        return;
      }
      cVar6 = FUN_000f9510(puVar7[2]);
      if (cVar6 == '\0') {
        puVar7 = (undefined4 *)*puVar7;
      }
      else {
        puVar3 = (undefined4 *)*puVar5;
        FUN_000b2a50();
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
        *(undefined4 **)puVar5[1] = puVar3;
        *(undefined4 **)puVar3[1] = puVar7;
        *(undefined4 **)puVar7[1] = puVar5;
        uVar4 = puVar7[1];
        puVar7[1] = puVar3[1];
        puVar3[1] = puVar5[1];
        puVar5[1] = uVar4;
        puVar5 = puVar3;
      }
    }
    if (puVar5 != puVar2) {
      FUN_0024ff90(puVar1,puVar5,puVar2);
    }
  }
  return;
}
