/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0426491F9732847D347EE957FD44570288B44BB97E08D52C5E0DD667F963E8B7
 * Entry: 0x000ebc10, Ghidra index: 2907, label: FUN_000ebc10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing 0x002EA01D allocation boundary takes one guest32 size and
 * returns guest32 EAX. No host allocation/pointer ABI is established. */
#include "bf_002ea01d_allocator_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e7e8;
extern uint32_t PTR_FUN_0039ea48;
extern uint32_t PTR_LAB_003a3f18;
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_000ebc10(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_002ea01d(0xac);
  if (piVar1 != (int *)0x0) {
    FUN_000eb9d0();
    *piVar1 = (int)&PTR_FUN_0039ea48;
    piVar1[2] = (int)&PTR_LAB_003a3f18;
    piVar1[3] = (int)&PTR_FUN_0039e7e8;
    piVar1[0x25] = 0;
    piVar1[0x26] = 0;
    piVar1[0x27] = 0;
    *(undefined1 *)(piVar1 + 0x23) = 0;
    (**(code **)(*piVar1 + 0x34))();
    return piVar1;
  }
  (**(code **)(_DAT_00000000 + 0x34))();
  return (int *)0x0;
}
