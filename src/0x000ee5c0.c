/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BDADBC692CCAA28690879525E70D391F89CA669E22658C8925D2DDCD00617FEE
 * Entry: 0x000ee5c0, Ghidra index: 2963, label: FUN_000ee5c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ee5c0(byte *param_1,float param_2)

{
  *param_1 = (byte)(int)((float)*param_1 * param_2);
  param_1[1] = (byte)(int)((float)param_1[1] * param_2);
  param_1[2] = (byte)(int)((float)param_1[2] * param_2);
  return;
}
