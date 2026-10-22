/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF6384659EACBF9AACBA6BD5A36580CDE64B56ECA078541FA565D0B6A0A8ABBE
 * Entry: 0x00058a20, Ghidra index: 876, label: FUN_00058a20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00058a20(void)

{
  int iVar1;
  int *in_ECX;
  
  if ((((*(byte *)(in_ECX + 0xc) & 1) != 0) && ((*(byte *)(in_ECX + 0xc) >> 1 & 1) != 0)) &&
     (iVar1 = in_ECX[1], *in_ECX != iVar1)) {
    if (2 < iVar1) {
      FUN_00058a60();
      return;
    }
    if (iVar1 < 2) {
      *in_ECX = 1;
      in_ECX[0xd] = 0x3e99999a;
      in_ECX[0xb] = 0x3e99999a;
      *(byte *)(in_ECX + 0xc) = *(byte *)(in_ECX + 0xc) & 0xf9 | 1;
    }
  }
  return;
}
