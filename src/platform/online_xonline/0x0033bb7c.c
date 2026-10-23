/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FAE5B621EA87D519F9055847A5D0322AD19CD403149C92D0B54F0D6E068B839F
 * Entry: 0x0033bb7c, Ghidra index: 12526, label: FUN_0033bb7c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033bb7c(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}
