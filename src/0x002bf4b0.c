/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A94360360D1D1698AB677324AC90CC8797425575112A87F429E8231B915833C2
 * Entry: 0x002bf4b0, Ghidra index: 9998, label: FUN_002bf4b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002bf4b0(int param_1,int param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  uint in_EAX;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = in_ECX + 0x18;
  iVar4 = in_ECX + 0x34;
  sVar1 = (short)in_ECX;
  if (*(int *)(param_2 + 4) == 2) {
    *(int *)(in_ECX + 0x44) = param_2;
    *(uint *)(in_ECX + 0x48) = in_EAX;
    *(short *)(in_ECX + 0x4c) = sVar1 - (short)iVar4;
    *(undefined2 *)(in_ECX + 0x4e) = 0;
    (**(code **)(**(int **)(param_2 + 0x7c) + 0x1c))
              ((uint *)(in_EAX & 0xfffffff0) + ((*(uint *)(in_EAX & 0xfffffff0) & 0xfff) + 1) * -4);
  }
  else if (*(int *)(param_2 + 4) == 3) {
    if ((*(int *)(param_1 + 4) != 3) ||
       (iVar3 = iVar4, *(uint *)(param_1 + 0x9c) < *(uint *)(param_2 + 0x9c))) {
      iVar3 = iVar5;
      iVar5 = iVar4;
    }
    *(short *)(iVar3 + 0x18) = sVar1 - (short)iVar3;
    *(int *)(iVar3 + 0x10) = param_2;
    *(uint *)(iVar3 + 0x14) = in_EAX;
    *(undefined2 *)(iVar3 + 0x1a) = 3;
    iVar4 = iVar3;
  }
  else {
    _DAT_00000000 = 0;
  }
  sVar2 = (short)iVar5;
  if (*(int *)(param_1 + 4) == 2) {
    *(uint *)(iVar5 + 0x14) = param_3;
    *(short *)(iVar5 + 0x18) = sVar1 - sVar2;
    *(int *)(iVar5 + 0x10) = param_1;
    *(undefined2 *)(iVar5 + 0x1a) = 0;
    (**(code **)(**(int **)(param_1 + 0x7c) + 0x1c))
              ((uint *)(param_3 & 0xfffffff0) + ((*(uint *)(param_3 & 0xfffffff0) & 0xfff) + 1) * -4
              );
  }
  else if (*(int *)(param_1 + 4) == 3) {
    *(short *)(iVar5 + 0x18) = sVar1 - sVar2;
    *(int *)(iVar5 + 0x10) = param_1;
    *(uint *)(iVar5 + 0x14) = param_3;
    *(undefined2 *)(iVar5 + 0x1a) = 3;
  }
  else {
    _DAT_00000000 = 0;
  }
  *(short *)(iVar5 + 0x18) = sVar1 - sVar2;
  *(short *)(iVar4 + 0x18) = sVar1 - (short)iVar4;
  *(float *)(in_ECX + 0x50) = *(float *)(param_1 + 0x88) + *(float *)(param_2 + 0x88);
  if ((*(int *)(param_1 + 0x18) == 0) && (*(int *)(param_2 + 0x18) == 0)) {
    FUN_002bfc20(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10));
    return;
  }
  *(uint *)(in_ECX + 0x14) = *(uint *)(in_ECX + 0x14) & 0xffffdfff | 0x1000;
  FUN_002bfd20();
  return;
}
