/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3067B2F61F606A694994FE71868D5F7A4D25CAFC70C7D8F9D14B33865EF7C13
 * Entry: 0x0021ec20, Ghidra index: 7555, label: FUN_0021ec20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee source declares FUN_000a3d50(void).  Xbox callback/register ABI remains
 * ABI_UNVERIFIED; this forward declaration is for C11 source inspection only. */
extern void FUN_000a3d50(void);
void FUN_0021ec20(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int unaff_ESI;
  
  iVar4 = *(int *)(unaff_ESI + 0x78);
  *(undefined4 *)(unaff_ESI + 0x98) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0xf8) = 0x1e;
  *(undefined1 *)(unaff_ESI + 0x104) = 0;
  iVar1 = thunk_FUN_002ea01d(iVar4 * 0x24);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0001fe40(iVar1,0x24,iVar4,FUN_000a3d50);
  }
  uVar5 = 0;
  *(int *)(unaff_ESI + 0xd0) = iVar1;
  if (*(int *)(unaff_ESI + 0x78) != 0) {
    iVar4 = 0;
    do {
      puVar2 = (undefined4 *)(*(int *)(unaff_ESI + 0xd0) + iVar4);
      puVar2[2] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2 = (undefined4 *)(*(int *)(unaff_ESI + 0xd0) + 0xc + iVar4);
      puVar2[2] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      *(undefined4 *)(*(int *)(unaff_ESI + 0xd0) + 0x1c + iVar4) = 0x3f800000;
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x24;
    } while (uVar5 < *(uint *)(unaff_ESI + 0x78));
  }
  *(undefined4 *)(unaff_ESI + 0xd4) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0xd8) = 0;
  *(undefined4 *)(unaff_ESI + 0xdc) = 0;
  *(undefined4 *)(unaff_ESI + 0xe0) = 0;
  *(undefined4 *)(unaff_ESI + 0xe4) = 0;
  *(undefined4 *)(unaff_ESI + 0xe8) = 0x3f800000;
  uVar3 = thunk_FUN_002ea01d(*(int *)(unaff_ESI + 0x78) << 2);
  *(undefined4 *)(unaff_ESI + 0xec) = uVar3;
  uVar3 = thunk_FUN_002ea01d(*(int *)(unaff_ESI + 0x78) << 2);
  *(undefined4 *)(unaff_ESI + 0xf0) = uVar3;
  uVar3 = thunk_FUN_002ea01d(*(int *)(unaff_ESI + 0x78) << 2);
  *(undefined4 *)(unaff_ESI + 0xf4) = uVar3;
  return;
}
