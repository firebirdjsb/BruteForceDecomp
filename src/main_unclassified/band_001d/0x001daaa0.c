/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3796A8C34B019C2F6A5E9FFD06993D1C0585ECDD1EB6A932687F3BEC7314A715
 * Entry: 0x001daaa0, Ghidra index: 6505, label: FUN_001daaa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001daaa0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00309240;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *in_ECX;
      param_1[1] = in_ECX[1];
      param_1[2] = in_ECX[2];
      param_1[3] = in_ECX[3];
      param_1[4] = in_ECX[4];
      puVar1 = param_1 + 5;
      *puVar1 = 0;
      if (in_ECX[5] == 0) {
        *puVar1 = 0;
      }
      else {
        iVar3 = FUN_002ea01d(4);
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_0001fdb0();
        }
        *puVar1 = uVar4;
      }
      puVar2 = (undefined4 *)in_ECX[5];
      if (puVar2 != (undefined4 *)0x0) {
        *(undefined4 *)*puVar1 = *puVar2;
      }
      FUN_001e0dd0(param_1 + 6);
    }
    param_1 = param_1 + 10;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
