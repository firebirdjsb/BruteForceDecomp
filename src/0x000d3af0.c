/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 78D87C5A2BD01862142C96B7175920CF787A382B779C061B4BE02048133987FA
 * Entry: 0x000d3af0, Ghidra index: 2630, label: FUN_000d3af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d3af0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_000d3b87:
      if (1 < iVar1) {
        FUN_000d3dc0(param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_000d3ee0(param_4,0,0);
        }
        FUN_000d3d70(param_4);
        return;
      }
      goto LAB_000d3b87;
    }
    FUN_000d3be0(&local_8,param_1,param_2,param_4);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffffcU) < (int)(param_2 - local_4 & 0xfffffffcU)) {
      FUN_000d3af0(param_1,local_8,param_3,param_4);
      param_1 = iVar1;
    }
    else {
      FUN_000d3af0(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}
