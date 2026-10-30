/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE39614EB06E358E1F8DCF4B1E6E9E836331BE5396E34F1E4699D07D2F932785
 * Entry: 0x00084d50, Ghidra index: 1545, label: FUN_00084d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_00084d50(void)

{
  int *piVar1;
  byte local_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = *(int **)(DAT_00469b58 + 8);
  local_14[0] = local_14[0] & 0xe2 | 2;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  (**(code **)(*piVar1 + 0x1fc))(local_14);
  /* Original x86 0x00084d7e and 0x00084d8d both use
   * LEA EAX,[ESP+4]; PUSH EAX.  Both virtual calls receive the
   * same 20-byte local buffer beginning at local_14. */
  (**(code **)(*piVar1 + 0x30))(local_14);
  return;
}
