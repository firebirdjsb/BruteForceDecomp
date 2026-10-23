/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0969A113F4E8BE973D2BF11BB31045B872C891E7C829E017BBAB7F1B1D986296
 * Entry: 0x00229950, Ghidra index: 7673, label: FUN_00229950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00229950(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = *(int *)(in_EAX + 0x178);
  if (iVar1 != *(int *)(in_EAX + 0x17c)) {
    do {
      FUN_002b2e00();
      iVar1 = iVar1 + 4;
    } while (iVar1 != *(int *)(in_EAX + 0x17c));
  }
  if (*(int **)(in_EAX + 0x178) != (int *)0x0) {
    *(undefined1 *)(*(int *)(**(int **)(in_EAX + 0x178) + 4) + 0x70) = 0x10;
  }
  return;
}
