/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E37343AB86217EF6080E26E7BC5B4B22DEB485F69764CAF913206C52AD4C226
 * Entry: 0x0027bed0, Ghidra index: 8968, label: FUN_0027bed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00391bf8;
extern uint32_t PTR_LAB_00391cf4;
void FUN_0027bed0(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0xd722219;
    local_4 = 0xf28ddde7;
    *piVar1 = (int)&PTR_LAB_00391bf8;
    FUN_00237ff0(&local_4);
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  piVar2 = (int *)FUN_002ea01d(0xc);
  piVar1 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    piVar2[2] = 0;
    piVar2[1] = 1;
    piVar2[2] = 0xb5e3e81;
    *piVar2 = (int)&PTR_LAB_00391cf4;
    /* MOV [ESP+0x10],ECX: the second tag reuses the 32-bit local stack word. */
    local_4 = 0x0b5e3e81;
    FUN_00237ff0(&local_4);
    piVar1 = piVar2;
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}
