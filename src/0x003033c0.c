/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27F5EEB425CD0D99D9A04F8C1CF18F388F0DAFA982C284E309630A2F868443DC
 * Entry: 0x003033c0, Ghidra index: 11086, label: FUN_003033c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469810;
extern uint32_t PTR_PTR_003ffde4;
extern char s__2i__003b7e80[];
extern char s__3_3f__003b7e88[];
void FUN_003033c0(void)

{
  int *unaff_ESI;
  int iVar1;
  int local_c;
  
  local_c = 0;
  if (0 < unaff_ESI[1]) {
    do {
      if (DAT_00469810 == (undefined **)0x0) {
        DAT_00469810 = &PTR_PTR_003ffde4;
      }
      (**(code **)*DAT_00469810)(DAT_00469810,s__2i__003b7e80,local_c);
      iVar1 = 0;
      if (0 < unaff_ESI[2]) {
        do {
          if (DAT_00469810 == (undefined **)0x0) {
            DAT_00469810 = &PTR_PTR_003ffde4;
          }
          (**(code **)*DAT_00469810)
                    (DAT_00469810,s__3_3f__003b7e88,
                     (double)*(float *)(*unaff_ESI + (unaff_ESI[3] * iVar1 + local_c) * 4));
          iVar1 = iVar1 + 1;
        } while (iVar1 < unaff_ESI[2]);
      }
      if (DAT_00469810 == (undefined **)0x0) {
        DAT_00469810 = &PTR_PTR_003ffde4;
      }
      (**(code **)*DAT_00469810)();
      local_c = local_c + 1;
    } while (local_c < unaff_ESI[1]);
  }
  return;
}
