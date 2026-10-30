/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20CD887F1CE653DBEF3526D774BA61003FC537C6DEDC9EA0F74ED111E8F1466A
 * Entry: 0x001da7d0, Ghidra index: 6502, label: FUN_001da7d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001da7d0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00309270; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309270U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *in_ECX;
      param_1[1] = in_ECX[1];
      param_1[2] = in_ECX[2];
      param_1[3] = in_ECX[3];
      param_1[4] = in_ECX[4];
      puVar3 = param_1 + 5;
      *puVar3 = 0;
      if (in_ECX[5] == 0) {
        *puVar3 = 0;
      }
      else {
        iVar5 = FUN_002ea01d(4);
        if (iVar5 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_0001fdb0();
        }
        *puVar3 = uVar4;
      }
      puVar2 = (undefined4 *)in_ECX[5];
      if (puVar2 != (undefined4 *)0x0) {
        *(undefined4 *)*puVar3 = *puVar2;
      }
      FUN_001e0dd0(param_1 + 6);
      param_1[10] = in_ECX[10];
      piVar1 = param_1 + 0xb;
      *piVar1 = 0;
      if (in_ECX[0xb] == 0) {
        *piVar1 = 0;
      }
      else {
        iVar5 = FUN_002ea01d(4);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          FUN_0001fdc0();
        }
        *piVar1 = iVar5;
      }
      puVar3 = (undefined4 *)in_ECX[0xb];
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined4 *)*piVar1 = *puVar3;
      }
      FUN_001bddb0(param_1 + 0xc);
      FUN_001cca00(param_1 + 0x10);
    }
    param_1 = param_1 + 0x14;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
