/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9DCEF3F002CC6FC91804C3FCD6D861F400CA39A2E05688B355A7293A0BA9A098
 * Entry: 0x0034c30c, Ghidra index: 12954, label: FUN_0034c30c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034c30c(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = *(int *)(iVar1 + 0xc);
  *in_ECX = iVar2;
  if (iVar2 == 0) {
    in_ECX[1] = 0;
    return;
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  return;
}
