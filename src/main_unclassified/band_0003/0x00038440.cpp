/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F8B20EAAA175B2E81D17710728C4D573C8F0EDB8F812A3D93EDAD4585BCCD01
 * Entry: 0x00038440, Ghidra index: 371, label: FUN_00038440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_000e1910(void);
extern void FUN_000389d0(void);

void FUN_00038440(void)

{
  int iVar1;
  undefined4 in_EAX;
  int iVar2;
  int unaff_EBX;
  
  iVar1 = *(int *)(unaff_EBX + 4);
  iVar2 = FUN_000e1910(unaff_EBX,iVar1,*(undefined4 *)(iVar1 + 4),in_EAX);
  FUN_000389d0();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}
