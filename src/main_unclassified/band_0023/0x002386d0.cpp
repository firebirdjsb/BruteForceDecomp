/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 88B6D39A93463C4634C7C226E1E79CA0E0960305190C25DF2AF5A3F0A3848E6D
 * Entry: 0x002386d0, Ghidra index: 7878, label: FUN_002386d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002386d0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int unaff_EBX;
  
  if (*(int *)(unaff_EBX + 0x58) != 0) {
    FUN_00238740();
  }
  puVar4 = *(undefined4 **)(unaff_EBX + 0x28);
  while (puVar4 != (undefined4 *)0x0) {
    piVar1 = *(int **)(puVar4[2] + 4);
    (**(code **)(*piVar1 + 8))(puVar4[2]);
    piVar1[3] = 0;
    puVar2 = (undefined4 *)puVar4[1];
    puVar3 = (undefined4 *)*puVar4;
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 **)(unaff_EBX + 0x28) = puVar3;
    }
    else {
      *puVar2 = puVar3;
    }
    if (puVar3 == (undefined4 *)0x0) {
      *(undefined4 **)(unaff_EBX + 0x2c) = puVar2;
    }
    else {
      puVar3[1] = puVar2;
    }
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00238300();
    puVar4 = puVar3;
  }
  return 1;
}
