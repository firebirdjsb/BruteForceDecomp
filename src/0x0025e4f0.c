/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C152491DFD13305CD5DA5783324C0233413446F4056F848DB434F773B0C52EE8
 * Entry: 0x0025e4f0, Ghidra index: 8592, label: FUN_0025e4f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0025e4f0(void)

{
  uint in_EAX;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_EBX;
  
  if (*(int *)(unaff_EBX + 8) != 0) {
    uVar3 = *(uint *)(unaff_EBX + 0xc) & 0x80000fff;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffff000) + 1;
    }
    iVar1 = (*(uint *)(unaff_EBX + 0xc) - uVar3) + 0x1000;
    *(int *)(unaff_EBX + 0xc) = iVar1;
    XAPILIB__XPhysicalProtect(*(int *)(unaff_EBX + 8),iVar1,4);
    FUN_00237e40();
    *(undefined4 *)(unaff_EBX + 8) = 0;
  }
  *(uint *)(unaff_EBX + 0xc) = in_EAX;
  if (in_EAX != 0) {
    uVar3 = in_EAX & 0x80000fff;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffff000) + 1;
    }
    uVar2 = FUN_00237da0();
    *(undefined4 *)(unaff_EBX + 8) = uVar2;
    XAPILIB__XPhysicalProtect(uVar2,in_EAX + (0x1000 - uVar3),0x404);
  }
  return *(int *)(unaff_EBX + 8) != 0;
}
