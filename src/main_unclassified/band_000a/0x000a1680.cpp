/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ECB2D62D442F68810BFB2C97B1D0AB5DE89D2CC0DF88F4EB6CFCE3CEE29432DF
 * Entry: 0x000a1680, Ghidra index: 1907, label: FUN_000a1680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern undefined4 FUN_00237ff0(int *param_1);

extern uint32_t PTR_LAB_003a0c70;
void FUN_000a1680(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0xfcb2194f;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0x34de6b1;
    *piVar1 = (int)&PTR_LAB_003a0c70;
  }
  FUN_00237ff0(&local_4);
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}
