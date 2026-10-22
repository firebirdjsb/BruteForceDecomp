/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 712ABCDC01535DB9CB89D1581611711EA6F064F5F7D4FBC1157EB8BE9A1E7194
 * Entry: 0x002f846e, Ghidra index: 10948, label: XMemAlloc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b7880;
undefined4 * XAPILIB__XMemAlloc(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if ((int)param_2 < 0) {
    puVar1 = (undefined4 *)
             XPhysicalAlloc(param_1,0xffffffff,(param_2 >> 0x18 & 0xf) << 0xc,
                            *(undefined4 *)(&DAT_003b7880 + (param_2 >> 0x1c & 3) * 4));
    if ((puVar1 != (undefined4 *)0x0) && ((param_2 & 0x40000000) != 0)) {
      puVar3 = puVar1;
      for (uVar2 = param_1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (param_1 = param_1 & 3; param_1 != 0; param_1 = param_1 - 1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
  }
  else {
    puVar1 = (undefined4 *)LocalAlloc(param_2 >> 0x18 & 0x40,param_1);
  }
  return puVar1;
}
