/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75ECC4BC63625230AB3FA9F706E0DCA8304897178A1FB1FB827F97FB8894DCE0
 * Entry: 0x001dc7e0, Ghidra index: 6555, label: FUN_001dc7e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Exact existing C++ draft declaration only; ABI_UNVERIFIED.
 * The original caller also forwards hidden EAX and an extra stack word.
 * Its void source signature loses the returned EAX. These mismatches remain;
 * this declaration does not recover the Xbox register/stack/return ABI. */
extern int FUN_001d6370(int param_1,int param_2);
void FUN_001dc7e0(undefined4 param_1,undefined4 param_2)

{
  FUN_001d6370(param_1,param_2);
  return;
}
