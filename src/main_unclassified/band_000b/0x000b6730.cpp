/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 622F0ECC574FBD42399B5AA0E9AD10A3BB03E306B46D5109B251521DF4FFF04D
 * Entry: 0x000b6730, Ghidra index: 2193, label: FUN_000b6730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000bb9d0(int *param_1);
extern float10 FUN_000b28e0(int param_1);
extern float10 FUN_000b2870(int param_1);

extern uint32_t DAT_0046d064;
void FUN_000b6730(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  int unaff_retaddr;
  undefined4 uVar4;
  float fVar5;
  
  *(int *)(param_1 + 0xa0) = param_2;
  *(undefined4 *)(param_1 + 0x94) = 0x7fffffff;
  if (param_2 == 0) {
    return;
  }
  *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x80) + 4.0;
  *(undefined4 *)(param_1 + 0x7c) = 0x40e00000;
  FUN_000bb9d0(*(undefined4 *)(param_1 + 100));
  (**(code **)(**(int **)(param_1 + 100) + 0x14))(0x3f800000);
  *(bool *)(unaff_retaddr + 0x9c) = *(int *)(param_1 + 4) != DAT_0046d064;
  if ((*(char *)(unaff_retaddr + 0x9c) == '\0') || (param_2 == 0)) goto LAB_000b6821;
  switch(param_2) {
  case 1:
    uVar4 = *(undefined4 *)(unaff_retaddr + 0x68);
    break;
  case 2:
    goto LAB_000b6821;
  case 3:
    uVar4 = *(undefined4 *)(unaff_retaddr + 0x68);
    break;
  case 4:
    uVar4 = *(undefined4 *)(unaff_retaddr + 0x68);
    break;
  case 5:
LAB_000b6821:
    uVar4 = *(undefined4 *)(unaff_retaddr + 0x68);
    break;
  case 6:
    uVar4 = *(undefined4 *)(unaff_retaddr + 0x68);
    break;
  default:
    uVar4 = *(undefined4 *)(unaff_retaddr + 0x68);
  }
  FUN_000bb9d0(uVar4);
  (**(code **)(**(int **)(unaff_retaddr + 0x68) + 0x14))(0x3f800000);
  sVar1 = *(short *)(*(int *)(in_ECX + 100) + 0xe);
  fVar3 = (float10)FUN_000b28e0(in_ECX + 0x2c);
  fVar5 = (float)fVar3;
  fVar3 = (float10)FUN_000b2870(in_ECX + 0x2c);
  iVar2 = *(int *)(in_ECX + 100);
  *(short *)(iVar2 + 4) = (short)(int)(((float10)fVar5 - fVar3) - (float10)(int)sVar1);
  *(undefined2 *)(iVar2 + 6) = 0;
  sVar1 = *(short *)(*(int *)(in_ECX + 0x68) + 0xe);
  fVar3 = (float10)FUN_000b28e0(in_ECX + 0x2c);
  fVar5 = (float)fVar3;
  fVar3 = (float10)FUN_000b2870(in_ECX + 0x2c);
  iVar2 = *(int *)(in_ECX + 0x68);
  *(short *)(iVar2 + 4) = (short)(int)(((float10)fVar5 - fVar3) - (float10)(int)sVar1);
  *(undefined2 *)(iVar2 + 6) = 0x1a;
  return;
}
