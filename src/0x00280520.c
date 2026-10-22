/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF42571E68E8E7D522ED5E4C0D9F1141C2C3D3C638B46F6D51627439222722E8
 * Entry: 0x00280520, Ghidra index: 9030, label: FUN_00280520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00280520(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 local_1c [28];
  
  if (((((float)param_1[6] < (float)param_1[7] != ((float)param_1[6] == (float)param_1[7])) ||
       ((param_1[5] != 0 && (*(float *)(param_1[5] + 0x2c) != 1.0)))) && (param_1[2] != 0)) &&
     (param_1[3] != 0)) {
    return CONCAT31((int3)((uint)param_1[3] >> 8),1);
  }
  iVar1 = param_1[3];
  *param_2 = iVar1;
  uVar2 = 0;
  if (iVar1 != 0) {
    if (param_1[2] != 0) {
      (**(code **)(*param_1 + 0x20))(param_1,7,local_1c);
    }
    (**(code **)(*(int *)*param_2 + 0x44))(param_1 + 8);
    uVar2 = (**(code **)(*(int *)*param_2 + 4))((int *)*param_2);
  }
  return uVar2 & 0xffffff00;
}
