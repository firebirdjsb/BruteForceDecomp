/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5EF3B0A7C39FAC4E767A1EC74AFEE83E1D25E4FD122E884090ECDDA35284EBE9
 * Entry: 0x002c7900, Ghidra index: 10107, label: FUN_002c7900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e68c;
extern uint32_t PTR_FUN_0038e694;
extern uint32_t PTR_FUN_003bc654;
void FUN_002c7900(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0038e68c;
  if (*(short *)(in_ECX + 5) != 0) {
    if (in_ECX[4] != 0) {
      (*(code *)PTR_FUN_003bc654)(in_ECX[4]);
      return;
    }
    *(undefined2 *)(in_ECX + 3) = 0;
    *(undefined2 *)(in_ECX + 5) = 0;
  }
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  *in_ECX = &PTR_FUN_0038e694;
  if (in_ECX[1] != 0) {
    (*(code *)PTR_FUN_003bc654)(in_ECX[1]);
    return;
  }
  return;
}
