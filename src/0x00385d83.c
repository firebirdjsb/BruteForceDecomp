/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D397065F6090A91442C12687A4B35BBEE32B3EA41A4FB8ABAF6AB3B5F821727
 * Entry: 0x00385d83, Ghidra index: 13684, label: FUN_00385d83
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00385d83(void)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  int in_EDX;
  uint uVar3;
  
  uVar1 = *(uint *)(in_ECX + 0x14);
  uVar2 = 0;
  uVar3 = *(ushort *)(in_EDX + 2) & 0x7ff;
  if (uVar1 != 0) {
    uVar2 = uVar1 / uVar3;
    if (uVar1 % uVar3 != 0) {
      uVar2 = uVar2 + 1;
    }
  }
  if (*(char *)(in_EDX + 0x11) == '\0') {
    uVar2 = uVar2 + 3;
  }
  return uVar2;
}
