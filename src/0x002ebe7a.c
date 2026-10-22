/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 400344DEA9C2F17D367BB487E75495FFFD970DCAA7975CA8D615CB510105D0CE
 * Entry: 0x002ebe7a, Ghidra index: 10646, label: FUN_002ebe7a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
short * FUN_002ebe7a(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *param_2;
    *psVar2 = sVar1;
    psVar2 = psVar2 + 1;
    param_2 = param_2 + 1;
  } while (sVar1 != 0);
  return param_1;
}
