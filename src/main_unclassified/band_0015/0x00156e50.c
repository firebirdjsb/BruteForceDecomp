/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86747D32A96745240DEAFF020C38840129710E1FDA1EE9B675F851D9EE414A7E
 * Entry: 0x00156e50, Ghidra index: 4482, label: FUN_00156e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fb4;
extern uint32_t PTR_LAB_003a4f50;
undefined4 FUN_00156e50(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  int unaff_ESI;
  int unaff_retaddr;
  undefined **ppuStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  iVar5 = (**(code **)(*(int *)(in_ECX + -0x1c0) + 0xf4))();
  if (iVar5 != 0) {
    piVar6 = (int *)(**(code **)(*(int *)(in_ECX + -0x1c0) + 0xf4))();
    (**(code **)(*piVar6 + 0x1c))(param_1);
  }
  FUN_00223050(param_1);
  if (*(int *)(param_1 + 0x14) == 0x4e) {
    if ((*(byte *)(in_ECX + -0x150) & 1) == 0) {
      (**(code **)(*(int *)(in_ECX + -0x1c0) + 0x144))(1);
      iVar5 = *(int *)(unaff_retaddr + 0x1c);
      iVar4 = *(int *)(iVar5 + 0x14);
      if (*(int *)(unaff_ESI + -0xe4) != iVar4) {
        FUN_0008f6a0(iVar4);
      }
      iVar5 = *(int *)(iVar5 + 0x1c);
      if (*(int *)(unaff_ESI + -0xdc) != iVar5) {
        FUN_0008f6a0(iVar5);
      }
      FUN_00157070(*(undefined4 *)(unaff_retaddr + 0x1c));
    }
  }
  else if (*(int *)(param_1 + 0x14) == 0x51) {
    if (*(int *)(in_ECX + -0x160) != 0) {
      FUN_001562d0();
    }
    iStack_8 = in_ECX + -0x1c0;
    ppuStack_14 = &PTR_LAB_003a3fb4;
    uStack_4 = 0xffffffff;
    uStack_10 = 9;
    uStack_c = 0;
    FUN_001fe3d0(&ppuStack_14);
    ppuStack_14 = &PTR_LAB_003a4f50;
    iVar5 = *(int *)(param_1 + 0x1c);
    uVar2 = *(undefined4 *)(iVar5 + 0x38);
    uVar3 = *(undefined4 *)(iVar5 + 0x34);
    *(undefined4 *)(in_ECX + -0xd8) = *(undefined4 *)(iVar5 + 0x30);
    *(undefined4 *)(in_ECX + -0xd4) = uVar3;
    *(undefined4 *)(in_ECX + -0xd0) = uVar2;
    uVar2 = *(undefined4 *)(iVar5 + 0x28);
    uVar3 = *(undefined4 *)(iVar5 + 0x2c);
    *(undefined4 *)(in_ECX + -0xcc) = *(undefined4 *)(iVar5 + 0x24);
    *(undefined4 *)(in_ECX + -200) = uVar2;
    *(undefined4 *)(in_ECX + -0xc4) = uVar3;
    FUN_0015b8f0(in_ECX + -0xcc,0x3727c5ac);
    fVar1 = *(float *)(iVar5 + 8);
    *(float *)(in_ECX + -0xcc) = *(float *)(in_ECX + -0xcc) * fVar1;
    *(ulonglong *)(in_ECX + -200) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(in_ECX + -200) >> 0x20) * fVar1,
                  (float)*(undefined8 *)(in_ECX + -200) * fVar1);
    *(undefined4 *)(in_ECX + -0xc0) = *(undefined4 *)(iVar5 + 0x54);
    FUN_00157070(iVar5);
    return 1;
  }
  return 1;
}
