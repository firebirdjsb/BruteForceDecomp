/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A108AE501B56DA5CBD2882E432071F805B4DEBAA6F4CE532B28FE3681AAAAD2
 * Entry: 0x001d7e10, Ghidra index: 6412, label: FUN_001d7e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d7e10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 == param_2) {
    *in_EAX = param_3;
    return;
  }
  do {
    puVar1 = param_2 + -4;
    puVar2 = param_3 + -4;
    *puVar2 = *puVar1;
    param_3[-3] = param_2[-3];
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    param_2 = puVar1;
    param_3 = puVar2;
  } while (puVar1 != param_1);
  *in_EAX = puVar2;
  return;
}
