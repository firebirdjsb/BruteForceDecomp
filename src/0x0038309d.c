/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DFD283462CCD8D86C9B313C8B97EFFCF7BC7C8E060788D6BC0CBEE05287DB85E
 * Entry: 0x0038309d, Ghidra index: 13612, label: FUN_0038309d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0038309d(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_2 + 0xc);
  if ((uVar1 & 0x800) != 0) {
    *(uint *)(param_2 + 0xc) = uVar1 & 0xfffff7ff;
    if (param_1 == param_2 + 0xb8) {
      uVar3 = *(undefined4 *)(param_2 + 0xec);
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0xbc);
    }
    *(uint *)(param_2 + 0xc) = uVar1 & 0xfffff1ff;
    FUN_00381051(uVar3);
    FUN_00382e8a();
    return;
  }
  if ((-1 < *(int *)(param_1 + 4)) && ((uVar1 & 6) == 0)) {
    if (*(uint *)(param_2 + 0x6c) < *(uint *)(param_2 + 0x2c)) {
      FUN_0038319a();
      return;
    }
    if (param_1 == param_2 + 0xb8) {
      uVar2 = uVar1 & 0xfffffdff;
      uVar1 = uVar1 & 0x400;
    }
    else {
      uVar2 = uVar1 & 0xfffffbff;
      uVar1 = uVar1 & 0x200;
    }
    *(uint *)(param_2 + 0xc) = uVar2;
    if (uVar1 != 0) {
      return;
    }
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x200;
    FUN_00383014();
    return;
  }
  iVar4 = param_2 + 0xb8;
  if (param_1 == iVar4) {
    *(uint *)(param_2 + 0xc) = uVar1 & 0xfffffdff;
    if ((uVar1 & 0x400) == 0) {
LAB_00383184:
      FUN_00381051(*(undefined4 *)(param_1 + 4));
      FUN_00382e8a();
      return;
    }
    *(uint *)(param_2 + 0xc) = uVar1 & 0xfffffdff | 0x800;
    iVar4 = param_2 + 0xe8;
  }
  else {
    *(uint *)(param_2 + 0xc) = uVar1 & 0xfffffbff;
    if ((uVar1 & 0x200) == 0) goto LAB_00383184;
    *(uint *)(param_2 + 0xc) = uVar1 & 0xfffffbff | 0x800;
  }
  FUN_00380fb1(iVar4);
  return;
}
