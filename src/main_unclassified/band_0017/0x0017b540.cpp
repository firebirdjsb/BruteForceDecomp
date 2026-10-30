/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3151332AD5DC60FC9377F3EB6A52EC8BF29DA271FC6E21504A72FF9D09E23F29
 * Entry: 0x0017b540, Ghidra index: 5029, label: FUN_0017b540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00399d70;
void FUN_0017b540(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  int *piVar2;
  
  piVar2 = (int *)in_ECX[2];
  piVar1 = (int *)in_ECX[3];
  *in_ECX = PTR_LAB_00399d70;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 0x14))(1);
    }
  }
  if (in_ECX[2] == 0) {
    in_ECX[2] = 0;
    in_ECX[3] = 0;
    in_ECX[4] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[2]);
}
