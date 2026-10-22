/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A3A6ED435E6026A148F128373536D9683F6A941566014CB4DF038EEE42D98109
 * Entry: 0x002dce00, Ghidra index: 10310, label: FUN_002dce00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dce00(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EDI;
  
  uVar3 = (uint)*(ushort *)(unaff_EDI + 0x32);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    puVar1 = *(uint **)(*(int *)(unaff_EDI + 0x34) + uVar3 * 4);
    *puVar1 = *puVar1 & 0xfffffffd | 1;
    iVar2 = FUN_002dcdb0();
    if (iVar2 == 0) {
      puVar1[0x2d] = 0;
      puVar1[0x2c] = 0;
      puVar1[0x2b] = 0;
      puVar1[0x29] = 0;
      puVar1[0x28] = 0;
      puVar1[0x27] = 0;
    }
  }
  return;
}
