/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9711C221B367E5D5B8415D5EE756A799845204C65DDFB81A9315B3A08C835C74
 * Entry: 0x0022f5e0, Ghidra index: 7738, label: FUN_0022f5e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0022f5e0(void)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  uint uVar3;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x228);
  uVar3 = in_EAX & 0xffffff00;
  if ((*(int *)(iVar1 + 0x140) != 0) &&
     (1 < (uint)(*(int *)(iVar1 + 0x144) - *(int *)(iVar1 + 0x140) >> 2))) {
    uVar3 = *(int *)(unaff_ESI + 0x1fc) + 1;
    *(uint *)(unaff_ESI + 0x1fc) = uVar3;
    iVar2 = *(int *)(iVar1 + 0x140);
    if ((iVar2 == 0) || ((uint)(*(int *)(iVar1 + 0x144) - iVar2 >> 2) <= uVar3)) {
      *(undefined4 *)(unaff_ESI + 0x1fc) = 0;
    }
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return uVar3;
}
