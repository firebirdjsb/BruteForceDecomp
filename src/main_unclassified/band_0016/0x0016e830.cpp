/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 374AB86A19774F26FCB062288E27DCC2FC78DE3BFD30B6BCEF8D4FEF2F0D6432
 * Entry: 0x0016e830, Ghidra index: 4822, label: FUN_0016e830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox ABI_UNVERIFIED. */
extern void FUN_0016e880(void);
void FUN_0016e830(int param_1,int param_2,int param_3)

{
  if (*(uint *)(param_2 + 0x10) < *(uint *)(param_1 + 0x10)) {
    FUN_0016e880();
  }
  if (*(uint *)(param_3 + 0x10) < *(uint *)(param_2 + 0x10)) {
    FUN_0016e880();
  }
  if (*(uint *)(param_2 + 0x10) < *(uint *)(param_1 + 0x10)) {
    FUN_0016e880();
    return;
  }
  return;
}
