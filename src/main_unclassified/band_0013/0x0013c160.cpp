/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E30F91ED0453ADE88B127DFADF0F12E93FAA16471F2A2E8C1C30A9F5D6D2B731
 * Entry: 0x0013c160, Ghidra index: 4001, label: FUN_0013c160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0013c160(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar1 = FUN_001463c0();
  if ((iVar1 != 1) && (iVar1 != 7)) {
    return 1;
  }
  iVar1 = FUN_0006ef00();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xe4) = 0xe784869e;
  }
  return 0;
}
