/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BDBAA816899BA2F866347355D8670E09B499905ABC3AD9440A0F25791D3042C3
 * Entry: 0x0035f990, Ghidra index: 13221, label: FUN_0035f990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004c07ec;
extern uint32_t DAT_004c07f0;
extern uint32_t DAT_004c07f4;
void FUN_0035f990(void)

{
  uint uVar1;
  int in_EAX;
  uint uVar2;
  
  uVar2 = in_EAX + 0x1fU & 0xffffffe0;
  uVar1 = uVar2 * 2;
  if (DAT_004c07ec < uVar1) {
    if (DAT_004c07f0 != 0) {
      FUN_002f8e70(DAT_004c07f0);
      DAT_004c07f0 = 0;
    }
    DAT_004c07f0 = FUN_002f8e00(uVar1);
    DAT_004c07ec = uVar1;
  }
  DAT_004c07f4 = DAT_004c07f0 + uVar2;
  return;
}
