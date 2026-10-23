/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3806557ACB182FE1FB248CD743B48E0FCD130ED90C9B86FC4E502D6F72DA057A
 * Entry: 0x00250720, Ghidra index: 8349, label: FUN_00250720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00250720(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_002507cf:
      if (1 < iVar1) {
        FUN_00250ba0();
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_00251060(param_1,param_2);
        }
        FUN_00250b50();
        return;
      }
      goto LAB_002507cf;
    }
    FUN_00250960(&local_8);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffffcU) < (int)(param_2 - local_4 & 0xfffffffcU)) {
      FUN_00250720(param_1);
      param_1 = local_4;
    }
    else {
      FUN_00250720(local_4);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}
