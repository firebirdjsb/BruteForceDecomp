/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2F62C39DA3D5EFF01C3D46CEAF3B45DB3BDB077A8BC66D99193B2DA90DD0C5F
 * Entry: 0x00319589, Ghidra index: 12226, label: FUN_00319589
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00319589(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = FUN_0031841f();
  if (-1 < iVar2) {
    iVar1 = *(int *)(in_ECX + 0x88);
    if ((*(uint *)(iVar1 + 8) & 0x2000) == 0) {
      if ((*(uint *)(iVar1 + 8) & 0x180000) == 0) {
        if ((*(int *)(iVar1 + 0xb8) != 0) && (*(int *)(iVar1 + 0xbc) != 0)) {
          iVar2 = FUN_00319430();
        }
      }
      else {
        FUN_00319498();
      }
    }
  }
  return iVar2;
}
