/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D13A4593CF98098C724C702246774027D1B32F51468E19FDD10E6D4BF13AAEC0
 * Entry: 0x001e01c0, Ghidra index: 6701, label: FUN_001e01c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001e01c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00309650; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309650U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      puVar3 = param_3 + 5;
      *puVar3 = 0;
      if (param_1[5] == 0) {
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
      puVar2 = (undefined4 *)param_1[5];
      if (puVar2 != (undefined4 *)0x0) {
        *(undefined4 *)*puVar3 = *puVar2;
      }
      FUN_001e0dd0(param_3 + 6);
      param_3[10] = param_1[10];
      piVar1 = param_3 + 0xb;
      *piVar1 = 0;
      if (param_1[0xb] == 0) {
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
      puVar3 = (undefined4 *)param_1[0xb];
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined4 *)*piVar1 = *puVar3;
      }
      FUN_001bddb0(param_3 + 0xc);
      FUN_001cca00(param_3 + 0x10);
    }
    param_3 = param_3 + 0x14;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
