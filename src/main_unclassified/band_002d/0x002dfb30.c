/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 975EF73BA9483BA090A7790CC2804B9699C08FA462C0BAD3E5ED3B9A0B8CB4A8
 * Entry: 0x002dfb30, Ghidra index: 10342, label: FUN_002dfb30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dfb30(void)

{
  float fVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_ESI;
  
  iVar2 = unaff_EBX * 0x10 + *(int *)(unaff_ESI + 8);
  FUN_002e0090(iVar2 + 0x10,*(undefined4 *)(unaff_ESI + 0xc),iVar2);
  *(int *)(unaff_ESI + 0xc) = *(int *)(unaff_ESI + 0xc) + -0x10;
  iVar2 = *(int *)(unaff_ESI + 0x58) + -1;
  *(int *)(unaff_ESI + 0x58) = iVar2;
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  if (1 < iVar2) {
    fVar1 = *(float *)(*(int *)(unaff_ESI + 0xc) + -0xc) - *(float *)(*(int *)(unaff_ESI + 8) + 4);
    *(float *)(unaff_ESI + 0x5c) = fVar1;
    *(float *)(unaff_ESI + 0x60) = 1.0 / fVar1;
  }
  return;
}
