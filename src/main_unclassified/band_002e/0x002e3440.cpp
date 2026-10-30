/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 241CB15D6099AD93E985E5AAE35D39C87BAE64E7F9884271817B010352A44EF3
 * Entry: 0x002e3440, Ghidra index: 10400, label: FUN_002e3440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_002e3440(undefined4 param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = FUN_00345477(*in_ECX,param_1);
  return iVar1 != 0;
}
