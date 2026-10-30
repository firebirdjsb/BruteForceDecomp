/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 12A426F84D91A3C441E9147EF3D4BA6A4B30FDF4613E3B3776CB2AA099487E10
 * Entry: 0x0009e660, Ghidra index: 1875, label: FUN_0009e660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern undefined4 FUN_00237ff0(int *param_1);

extern uint32_t PTR_LAB_003a0e4c;
void FUN_0009e660(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0xeae6073b;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0x1519f8c5;
    *piVar1 = (int)&PTR_LAB_003a0e4c;
  }
  FUN_00237ff0(&local_4);
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}
