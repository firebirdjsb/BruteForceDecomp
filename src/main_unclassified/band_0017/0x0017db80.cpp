/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB3F473D42F5A8552CA63700D4865FBEEFD30F424C137E67D38BF54E52582A0D
 * Entry: 0x0017db80, Ghidra index: 5088, label: FUN_0017db80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017db80(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((param_1 != param_2) && (puVar4 = param_1 + 1, puVar4 != param_2)) {
    puVar5 = param_1 + 2;
    do {
      puVar3 = param_1;
      if (*(uint *)*puVar4 < *(uint *)*param_1) {
joined_r0x0017dbe2:
        if ((puVar3 != puVar4) && (puVar4 != puVar5)) {
          FUN_00051570(puVar3,puVar4,puVar5,0,0);
        }
      }
      else {
        uVar1 = *(uint *)*puVar4;
        puVar2 = puVar5 + -2;
        if (uVar1 < *(uint *)puVar5[-2]) {
          do {
            puVar3 = puVar2;
            puVar2 = puVar3 + -1;
          } while (uVar1 < *(uint *)puVar3[-1]);
          goto joined_r0x0017dbe2;
        }
      }
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (puVar4 != param_2);
  }
  return;
}
