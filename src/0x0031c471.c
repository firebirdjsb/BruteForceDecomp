/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5FE40A80706268ED43F2B833A78F64707082AD9EDF83B2C3BEA8F5A230B3E68C
 * Entry: 0x0031c471, Ghidra index: 12333, label: FUN_0031c471
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0031c471(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  
  FUN_003118f0();
  *(uint *)(in_ECX + 0xc) = param_1;
  *(undefined4 *)(in_ECX + 0x10) = param_2;
  *(undefined4 *)(in_ECX + 0x14) = param_3;
  iVar1 = FUN_00314868(0x100,0x1000,4,1);
  iVar3 = (-(uint)(iVar1 != 0) & 0x7ff8fff2) + 0x8007000e;
  *(int *)(in_ECX + 0x18) = iVar1;
  if (-1 < iVar3) {
    uVar2 = MmGetPhysicalAddress(iVar1);
    *(undefined4 *)(in_ECX + 0x1c) = uVar2;
    if ((param_1 & 1) != 0) {
      iVar1 = FUN_00314868(0x2000,0x1000,4,1);
      *(int *)(in_ECX + 0x20) = iVar1;
      iVar3 = (-(uint)(iVar1 != 0) & 0x7ff8fff2) + 0x8007000e;
    }
    if (-1 < iVar3) {
      FUN_0031c357();
    }
  }
  FUN_00311923();
  return iVar3;
}
