/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E49947C82460E2668842D0C730CD7D5A9E1A0193460A77192ACDF1C80BEB342
 * Entry: 0x0033bf88, Ghidra index: 12540, label: FUN_0033bf88
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033bf88(int param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (param_2 <= param_3) {
    param_1 = param_2 * 0x200 + param_1;
    param_2 = (param_3 - param_2) + 1;
    do {
      XcHMAC(XboxHDKey_exref,0x10,param_1,500,0,0,&local_18);
      *(undefined4 *)(param_1 + 500) = local_18;
      puVar1 = (undefined4 *)(param_1 + 0x1fc);
      *(undefined4 *)(param_1 + 0x1f8) = uStack_14;
      param_1 = param_1 + 0x200;
      param_2 = param_2 + -1;
      *puVar1 = uStack_10;
    } while (param_2 != 0);
  }
  return;
}
