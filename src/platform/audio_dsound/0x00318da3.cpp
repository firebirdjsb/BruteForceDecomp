/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA8A26698ED37B578A5C9DD9B8A8831C539DE633EBC08650A20AF987950EABAE
 * Entry: 0x00318da3, Ghidra index: 12211, label: FUN_00318da3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00318da3(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  FUN_003118f0();
  iVar1 = *(int *)(in_ECX + 0x88);
  if ((*(byte *)(iVar1 + 10) & 0x18) == 0) {
    uVar2 = param_1 + (*(uint *)(iVar1 + 0xb8) & 0xfff);
    iVar1 = (uint)*(ushort *)(*(int *)(in_ECX + 0x8c) + 8) + (uVar2 >> 0xc);
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0xb8);
    iVar1 = 0x7ff;
  }
  *(uint *)(in_ECX + 0x15c) = iVar1 << 0xc | uVar2 & 0xfff;
  FUN_00311923();
  return;
}
