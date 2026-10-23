/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA0F852DA236D59E10FDC2357D2D25127B986DB7335B7EE49E61582BA188320B
 * Entry: 0x00081100, Ghidra index: 1519, label: FUN_00081100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00081100(int param_1,int param_2)

{
  int iVar1;
  int *in_ECX;
  int unaff_EBX;
  int iVar2;
  int unaff_retaddr;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  iVar2 = 0;
  if (*(int *)(param_2 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(param_2 + 4));
  }
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  if (param_1 != 0) {
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_4 = (**(code **)(*in_ECX + 0xf4))(local_10,&local_20);
    if (0 < local_4) {
      do {
        iVar1 = FUN_0005c270();
        if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x70) & 1) != 0)) {
          FUN_00074fb0();
        }
        iVar2 = iVar2 + 1;
        param_2 = unaff_retaddr;
      } while (iVar2 < local_4);
    }
    if (unaff_EBX != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(unaff_EBX);
    }
    local_20 = 0;
    local_1c = 0;
    if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_14);
    }
  }
  if (*(int *)(param_2 + 4) != 0) {
    return *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
  }
  return 0;
}
