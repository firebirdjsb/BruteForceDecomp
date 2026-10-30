/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA560AA5348B16F0246B7B030C4ED2B27FECF52612C692BB626CE67F6B9B0921
 * Entry: 0x000cf620, Ghidra index: 2561, label: FUN_000cf620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000cfad0(undefined4 *param_1,undefined4 *param_2,float *param_3);
extern void FUN_000cfc80(undefined4 param_1);
extern void FUN_000cfa80(undefined4 param_1);
extern void FUN_000cf710(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,float *param_4);

void FUN_000cf620(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_000cf6b7:
      if (1 < iVar1) {
        FUN_000cfad0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_000cfc80(param_4,0,0);
        }
        FUN_000cfa80(param_4);
        return;
      }
      goto LAB_000cf6b7;
    }
    FUN_000cf710(&local_8,param_1,param_2,param_4);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffffcU) < (int)(param_2 - local_4 & 0xfffffffcU)) {
      FUN_000cf620(param_1,local_8,param_3,param_4);
      param_1 = iVar1;
    }
    else {
      FUN_000cf620(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}
