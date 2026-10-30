/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BCB70B2B3F66AC12D2862FDB20B1561D35C202BF4DDDDD2A634F6CAF6AF3B5D
 * Entry: 0x00317503, Ghidra index: 12179, label: FUN_00317503
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00317503(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (param_1 != 0) {
    *(byte *)((int)in_ECX + 0x17) = *(byte *)((int)in_ECX + 0x17) | 1;
  }
  iVar1 = in_ECX[0x1e];
  if ((*(uint *)(iVar1 + 8) & 0x2000) != 0) {
    *(ushort *)((int)in_ECX + 0x16) = *(ushort *)((int)in_ECX + 0x16) | 0x43f;
  }
  if (param_1 != 0) {
    *(byte *)((int)in_ECX + 0x1a) = *(byte *)((int)in_ECX + 0x1a) | 0x80;
  }
  if ((*(uint *)(iVar1 + 8) & 0x182000) == 0) {
    *(byte *)((int)in_ECX + 0x15) = *(byte *)((int)in_ECX + 0x15) | 0xe0;
  }
  if ((*(uint *)(iVar1 + 8) & 0x2000) == 0) {
    iVar2 = (**(code **)(*in_ECX + 0x10))();
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  else {
    *(undefined1 *)(in_ECX + 0x19) = 1;
  }
  if ((*(byte *)(in_ECX[0x1e] + 8) & 0x10) != 0) {
    iVar2 = FUN_003148cf(0x626f5344,0x54,1);
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      if (in_ECX[2] != 0) {
        iVar3 = in_ECX[2] + 0x58;
      }
      iVar3 = FUN_00314dcf(iVar3,in_ECX[0x1e] + 8,*(undefined4 *)(in_ECX[0x1e] + 0xb4));
    }
    in_ECX[0x1c] = iVar3;
    iVar2 = (-(uint)(iVar3 != 0) & 0x7ff8fff2) + 0x8007000e;
    if (-1 < iVar2) {
      iVar3 = FUN_003148cf(0x626f5344,0x1c,1);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        if (in_ECX[2] == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = in_ECX[2] + 0x6c;
        }
        iVar3 = FUN_00319dcf(iVar3,*(int *)(in_ECX[0x1e] + 0xb4) + 0x4c);
      }
      in_ECX[0x1d] = iVar3;
      iVar2 = (-(uint)(iVar3 != 0) & 0x7ff8fff2) + 0x8007000e;
    }
  }
  return iVar2;
}
