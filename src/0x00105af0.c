/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6CFECA41E4082F91EF1A24D4AB47F9306763A7E0978DD335A070FA9A563F9856
 * Entry: 0x00105af0, Ghidra index: 3347, label: FUN_00105af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699fc;
extern uint32_t DAT_00469a00;
extern uint32_t DAT_0046cfdc;
extern uint32_t _DAT_003c0654;
extern uint32_t _DAT_004699f8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00105af0(void)

{
  int in_ECX;
  int *piVar1;
  
  DAT_0046cfdc = DAT_0046cfdc * 0x19660d + 0x3c6ef35f;
  DAT_00469a00 = DAT_0046cfdc & 7;
  piVar1 = *(int **)(in_ECX + 0x74);
  _DAT_003c0654 = 0x41200000;
  _DAT_004699f8 = 0;
  DAT_004699fc = 0;
  if (piVar1 != *(int **)(in_ECX + 0x78)) {
    while (*(int *)(*piVar1 + 0x24) != 0x1a1cb7a3) {
      piVar1 = piVar1 + 1;
      if (piVar1 == *(int **)(in_ECX + 0x78)) {
        FUN_00105910();
        return;
      }
    }
  }
  FUN_00105910();
  return;
}
