/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2481A1DAA8D0F31B6F61388EB270465F8933E49DA253986B3245ECC20232531A
 * Entry: 0x00312310, Ghidra index: 11939, label: FUN_00312310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_CDirectSoundStream_AddRef_003869c4;
extern uint32_t PTR_FUN_003869b8;
void FUN_00312310(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[8];
  in_ECX[-1] = PTR_CDirectSoundStream_AddRef_003869c4;
  *in_ECX = PTR_FUN_003869b8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[8] = 0;
  }
  piVar1 = (int *)in_ECX[7];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[7] = 0;
  }
  FUN_00311d35();
  return;
}
