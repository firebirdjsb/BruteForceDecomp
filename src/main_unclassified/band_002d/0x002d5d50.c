/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 76F19CCFFB7F419AA0DBBB33AA8EE97EF613C53FF7FB7ADBEBD1CEB77726DA93
 * Entry: 0x002d5d50, Ghidra index: 10232, label: FUN_002d5d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_002d5d50(int param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *unaff_EDI;
  
  piVar5 = (int *)FUN_002ea01d(0x10);
  piVar5[3] = param_1;
  piVar5[2] = (int)param_2;
  *piVar5 = 0;
  piVar5[1] = 0;
  if (param_2 < (float)unaff_EDI[1] == (param_2 == (float)unaff_EDI[1])) {
    puVar4 = (undefined4 *)*unaff_EDI;
    puVar3 = (undefined4 *)0x0;
    while ((puVar2 = puVar4, puVar2 != (undefined4 *)0x0 && ((float)puVar2[2] < param_2))) {
      puVar3 = puVar2;
      puVar4 = (undefined4 *)*puVar2;
    }
    piVar5[1] = (int)puVar3;
    *puVar3 = piVar5;
    *piVar5 = (int)puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = piVar5;
    }
    *(short *)(unaff_EDI + 2) = (short)unaff_EDI[2] + 1;
    return piVar5;
  }
  unaff_EDI[1] = (int)param_2;
  iVar1 = *unaff_EDI;
  *piVar5 = iVar1;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = piVar5;
  }
  *(short *)(unaff_EDI + 2) = (short)unaff_EDI[2] + 1;
  *unaff_EDI = (int)piVar5;
  return piVar5;
}
