/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D9575EF487F9BF803BD36B3699FF51B9F72FDE5AF0D7F594BC2DDD3DECE0525
 * Entry: 0x0005bca0, Ghidra index: 932, label: FUN_0005bca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0005bca0(void)

{
  uint uVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  int unaff_ESI;
  
  uVar1 = *(uint *)(unaff_ESI + 4);
  uVar2 = 0;
  if (uVar1 != 0) {
    if (uVar1 != 0) goto LAB_0005bcb4;
    iVar3 = 0;
    while (*(int *)(iVar3 + 4) != in_EAX) {
      uVar2 = uVar2 + 1;
      if (uVar1 <= uVar2) goto LAB_0005bceb;
LAB_0005bcb4:
      iVar3 = *(int *)(*(int *)(unaff_ESI + 8) + uVar2 * 4);
    }
    if (uVar2 != 0xffffffff) {
      if (uVar2 < uVar1) {
        iVar3 = *(int *)(*(int *)(unaff_ESI + 8) + uVar2 * 4);
      }
      else {
        iVar3 = 0;
      }
      if ((*(byte *)(iVar3 + 0x20) & 1) == 0) {
        iVar3 = *(int *)(iVar3 + 0xc);
      }
      else {
        iVar3 = *(int *)(iVar3 + 4);
      }
      if (iVar3 != 0) {
        return iVar3;
      }
    }
  }
LAB_0005bceb:
  uVar2 = 0;
  if (uVar1 != 0) {
    if (uVar1 == 0) goto LAB_0005bd06;
    do {
      iVar3 = *(int *)(*(int *)(unaff_ESI + 8) + uVar2 * 4);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x14) != 0)) {
        return *(int *)(iVar3 + 4);
      }
LAB_0005bd06:
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}
