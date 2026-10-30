/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09E75D4251B87ECBE4570656A997BF4F728FC4D31CAB697B1AA765E9D5CC45D8
 * Entry: 0x000b6e70, Ghidra index: 2197, label: FUN_000b6e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f8bc;
extern uint32_t PTR_FUN_0039fd60;
void FUN_000b6e70(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039fd60;
  piVar1 = (int *)in_ECX[0x36];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x36] = 0;
  }
  piVar1 = (int *)in_ECX[0x35];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x35] = 0;
  }
  piVar1 = (int *)in_ECX[0x34];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x34] = 0;
  }
  piVar1 = (int *)in_ECX[0x33];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x33] = 0;
  }
  piVar1 = (int *)in_ECX[0x32];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x32] = 0;
  }
  *in_ECX = &PTR_FUN_0039f8bc;
  piVar1 = (int *)in_ECX[8];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[8] = 0;
  }
  return;
}
