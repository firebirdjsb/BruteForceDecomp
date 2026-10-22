/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B04C453010D16F4C506EBE3278AA369F74015FD3FB9265BE499638DFC9BD0C3
 * Entry: 0x0005b140, Ghidra index: 916, label: FUN_0005b140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005b140(undefined4 param_1)

{
  byte bVar1;
  undefined4 *in_ECX;
  int unaff_ESI;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(unaff_ESI + 0x10);
  *(byte *)(unaff_ESI + 0x10) = (~(bVar1 >> 3) << 3 ^ bVar1) & 8 ^ bVar1;
  *in_ECX = 0;
  if (*(int *)(unaff_ESI + 8) != 0) {
    if ((*(byte *)(unaff_ESI + 0x10) & 8) == 0) {
      uVar2 = 0x44;
    }
    else {
      uVar2 = 0x38;
    }
    FUN_0005af30(uVar2,param_1,*(undefined4 *)(unaff_ESI + 0xc));
  }
  bVar1 = *(byte *)(unaff_ESI + 0x10);
  *(byte *)(unaff_ESI + 0x10) = (~(bVar1 >> 3) << 3 ^ bVar1) & 8 ^ bVar1;
  return;
}
