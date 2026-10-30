/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B0C5D3262B46CBA139ED7B5BD1BC640152067A0B3BDACEFFCE010B2543C2B60
 * Entry: 0x00139d10, Ghidra index: 3966, label: FUN_00139d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039db6c;
void FUN_00139d10(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX != (undefined4 *)0x0) {
    *in_ECX = &PTR_FUN_0039db6c;
    in_ECX[3] = 0;
    (**(code **)*in_ECX)();
    return;
  }
  return;
}
