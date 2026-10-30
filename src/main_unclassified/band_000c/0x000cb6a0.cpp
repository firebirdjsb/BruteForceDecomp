/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73F462B3542FF801BF3946C578542A24BD9B675D27E6C8B1C1A5BE9097FA57C7
 * Entry: 0x000cb6a0, Ghidra index: 2518, label: FUN_000cb6a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f038;
extern uint32_t PTR_FUN_0039f8bc;
extern uint32_t PTR_FUN_003a0098;
void FUN_000cb6a0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[0xe];
  *in_ECX = PTR_FUN_0039f038;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[10] == 0) {
      (**(code **)*puVar1)(1);
    }
    else {
      FUN_000b2660();
    }
  }
  puVar1 = (undefined4 *)in_ECX[0xf];
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[10] == 0) {
      (**(code **)*puVar1)(1);
    }
    else {
      FUN_000b2660();
    }
  }
  piVar2 = (int *)in_ECX[0x10];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    in_ECX[0x10] = 0;
  }
  *in_ECX = &PTR_FUN_003a0098;
  piVar2 = (int *)in_ECX[0xd];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    in_ECX[0xd] = 0;
  }
  *in_ECX = &PTR_FUN_0039f8bc;
  piVar2 = (int *)in_ECX[8];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    in_ECX[8] = 0;
  }
  return;
}
