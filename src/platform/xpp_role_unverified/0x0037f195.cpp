/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D52F10DD3AD460AB335A90FDF9914FFD3BB1630018764D63E2A22A421921164
 * Entry: 0x0037f195, Ghidra index: 13494, label: XInitDevices
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412718;
extern uint32_t PTR_DAT_0037ecb4;
void XAPILIB__XInitDevices(undefined4 param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  undefined1 local_b8 [160];
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_14 [16];
  
  FUN_00380e30(param_1,param_2);
  ppuVar1 = &PTR_DAT_0037ecb4;
  do {
    if (*ppuVar1 != (undefined *)0x0) {
      (**(code **)(*ppuVar1 + 4))(local_b8);
    }
    ppuVar1 = ppuVar1 + 1;
  } while (ppuVar1 < (undefined **)0x37ecc4);
  FUN_0037f4d0();
  FUN_0037f6c4(local_14);
  FUN_0037f621(local_18,local_17);
  DAT_00412718 = 0;
  FUN_0037f6d0();
  return;
}
