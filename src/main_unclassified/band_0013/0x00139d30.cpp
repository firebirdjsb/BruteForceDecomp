/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 847D2BCD59057542B59C542EC92B2E3034289CCC37C096D77F8851DED72E1D19
 * Entry: 0x00139d30, Ghidra index: 3967, label: FUN_00139d30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039db60;
void FUN_00139d30(void)

{
  int *in_ECX;
  
  if (in_ECX != (int *)0x0) {
    *in_ECX = (int)&PTR_FUN_0039db60;
    in_ECX[3] = 0;
    in_ECX[8] = 0;
    in_ECX[9] = 0;
    in_ECX[10] = 0;
    in_ECX[3] = 0;
    in_ECX[5] = 0;
    in_ECX[4] = 0;
    in_ECX[1] = 0;
    *(byte *)(in_ECX + 6) = *(byte *)(in_ECX + 6) & 0xfe;
    in_ECX[2] = 100;
    (**(code **)(*in_ECX + 4))();
    return;
  }
  return;
}
