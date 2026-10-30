/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FBBD3E119C27C9DA6C7FDB008CDA25D8073F8CF7EBAA98F81DFD90633A2B626A
 * Entry: 0x0004b670, Ghidra index: 612, label: FUN_0004b670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0010bc40(void);

void FUN_0004b670(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_0010bc40();
  }
  return;
}
