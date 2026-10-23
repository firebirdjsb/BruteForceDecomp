/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4672BE97756352517A39D7AD475E711993E6D113FA77E79DB6340D8078457D96
 * Entry: 0x003449ff, Ghidra index: 12745, label: FUN_003449ff
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003449ff(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0034470a(param_1,param_2 | 0x20000000);
  if ((iVar1 != 0) && (iVar1 = FUN_003437b3(param_1,1), iVar1 != 0)) {
    if (*(int *)(param_1 + 0x2c) == 0x200) {
      **(undefined1 **)(param_1 + 0x24) = 0x80;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      *param_3 = 0;
    }
    else {
      *param_3 = (int)*(undefined1 **)(param_1 + 0x24) - *(int *)(param_1 + 0x10);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
    return 1;
  }
  return 0;
}
