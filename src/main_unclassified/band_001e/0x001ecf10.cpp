/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7DA0405A3A3C616A08A1E06F7CEC8D33F2CB9547919DDEEB3F398618E1037E96
 * Entry: 0x001ecf10, Ghidra index: 6920, label: FUN_001ecf10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_Parameters_004071bc[];
undefined4 FUN_001ecf10(undefined4 *param_1)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_001eddf0(in_EAX);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_002e4a30(s_Parameters_004071bc);
    if (puVar2 != (undefined4 *)0x0) {
      for (iVar1 = 0x89; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_1 = *puVar2;
        puVar2 = puVar2 + 1;
        param_1 = param_1 + 1;
      }
      return 1;
    }
  }
  return 0;
}
