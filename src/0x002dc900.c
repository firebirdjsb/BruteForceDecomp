/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 978139B668897AF20D117E90B70EA87F84B784D499F55E4797412B4A77510A6A
 * Entry: 0x002dc900, Ghidra index: 10304, label: FUN_002dc900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dc900(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  puVar1 = *(undefined4 **)(param_2 + 0x20);
  iVar5 = 0;
  sVar4 = 0;
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    iVar2 = puVar1[0x10];
    if (iVar5 < *(short *)(param_2 + 0x4c)) {
      *(undefined2 *)(iVar2 + 0x48) = 0xffff;
    }
    else {
      iVar5 = iVar5 + 1;
      puVar3 = *(undefined4 **)(puVar1[4] + 0x90);
      if (((byte)*puVar3 & 0xc) == 4) {
        if (puVar3[0x18] == 0) {
LAB_002dc97e:
          iVar7 = 0;
        }
        else {
          uVar6 = FUN_002b2b80();
          iVar7 = FUN_002bee90(param_2,uVar6);
        }
      }
      else {
        iVar7 = puVar3[0x18];
        if ((iVar7 == 0) || (*(int *)(iVar7 + 0xc) != param_2)) goto LAB_002dc97e;
      }
      *(int *)(iVar2 + 0x50) = iVar7;
      puVar3 = *(undefined4 **)(puVar1[9] + 0x90);
      if (((byte)*puVar3 & 0xc) == 4) {
        if (puVar3[0x18] == 0) {
LAB_002dc9c6:
          iVar7 = 0;
        }
        else {
          uVar6 = FUN_002b2b80();
          iVar7 = FUN_002bee90(param_2,uVar6);
        }
      }
      else {
        iVar7 = puVar3[0x18];
        if ((iVar7 == 0) || (*(int *)(iVar7 + 0xc) != param_2)) goto LAB_002dc9c6;
      }
      *(int *)(iVar2 + 0x54) = iVar7;
      *(undefined4 *)(iVar2 + 0x5c) = puVar1[0x16];
      *(undefined4 *)(iVar2 + 0x58) = puVar1[0x19];
      if (*(ushort *)(param_1 + 0x24) <= *(ushort *)(param_1 + 0x26)) {
        FUN_002ccf80();
      }
      *(int *)(*(int *)(param_1 + 0x28) + (uint)*(ushort *)(param_1 + 0x26) * 4) = iVar2;
      *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
      *(short *)(iVar2 + 0x48) = sVar4;
      sVar4 = sVar4 + 1;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}
