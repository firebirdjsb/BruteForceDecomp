/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6828A34C481684E6F343A70B547BDE599CDBEF97D68D7D15307018B7F4BF5921
 * Entry: 0x0014ab50, Ghidra index: 4302, label: FUN_0014ab50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0014ab50(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) != 0) {
    return *(int *)(*(int *)(in_ECX + 8) + 0x1d4);
  }
  if ((*(int *)(in_ECX + 0x10) == 0) ||
     (iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + 0xb0), *(int *)(*(int *)(iVar1 + 0xc) + 4) != 3)) {
    iVar1 = 0;
  }
  return iVar1;
}
