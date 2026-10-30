/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA63F6AF95A4F3216C90CA6DFE624335F130A4BB0A538AB70B3D70BEE673C12F
 * Entry: 0x0005e8b0, Ghidra index: 989, label: FUN_0005e8b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005e8b0(int *param_1,char param_2)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 auStack_8 [4];
  int iStack_4;
  
  piVar4 = param_1;
  iVar2 = (**(code **)(*param_1 + 0xf4))();
  if (((((param_2 == '\0') ||
        (iVar3 = (**(code **)(**(int **)(piVar4[2] + 0xbec) + 0xc))(piVar4), iVar3 == 0)) ||
       (*(int *)(iVar3 + 0x24) == 0)) || ((*(byte *)(*(int *)(iVar3 + 0x24) + 0x14) & 2) == 0)) &&
     (iVar2 != 0)) {
    if (*(int *)(iVar2 + 0x58) == 4) {
      iVar2 = *(int *)(in_EAX + 8);
      piVar4 = (int *)FUN_0005ebc0(*(undefined4 *)(in_EAX + 4),iVar2,&param_1);
      if (*piVar4 == iVar2) {
        FUN_0005e1e0(in_EAX);
        iVar2 = *(int *)(in_EAX + 4);
        if (((iVar2 == 0) || (*(int *)(in_EAX + 8) - iVar2 >> 3 != 1)) ||
           ((*(int *)(iVar2 + 4) == 0 || (cVar1 = FUN_00020230(), cVar1 == '\0')))) {
          FUN_0004b5f0();
          FUN_0005eab0();
        }
        else {
          FUN_0004b5f0();
          FUN_0005eb10(*(undefined4 *)(in_EAX + 4),auStack_8);
        }
        if (iStack_4 != 0) {
          FUN_0008f6e0();
          return;
        }
      }
    }
    else if (*(int *)(iVar2 + 0x58) == 1) {
      iVar2 = *(int *)(in_EAX + 0x18);
      piVar5 = (int *)FUN_0005ebc0(*(undefined4 *)(in_EAX + 0x14),iVar2,&param_1);
      if (*piVar5 == iVar2) {
        FUN_0005e670(in_EAX + 0x10,piVar4);
        return;
      }
    }
    else {
      FUN_0005e600();
    }
  }
  return;
}
