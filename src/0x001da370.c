/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73F985275E017CCF1F68998B11980918E5741F5BA24EB6EB8F9BA4B2B5EBF0C5
 * Entry: 0x001da370, Ghidra index: 6496, label: FUN_001da370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001da370(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308790;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *in_ECX;
      FUN_0003d6c0(param_1 + 1,in_ECX + 1,in_ECX + 10);
      param_1[0xd] = in_ECX[0xd];
      param_1[0xe] = in_ECX[0xe];
      param_1[0xf] = in_ECX[0xf];
      piVar1 = param_1 + 0x10;
      *piVar1 = 0;
      if (in_ECX[0x10] == 0) {
        *piVar1 = 0;
      }
      else {
        iVar3 = FUN_002ea01d(4);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          FUN_0001fdc0();
        }
        *piVar1 = iVar3;
      }
      puVar2 = (undefined4 *)in_ECX[0x10];
      if (puVar2 != (undefined4 *)0x0) {
        *(undefined4 *)*piVar1 = *puVar2;
      }
    }
    param_1 = param_1 + 0x11;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
