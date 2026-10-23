/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3341C812B4741FD954976CA4F6E63E44231729ABC695A63F6DA1415F681D82C8
 * Entry: 0x000f8ab0, Ghidra index: 3120, label: FUN_000f8ab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c0658;
extern uint32_t DAT_0040163c;
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469aac;
extern uint32_t DAT_00469b58;
extern uint32_t UNK_00245356;
extern char s_d__demos_xbe_0040cd48[];
/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_000f8ab0(int param_1)

{
  undefined *puVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  undefined1 uVar8;
  undefined1 local_c2d;
  uint local_c2c;
  uint auStack_c28 [8];
  undefined4 local_c08 [769];
  
  puVar1 = *(undefined **)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 4);
  local_c2d = 1;
  if (puVar1 == (undefined *)0x16f9270e) {
    puVar7 = local_c08;
    for (iVar6 = 0x300; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    XAPILIB__XLaunchNewImageA(s_d__demos_xbe_0040cd48,local_c08);
  }
  else if (puVar1 == (undefined *)0xeec14341) {
    local_c2c = 0x17506391;
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x54))(&local_c2c);
  }
  else if (puVar1 == (undefined *)0x14546f18) {
    local_c2c = 0x120785ef;
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x54))(&local_c2c);
  }
  else if (puVar1 == (undefined *)0xe33aac9b) {
    local_c2c = 0xefb18d28;
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x54))(&local_c2c);
  }
  else if ((puVar1 == (undefined *)0x16c06c82) || (puVar1 == (undefined *)0xe610311)) {
    piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    (**(code **)(*piVar5 + 0x14))(*(undefined4 *)(param_1 + 4));
  }
  else if ((puVar1 == (undefined *)0x14398e21) || (puVar1 == (undefined *)0xeac090f8)) {
    piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
    local_c2c = ((*piVar5 != 0x17506391) - 1 & 0xf29a5cfd) + 0xc0ef012;
    puVar3 = (uint *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    auStack_c28[1] = 0xc0ef012;
    auStack_c28[0] = *puVar3;
    auStack_c28[2] = 0xcc05846;
    uVar4 = FUN_001e97c0(iVar2,*(undefined4 *)(iVar2 + 0x60),0);
    uVar4 = FUN_001e97c0(uVar4);
    (**(code **)(auStack_c28[0] + 0x38))(auStack_c28 + 1,uVar4);
  }
  else if ((puVar1 == (undefined *)0x1ffd6617) || (puVar1 == (undefined *)0xec829834)) {
    puVar3 = (uint *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    auStack_c28[0] = 0x14bb3852;
    auStack_c28[2] = 0x14bb3852;
    local_c2c = *puVar3;
    auStack_c28[1] = 0xcc05846;
    uVar4 = FUN_001e97c0(iVar2,*(undefined4 *)(iVar2 + 0x60),0);
    uVar4 = FUN_001e97c0(uVar4);
    (**(code **)(local_c2c + 0x38))(auStack_c28 + 2,uVar4);
  }
  else if (((puVar1 == (undefined *)0x13d713e1) || (puVar1 == (undefined *)0x1ca5aec0)) ||
          (puVar1 == (undefined *)0x1a08f6c5)) {
    iVar6 = (**(code **)(**(int **)(DAT_00469aac + 0xbec) + 0x34))();
    if (iVar6 == 1) {
      iVar6 = FUN_000f6ed0();
      local_c2c = *(uint *)(&DAT_0040163c + iVar6 * 4);
    }
    else {
      iVar6 = FUN_000f6e80();
      local_c2c = *(uint *)(&DAT_0040163c + iVar6 * 4);
    }
    piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    auStack_c28[1] = 0xfa796b36;
    auStack_c28[2] = *piVar5;
    auStack_c28[0] = 0xcc05846;
    uVar4 = FUN_001e97c0(iVar2,*(undefined4 *)(iVar2 + 0x60),0);
    uVar4 = FUN_001e97c0(uVar4);
    (**(code **)(auStack_c28[2] + 0x38))(auStack_c28 + 1,uVar4);
  }
  else if (((puVar1 == (undefined *)0xf3d3a8eb) || (puVar1 == (undefined *)0x6c06bc9)) ||
          (puVar1 == (undefined *)0xe02b2391)) {
    local_c2d = FUN_000f8120(*(undefined4 *)(iVar2 + 0xa8),param_1);
  }
  else if (puVar1 == (undefined *)0xfaaf9b2b) {
    FUN_000f7f30();
  }
  else if (puVar1 == &UNK_00245356) {
    FUN_000f7230();
  }
  else if (puVar1 == (undefined *)0x1b744c5f) {
    FUN_000f7140(iVar2);
  }
  else if (puVar1 == (undefined *)0xf9717796) {
    FUN_000f8600();
  }
  else if (puVar1 == (undefined *)0x302447f) {
    FUN_000f8050();
  }
  if ((*(int *)(iVar2 + 0x24) == -0xdd7fbd1) && (*(int *)(param_1 + 0x24) != -0xe16fd69)) {
    DAT_003c0658 = FUN_000f6b70();
    FUN_000f77e0(iVar2,DAT_003c0658);
  }
  iVar2 = *(int *)(iVar2 + 0x24);
  if (((iVar2 == -0x68d7769) || (iVar2 == 0x1854a812)) || (iVar2 == -0x13ff2806)) {
    iVar2 = *(int *)(param_1 + 0x24);
    if (((iVar2 == -0x1d6d52c0) || (iVar2 == -0x1d382ec)) ||
       (local_c2c = local_c2c & 0xffffff00, iVar2 == -0x2461dc1)) {
      local_c2c = CONCAT31(local_c2c._1_3_,1);
    }
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x244))(local_c2c);
    iVar2 = *(int *)(param_1 + 0x24);
    if (((iVar2 == -0x1d6d52c0) || (iVar2 == -0x1d382ec)) ||
       ((iVar2 == -0x2461dc1 ||
        (((iVar2 == -0x1bf0d82d || (iVar2 == -0x94642b5)) || (iVar2 == -0x1285813e)))))) {
      *(undefined1 *)(DAT_0046995c + 0x2e27) = 1;
      return local_c2d;
    }
  }
  else {
    if ((iVar2 == -0x8ba06b6) || (iVar2 == -0xdd7fbd1)) {
      *(undefined1 *)(DAT_0046995c + 0x2e27) = 0;
      return local_c2d;
    }
    if (*(int *)(param_1 + 0x24) == -0x9dcc655) {
      return 0;
    }
    if (iVar2 == 0xaca4a56) {
      piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      uVar8 = 0;
      (**(code **)(*piVar5 + 0xc))(0,0);
      if (DAT_00469aac == 0) {
        piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
        (**(code **)(*piVar5 + 0x74))();
        piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
        (**(code **)(*piVar5 + 0x20))();
        (**(code **)(**(int **)(DAT_00469b58 + 8) + 300))();
        auStack_c28[0] = auStack_c28[0] & 0xffffffe0 | 1;
        auStack_c28[2] = 0;
        auStack_c28[3] = 0;
        auStack_c28[4] = 0;
        auStack_c28[1] = 0xf745f94a;
        (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x20))(auStack_c28);
        (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x8c))(&stack0xfffff3c8);
        return uVar8;
      }
      FUN_00084f50(1);
      return (char)((uint)unaff_ESI >> 0x18);
    }
    if (iVar2 == 0x14804026) {
      FUN_000f39c0(0);
    }
  }
  return local_c2d;
}
