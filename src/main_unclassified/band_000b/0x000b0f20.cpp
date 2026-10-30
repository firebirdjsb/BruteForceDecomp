/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B29E69470BF8BB38ED67D882C16A05468E85A892E0ED764AD10CA9D1AA3C256D
 * Entry: 0x000b0f20, Ghidra index: 2102, label: FUN_000b0f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b0f20(void)

{
  int iVar1;
  undefined4 in_EAX;
  int iVar2;
  int unaff_EBX;
  
  iVar1 = *(int *)(unaff_EBX + 4);
  iVar2 = FUN_000b1240(unaff_EBX,iVar1,*(undefined4 *)(iVar1 + 4),in_EAX);
  FUN_000b12d0();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}
