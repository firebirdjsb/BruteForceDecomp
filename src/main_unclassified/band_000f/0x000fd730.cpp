/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 93142426A9EC7A65F6E403170037402E58563A030A83F224C0753CE672871ED1
 * Entry: 0x000fd730, Ghidra index: 3168, label: FUN_000fd730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x000fd76b) */

int FUN_000fd730(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  iVar1 = *(int *)(in_ECX + 8);
  iVar2 = 0;
  for (iVar4 = *(int *)(in_ECX + 4); iVar4 != iVar1; iVar4 = iVar4 + 0x30) {
    FUN_000fdaa0(iVar4 + 0x28);
    iVar3 = FUN_000fd6e0(param_1,iVar4);
    iVar2 = iVar2 + iVar3;
  }
  return iVar2;
}
