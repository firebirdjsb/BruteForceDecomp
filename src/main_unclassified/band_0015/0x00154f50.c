/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 65072FEFB9A5CE002F1C2B2F3721CA9094A8E6F9EB5EDAA3DD4B37C17A51DC07
 * Entry: 0x00154f50, Ghidra index: 4455, label: FUN_00154f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443310;
int * FUN_00154f50(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  int in_ECX;
  int iVar6;
  int *piStack_8;
  byte bStack_4;
  
  piVar2 = param_2;
  if ((*(int *)(in_ECX + 200) == 0) && (*(int *)(in_ECX + 4) != 3)) {
    (**(code **)(*param_2 + 0xa0))();
    (**(code **)*piVar2)(1);
    return (int *)0x0;
  }
  iVar6 = -1;
  if ((*(int *)(in_ECX + 4) != 3) &&
     ((iVar6 = (**(code **)(*DAT_00443310 + 0x68))(DAT_00443310,*(int *)(in_ECX + 200)), iVar6 == 0
      || (iVar6 == -1)))) {
    if (param_2 == (int *)0x0) {
      return (int *)0x0;
    }
    (**(code **)*param_2)(1);
    return (int *)0x0;
  }
  piVar2 = (int *)FUN_001548b0(param_1,param_2);
  if (iVar6 != -1) {
    (**(code **)(*piVar2 + 0x28))(iVar6);
  }
  cVar1 = *(char *)(in_ECX + 0xd0);
  *(char *)((int)piVar2 + 0x79) = cVar1;
  if (((cVar1 != '\0') && ((*(byte *)((int)piVar2 + 0x26) & 0x10) == 0)) && (piVar2[2] != 0)) {
    piVar3 = (int *)FUN_000e0350(piVar2[2],&param_2,piVar2);
    piVar2[5] = *piVar3;
    *(byte *)((int)piVar2 + 0x26) = *(byte *)((int)piVar2 + 0x26) | 0x10;
  }
  *(byte *)((int)piVar2 + 0x71) =
       *(byte *)((int)piVar2 + 0x71) ^
       ((char)(*(uint *)(in_ECX + 0xa8) >> 5) << 6 ^ *(byte *)((int)piVar2 + 0x71)) & 0x40;
  iVar4 = *(int *)(in_ECX + 0xd4);
  piVar2[0x45] = *(int *)(in_ECX + 0xd8);
  piVar2[0x44] = iVar4;
  FUN_0015b310(piVar2,*(undefined4 *)(in_ECX + 0x130),0);
  FUN_00224140(in_ECX + 0x18,piVar2 + 0x12);
  *(byte *)(piVar2 + 0x1c) =
       *(byte *)(piVar2 + 0x1c) ^
       ((char)(*(uint *)(in_ECX + 0xa8) >> 6) << 3 ^ *(byte *)(piVar2 + 0x1c)) & 8;
  if (*(int *)(in_ECX + 0x11c) != 0) {
    bStack_4 = bStack_4 | 3;
    piStack_8 = piVar2;
    iVar4 = FUN_0017beb0((int *)(in_ECX + 0x11c));
    if (iVar4 != 0) {
      FUN_00178e50(&piStack_8);
    }
  }
  if (*(char *)(in_ECX + 0x24) != '\0') {
    FUN_00158190();
  }
  if (iVar6 != -1) {
    (**(code **)(*piVar2 + 0xb8))(0x3f800000);
  }
  bVar5 = *(byte *)((int)piVar2 + 0x71) ^
          ((char)(*(uint *)(in_ECX + 0xa8) >> 0xc) << 2 ^ *(byte *)((int)piVar2 + 0x71)) & 4;
  *(byte *)((int)piVar2 + 0x71) = bVar5;
  *(byte *)((int)piVar2 + 0x71) = ((char)(*(uint *)(in_ECX + 0xa8) >> 0xd) << 3 ^ bVar5) & 8 ^ bVar5
  ;
  FUN_0010bc40();
  if (*(float *)(in_ECX + 0x140) != 0.0) {
    piVar2[0x6a] = *(int *)(in_ECX + 0x140);
  }
  return piVar2;
}
