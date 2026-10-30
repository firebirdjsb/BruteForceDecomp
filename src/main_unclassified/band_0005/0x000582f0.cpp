/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0466BDC80BB8C67C534B775ADB5C619F4EEB07362531173472062128EFAB369F
 * Entry: 0x000582f0, Ghidra index: 866, label: FUN_000582f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00056c20(void);

int * FUN_000582f0(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x1c;
    param_4 = param_4 + -0x1c;
    if (param_3 != param_4) {
      FUN_00056c20();
    }
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
