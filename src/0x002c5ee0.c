/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B481F930A3AC681495407935A5821F036E38A89DC3AE1F8A07331BA7BB9B816
 * Entry: 0x002c5ee0, Ghidra index: 10074, label: FUN_002c5ee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c5ee0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (*(short *)(iVar1 + 0x4a) < 2) {
    FUN_002d29f0(*(undefined4 *)(iVar1 + 0x20));
    return;
  }
  FUN_002bd220(iVar1);
  if ((**(uint **)(param_1 + 0xc) & 0x3000) != 0) {
    iVar1 = *(int *)(in_ECX + 4);
    iVar2 = *(ushort *)(iVar1 + 0x3e) - 1;
    while (-1 < iVar2) {
      iVar2 = iVar2 + -1;
      *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x40) + 4 + iVar2 * 4) + 0x28) = 0;
    }
  }
  if ((**(uint **)(param_1 + 0xc) & 0xc00) == 0) {
    FUN_002c54f0();
  }
  return;
}
