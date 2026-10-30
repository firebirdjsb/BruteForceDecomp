/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7FA812E948641B65A8320B7E6575AF7CDE8F296857DC68F06FCAB0E4D50575FD
 * Entry: 0x0014a020, Ghidra index: 4284, label: FUN_0014a020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039adec;
extern uint32_t PTR_FUN_0039b508;
extern uint32_t PTR_LAB_0039a8c0;
extern uint32_t PTR_LAB_0039b4f0;
extern uint32_t PTR_LAB_0039b4fc;
void FUN_0014a020(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039b508;
  in_ECX[0x12] = PTR_FUN_0039adec;
  in_ECX[0x1a] = PTR_LAB_0039a8c0;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x4c + (int)in_ECX) = &PTR_LAB_0039b4fc;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x50 + (int)in_ECX) = &PTR_LAB_0039b4f0;
  *(int *)(*(int *)(in_ECX[0x13] + 4) + 0x48 + (int)in_ECX) = *(int *)(in_ECX[0x13] + 4) + -0x188;
  if ((undefined4 *)in_ECX[0x6d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x6d])(1);
    in_ECX[0x6d] = 0;
  }
  if (in_ECX[0x72] != 0) {
    FUN_0008f6e0();
  }
  FUN_00156c50();
  return;
}
