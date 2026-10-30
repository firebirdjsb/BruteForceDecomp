/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10A9AC201548DE2569A0D94C79D9FAC07CA090DC2C936E2F6C1327A0E7DDF303
 * Entry: 0x0033fc8c, Ghidra index: 12658, label: FUN_0033fc8c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_0033fc8c(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_2 = param_3;
  puVar2 = *(undefined4 **)(param_1 + 8);
  uVar1 = 0;
  *(undefined4 **)(param_1 + 8) = puVar2 + 2;
  if (*(undefined4 **)(param_1 + 4) < puVar2 + 2) {
    *(undefined4 **)(param_1 + 8) = puVar2;
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 == (undefined4 *)0x0) {
    uVar1 = 0x3c;
  }
  else {
    puVar2[1] = param_4;
    *puVar2 = 0;
    param_2[1] = *puVar2;
    if (param_5 != 0) {
      puVar3 = *(undefined4 **)(param_1 + 8);
      *(undefined4 **)(param_1 + 8) = puVar3 + 2;
      if (*(undefined4 **)(param_1 + 4) < puVar3 + 2) {
        *(undefined4 **)(param_1 + 8) = puVar3;
        puVar3 = (undefined4 *)0x0;
      }
      if (puVar3 == (undefined4 *)0x0) {
        uVar1 = 0x3c;
      }
      else {
        *puVar3 = 0;
        puVar3[1] = param_5;
        *puVar2 = *puVar3;
      }
    }
  }
  return uVar1;
}
