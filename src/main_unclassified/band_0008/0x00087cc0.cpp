/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 93CBE7D076AD040F798E96BC4C2CC58049D955F52052206A8244E1CBE367739B
 * Entry: 0x00087cc0, Ghidra index: 1627, label: FUN_00087cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_00087d20(void);

extern uint32_t PTR_FUN_003bc650;
extern uint32_t PTR_FUN_003bc654;
extern uint32_t PTR_FUN_003bc658;
extern uint32_t UNK_00237810;
extern uint32_t UNK_002378a0;
extern uint32_t UNK_00237910;
extern uint32_t UNK_002379a0;
extern uint32_t UNK_002379d0;
extern uint32_t UNK_00237a00;
undefined4 FUN_00087cc0(undefined1 *param_1)

{
  undefined4 uVar1;
  
  PTR_FUN_003bc650 = UNK_002379a0;
  PTR_FUN_003bc654 = UNK_002379d0;
  PTR_FUN_003bc658 = UNK_00237a00;
  uVar1 = FUN_00087d20();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *param_1 = 1;
  PTR_FUN_003bc650 = &UNK_00237810;
  PTR_FUN_003bc654 = &UNK_00237910;
  PTR_FUN_003bc658 = &UNK_002378a0;
  return 0;
}
