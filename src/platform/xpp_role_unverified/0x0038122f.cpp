/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9DF525D6E78E9E56B72A962D86C056F5933065D398F492D6EFCBFD575823BCE5
 * Entry: 0x0038122f, Ghidra index: 13558, label: FUN_0038122f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0038122f(byte param_1)

{
  int iVar1;
  
  iVar1 = FUN_00380f83();
  if (iVar1 != 0) {
    do {
      if ((*(byte *)(iVar1 + 4) & 0x7f) == (param_1 & 0x7f)) {
        return;
      }
      iVar1 = FUN_00380f9a();
    } while (iVar1 != 0);
  }
  return;
}
