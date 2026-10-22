/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 329694F0D94CCB4265D8BE42F650F881C8DA03BFA04B063F285F7364C8C85725
 * Entry: 0x002e2090, Ghidra index: 10377, label: FUN_002e2090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e2090(void)

{
  int iVar1;
  int in_ECX;
  uint local_4;
  
  local_4 = *(uint *)(in_ECX + 0xf0);
  iVar1 = FUN_002e3180(*(undefined4 *)(in_ECX + 0xfc),&local_4);
  if (-1 < iVar1) {
    if ((local_4 != 0) && (4 < local_4)) {
      if (**(int **)(in_ECX + 0xfc) == *(int *)(in_ECX + 0x634)) {
        FUN_002e1fe0(0xfffffffc,0xfffffffc,*(int **)(in_ECX + 0xfc) + 1,local_4 - 4,0);
        FUN_002e2c20(3,1);
        FUN_002e2c20(1,local_4);
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}
