/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 359B2067D2E49235FF0F742619612E68CB67435CA963F9B34E74A6BE8093B37B
 * Entry: 0x000b3620, Ghidra index: 2166, label: FUN_000b3620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f8bc;
extern uint32_t PTR_FUN_0039feb8;
extern uint32_t PTR_FUN_0039ffc0;
extern uint32_t PTR_LAB_0039fea4;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000b3620(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039feb8;
  in_ECX[0xb] = PTR_LAB_0039fea4;
  piVar1 = (int *)in_ECX[0x1b];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x1b] = 0;
  }
  piVar1 = (int *)in_ECX[0x1c];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x1c] = 0;
  }
  piVar1 = (int *)in_ECX[0x1c];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x1c] = 0;
  }
  piVar1 = (int *)in_ECX[0x1b];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x1b] = 0;
  }
  *in_ECX = &PTR_FUN_0039ffc0;
  in_ECX[0xb] = &PTR_LAB_0039fff0;
  FUN_000b2530();
  *in_ECX = &PTR_FUN_0039f8bc;
  piVar1 = (int *)in_ECX[8];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[8] = 0;
  }
  return;
}
