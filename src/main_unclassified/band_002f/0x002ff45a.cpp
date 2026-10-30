/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 473DA4A4C9726064B0B512D674185F7340E30376F877A18533EA0C0BEF27359F
 * Entry: 0x002ff45a, Ghidra index: 11063, label: IsBadWritePtr
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

undefined4 XAPILIB__IsBadWritePtr(undefined1 *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    if ((param_1 == (undefined1 *)0x0) || (param_1 + param_2 + -1 < param_1)) {
      return 1;
    }
    *param_1 = *param_1;
    puVar1 = (undefined1 *)((uint)param_1 & 0xfffff000);
    while (puVar1 != (undefined1 *)((uint)(param_1 + param_2 + -1) & 0xfffff000)) {
      puVar1 = puVar1 + 0x1000;
      *puVar1 = *puVar1;
    }
  }
  return 0;
}
