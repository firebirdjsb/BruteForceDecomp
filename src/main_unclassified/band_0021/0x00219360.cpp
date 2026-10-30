/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E9432535C5DE3AB28403E7182962A0D4BB27ECB799077B4F11EF653CD232447D
 * Entry: 0x00219360, Ghidra index: 7495, label: FUN_00219360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394da0;
extern uint32_t PTR_LAB_003a084c;
/* WARNING: Removing unreachable block (ram,0x002193ac) */

void FUN_00219360(void)

{
  undefined4 *in_ECX;
  int *piVar1;
  
  piVar1 = (int *)in_ECX[2];
  *in_ECX = PTR_FUN_00394da0;
  if (piVar1 != (int *)in_ECX[3]) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)in_ECX[3]);
  }
  if (in_ECX[2] == 0) {
    in_ECX[2] = 0;
    in_ECX[3] = 0;
    in_ECX[4] = 0;
    in_ECX[2] = 0;
    in_ECX[3] = 0;
    in_ECX[4] = 0;
    *in_ECX = &PTR_LAB_003a084c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[2]);
}
