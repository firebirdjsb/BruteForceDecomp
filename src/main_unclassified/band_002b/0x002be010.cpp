/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D59DBCCE4BF5521CB0A4B4EB46A25F9182A22133BB14E84C8BDB9924A9BABE8E
 * Entry: 0x002be010, Ghidra index: 9965, label: FUN_002be010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002be010(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  
  iVar1 = *(ushort *)(in_EAX + 0x22) - 1;
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)(*(int *)(in_EAX + 0x24) + iVar1 * 4);
    do {
      if (*(int *)*puVar2 == unaff_ESI) goto LAB_002be035;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar1);
  }
  FUN_002bd740(in_EAX,unaff_ESI);
LAB_002be035:
  FUN_002bd6f0(param_1);
  FUN_002be0e0();
  return;
}
