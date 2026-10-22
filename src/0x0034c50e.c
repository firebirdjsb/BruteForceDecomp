/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B76ECA04939394168681CE37423799EC147B8F47C5703CC64C632C179347479B
 * Entry: 0x0034c50e, Ghidra index: 12962, label: FUN_0034c50e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
short * FUN_0034c50e(short *param_1,int param_2,short param_3)

{
  while( true ) {
    if (param_2 == 0) {
      return (short *)0x0;
    }
    if (*param_1 == param_3) break;
    param_2 = param_2 - (uint)(ushort)param_1[1];
    param_1 = (short *)((int)param_1 + (uint)(ushort)param_1[1]);
  }
  return param_1;
}
