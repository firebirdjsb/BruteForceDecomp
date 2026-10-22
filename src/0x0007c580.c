/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2343D919724E17D8DAB6B4E93C2E64AEE9A117A6815A8DB22D68356E6C51038A
 * Entry: 0x0007c580, Ghidra index: 1479, label: FUN_0007c580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469944;
extern uint32_t DAT_00469b58;
void FUN_0007c580(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x5c0) == 0) || ((*(byte *)(in_ECX + 0x5bc) & 1) != 0)) {
    FUN_002386d0();
    D3D8LTCG__D3DDevice_Clear(0,0,0xf3,0,0x3f800000,0);
  }
  else {
    FUN_000d9e70();
  }
  FUN_000694f0(DAT_00469b58);
  if (DAT_00469944 != (int *)0x0) {
    (**(code **)(*DAT_00469944 + 4))();
  }
  (**(code **)(**(int **)(in_ECX + 0x5c4) + 0x48))(*(undefined4 *)(in_ECX + 0x5c0));
  return;
}
