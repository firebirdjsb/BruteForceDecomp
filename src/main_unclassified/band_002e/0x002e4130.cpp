/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 22B87A5F524149798DCC74064426B73D7EB2EC47E0262E00A58FA4D91701EF06
 * Entry: 0x002e4130, Ghidra index: 10432, label: FUN_002e4130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00386630;
extern uint32_t PTR_LAB_00386690;
void FUN_002e4130(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_LAB_00386630;
  in_ECX[1] = param_3;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  FUN_002e9b20();
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *(undefined1 *)(in_ECX + 10) = 0;
  in_ECX[0x10] = 0;
  *in_ECX = &PTR_LAB_00386690;
  in_ECX[8] = param_1;
  in_ECX[9] = param_2;
  return;
}
