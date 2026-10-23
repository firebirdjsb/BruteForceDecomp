/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8DB417ED3D1F680E5CDCCF5519FC55F285A9BEBFCFF829D575664B67E094732
 * Entry: 0x0029c280, Ghidra index: 9436, label: FUN_0029c280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0029c280(void)

{
  int iVar1;
  uint uVar2;
  int unaff_ESI;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 1;
  iVar1 = *(int *)(unaff_ESI + 4);
  while (iVar1 == 0x2c) {
    iVar1 = FUN_00296110();
    *(int *)(unaff_ESI + 4) = iVar1;
    if ((iVar1 == 0x3b) || (iVar1 == 0x7d)) break;
    FUN_0029c3f0();
    uVar3 = uVar3 + 1;
    uVar2 = uVar3 & 0x8000001f;
    bVar4 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar4 = (uVar2 - 1 | 0xffffffe0) == 0xffffffff;
    }
    if (bVar4) {
      FUN_00299580(0x1e,0x1f,0xffffffc0);
    }
    iVar1 = *(int *)(unaff_ESI + 4);
  }
  uVar2 = uVar3 & 0x8000001f;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xffffffe0) + 1;
  }
  if (0 < (int)uVar2) {
    FUN_00299580(0x1e,uVar2 - 1,uVar2 * -2);
  }
  return uVar3;
}
