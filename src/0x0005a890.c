/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA9D02DF72731C39A2D77E7698E9CF06CECF5FD8235ABA18425CEC4EA976072E
 * Entry: 0x0005a890, Ghidra index: 909, label: FUN_0005a890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0005a890(void)

{
  float fVar1;
  undefined4 *puVar2;
  int in_EAX;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  puVar2 = *(undefined4 **)(in_EAX + 4);
  fVar1 = 1e+09;
  uVar4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)*puVar2;
  }
  for (; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
    if ((float)puVar3[3] < fVar1) {
      uVar4 = puVar3[2];
      fVar1 = (float)puVar3[3];
    }
  }
  return uVar4;
}
