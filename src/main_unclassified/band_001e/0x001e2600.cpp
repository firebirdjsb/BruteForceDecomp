/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C6200D84F2F18B77049D1C8A83298E3796F00DC5DAC0D1062E659404C046684
 * Entry: 0x001e2600, Ghidra index: 6751, label: FUN_001e2600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e2600(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 / 0x1c;
    if (iVar1 < 0x21) {
LAB_001e26ed:
      if (1 < iVar1) {
        FUN_001e2e70(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        FUN_001e2da0(param_1,param_2);
        FUN_001e2de0(param_1,param_2);
        return;
      }
      goto LAB_001e26ed;
    }
    FUN_001e2b00(&local_8,param_1,param_2);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_8 - param_1) / 0x1c < (param_2 - local_4) / 0x1c) {
      FUN_001e2600(param_1,local_8,param_3);
      param_1 = local_4;
    }
    else {
      FUN_001e2600(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}
