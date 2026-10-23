/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED4B61D393193F2284908551F05D189DBD44E3020E9AEF6D37DC1A4C3F04EF68
 * Entry: 0x002b3590, Ghidra index: 9765, label: FUN_002b3590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b3590(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_EDI;
  undefined4 local_38 [9];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = *(int *)(param_1 + 0x90);
  FUN_002b4370(param_2,iVar2 + 0xdc,iVar2 + 0xec,
               (float)(((float10)(double)CONCAT44(param_4,param_3) -
                       (float10)*(double *)(iVar2 + 0x70)) * (float10)*(float *)(iVar2 + 0x78)));
  FUN_002b2b10(iVar2,unaff_EDI,param_3,param_4);
  if ((*(uint *)(param_1 + 0x70) & 0xc00) == 0) {
    puVar1 = local_38;
    iVar2 = 3;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    local_8 = 0;
    FUN_002b4100();
    local_10 = unaff_EDI[1];
    local_14 = *unaff_EDI;
    local_c = unaff_EDI[2];
    FUN_00150930();
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_002b3d00();
  }
  return;
}
