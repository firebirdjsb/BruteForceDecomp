/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 668FA2E4ED5884A62CF2E4BB40606858DA47B96A220CD62ADAC687172C2455B3
 * Entry: 0x00079060, Ghidra index: 1440, label: FUN_00079060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_0023a1c0(undefined4 param_1);

bool FUN_00079060(void)

{
  int iVar1;
  
  iVar1 = FUN_0023a1c0();
  return -1 < iVar1;
}
