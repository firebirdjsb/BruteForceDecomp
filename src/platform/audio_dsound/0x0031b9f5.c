/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3C404AB920D5C5144EE16F08CE1842255389C792C031A8C35C4AAAE622618DE3
 * Entry: 0x0031b9f5, Ghidra index: 12305, label: FUN_0031b9f5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0031b9f5(uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = MmGetPhysicalAddress(param_1);
  if (param_3 != (uint *)0x0) {
    *param_3 = param_1 & 0xfff;
  }
  if (param_4 == (uint *)0x0) {
    return iVar1;
  }
  uVar4 = 0x1000 - (param_1 & 0xfff);
  if (uVar4 < param_2) {
    iVar3 = uVar4 + iVar1;
    do {
      iVar2 = MmGetPhysicalAddress((param_1 - iVar1) + iVar3);
      if (iVar3 != iVar2) break;
      uVar4 = uVar4 + 0x1000;
      iVar3 = iVar3 + 0x1000;
    } while (uVar4 < param_2);
    if (uVar4 < param_2) goto LAB_0031ba5e;
  }
  uVar4 = param_2;
LAB_0031ba5e:
  *param_4 = uVar4;
  return iVar1;
}
