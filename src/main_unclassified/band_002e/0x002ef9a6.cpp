/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35891CD955549A6A64F85F443177CBBAAD8956E746723F0E884B7752456D014E
 * Entry: 0x002ef9a6, Ghidra index: 10719, label: FUN_002ef9a6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002ef9a6(void)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  
  uVar2 = 0;
  iVar1 = *unaff_FS_OFFSET;
  if ((*(undefined1 **)(iVar1 + 4) == (uintptr_t)0x002ef91cU) &&
     (*(int *)(iVar1 + 8) == *(int *)(*(int *)(iVar1 + 0xc) + 0xc))) {
    uVar2 = 1;
  }
  return uVar2;
}
