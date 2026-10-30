/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F9C20EAAE7994CE60A50F265BEB116385CD8B88BE6721F891559DF21D7C92DA
 * Entry: 0x0017a850, Ghidra index: 5015, label: FUN_0017a850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017a850(int param_1,int param_2)

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
      cVar6 = (**(code **)puVar5[2])(puVar7 + 2);
      if (cVar6 == '\0') {
        puVar7 = (undefined4 *)*puVar7;
      }
      else {
        puVar3 = (undefined4 *)*puVar5;
        FUN_0017a410();
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
      FUN_0017a800(puVar1,puVar5,puVar2);
    }
  }
  return;
}
