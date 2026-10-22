/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 732921CF456A93ED5DEC606E930FABC961DF151CEA70C4103253994ABD126D1E
 * Entry: 0x00046f40, Ghidra index: 554, label: FUN_00046f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00046f40(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_EBX;
  uint uVar4;
  int *piVar5;
  int local_10;
  int local_c;
  float local_8;
  
  iVar1 = unaff_EBX[0x167];
  local_c = 0;
  local_8 = -999.0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      if (*(int *)(iVar1 + 4) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = **(int **)(iVar1 + 8);
      }
      piVar5 = *(int **)(iVar3 + 4);
      if (piVar5 != (int *)0x0) {
        local_10 = 0;
        uVar4 = 1;
        while( true ) {
          if ((unaff_EBX != piVar5) && (iVar3 = (**(code **)(*piVar5 + 0xf4))(), iVar3 != 0)) {
            iVar3 = (**(code **)(*piVar5 + 0xf4))();
            uVar2 = *(undefined4 *)(iVar3 + 0x358);
            (**(code **)(*unaff_EBX + 0xf4))();
            FUN_00049ca0();
            iVar3 = FUN_000388b0(uVar2);
            if ((iVar3 != 0) &&
               (((*(int *)(iVar3 + 100) == 1 && (*(int *)(iVar3 + 0x58) != 0)) &&
                (local_8 < *(float *)(iVar3 + 0x14))))) {
              local_8 = *(float *)(iVar3 + 0x14);
              local_c = *(int *)(iVar3 + 0x58);
            }
          }
          if (*(uint *)(iVar1 + 4) <= uVar4) break;
          local_10 = local_10 + 4;
          if (uVar4 < *(uint *)(iVar1 + 4)) {
            iVar3 = *(int *)(local_10 + *(int *)(iVar1 + 8));
          }
          else {
            iVar3 = 0;
          }
          piVar5 = *(int **)(iVar3 + 4);
          uVar4 = uVar4 + 1;
          if (piVar5 == (int *)0x0) {
            return local_c;
          }
        }
        return local_c;
      }
    }
  }
  return 0;
}
