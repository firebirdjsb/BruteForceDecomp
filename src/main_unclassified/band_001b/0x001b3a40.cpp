/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2611D6BCD5183442C27C64F861BB1105ED17F65D18B0833ED573022279E60F84
 * Entry: 0x001b3a40, Ghidra index: 5648, label: FUN_001b3a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b3a40(void)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  undefined4 uVar3;
  uint uVar4;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(unaff_ESI + 8) - iVar1) / 0x2c;
  }
  if (uVar4 < in_EAX) {
    FUN_001bf8d0();
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_ESI + 8), in_EAX < (uint)((iVar2 - iVar1) / 0x2c)))
     && (in_EAX * 0x2c + iVar1 != iVar2)) {
    uVar3 = FUN_001d7f40(iVar2);
    *(undefined4 *)(unaff_ESI + 8) = uVar3;
  }
  return;
}
