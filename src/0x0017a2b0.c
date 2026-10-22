/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B868D3640E032AC5F608FB19C8DC0176D628DBA961066A61341EF1C0CF17176
 * Entry: 0x0017a2b0, Ghidra index: 5006, label: FUN_0017a2b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017a2b0(void)

{
  int iVar1;
  undefined4 in_EAX;
  int iVar2;
  int unaff_EBX;
  
  iVar1 = *(int *)(unaff_EBX + 4);
  iVar2 = FUN_0017a380(unaff_EBX,iVar1,*(undefined4 *)(iVar1 + 4),in_EAX);
  FUN_0017a410();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}
