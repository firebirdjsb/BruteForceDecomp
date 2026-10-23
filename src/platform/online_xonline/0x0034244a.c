/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 035873CFE8840A808577308731AFE5F366DBC5908263B96F8B147EECD0668A44
 * Entry: 0x0034244a, Ghidra index: 12689, label: FUN_0034244a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034244a(int param_1)

{
  FUN_003476db(param_1 + 0x20,0,0xffffffff);
  if (*(int *)(param_1 + 0x34) != -1) {
    FUN_00345084(*(int *)(param_1 + 0x34));
  }
  FUN_0033e8c3(param_1 + 0x98);
  return;
}
