/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 219287076A800AB1A798A60A69A1CAA1AB35E353F6439DE502C9F94565F6406F
 * Entry: 0x000639a0, Ghidra index: 1080, label: FUN_000639a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_00064100(void);

extern uint32_t PTR_LAB_003a3620;
void FUN_000639a0(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int *local_4;
  
  piVar2 = (int *)FUN_002ea01d(0x1c);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[1] = 4;
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
    *piVar2 = (int)&PTR_LAB_003a3620;
    piVar2[6] = 1;
  }
  local_4 = (int *)0x0;
  FUN_00064100(param_1,&local_4);
  piVar1 = local_4;
  (**(code **)(*piVar2 + 0x14))(piVar2,0,local_4);
  *local_4 = (int)piVar2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}
