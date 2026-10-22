/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D9BE41A762E9193A3FEC8F3F48A18A0B3652C224B7D79EC4EA4E131FA4A73B99
 * Entry: 0x002f8a4b, Ghidra index: 10956, label: FUN_002f8a4b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
longlong * FUN_002f8a4b(longlong *param_1,uint param_2)

{
  longlong lVar1;
  
  if (param_2 == 0xffffffff) {
    param_1 = (longlong *)0x0;
  }
  else {
    lVar1 = (ulonglong)param_2 * 10000;
    *param_1 = lVar1;
    *(int *)param_1 = -(int)lVar1;
    *(uint *)((int)param_1 + 4) = -((int)((ulonglong)lVar1 >> 0x20) + (uint)((int)lVar1 != 0));
  }
  return param_1;
}
