/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB8143FBD8B7EAB1AE01A8D970DD2D75D98C8E0A67A6207F03F48EEF7A27F513
 * Entry: 0x002a6320, Ghidra index: 9583, label: FUN_002a6320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002a6320(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  iVar3 = (int)param_1;
  puVar2 = *(undefined4 **)((int)param_1 + 0xc);
  cVar1 = *(char *)((int)puVar2[1] + 0x15);
  param_1 = puVar2;
  puVar6 = (undefined4 *)puVar2[1];
  while (cVar1 == '\0') {
    if ((undefined4 *)puVar6[3] < param_2) {
      puVar4 = (undefined4 *)puVar6[2];
      puVar6 = param_1;
    }
    else {
      puVar4 = (undefined4 *)*puVar6;
    }
    param_1 = puVar6;
    puVar6 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x15);
  }
  if ((param_1 == puVar2) || (param_2 < (undefined4 *)param_1[3])) {
    param_2 = puVar2;
    piVar5 = (int *)&param_2;
  }
  else {
    piVar5 = (int *)&param_1;
  }
  if (*piVar5 == *(int *)(iVar3 + 0xc)) {
    return 0x80070005;
  }
  piVar5 = *(int **)(*piVar5 + 0x10);
  *param_3 = piVar5;
  (**(code **)(*piVar5 + 4))(piVar5);
  return 0;
}
