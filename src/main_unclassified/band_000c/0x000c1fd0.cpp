/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59DC364C6285ED8C0FA8D87160E37A6319C18D69766A4D1BA03B56E46ECE437C
 * Entry: 0x000c1fd0, Ghidra index: 2364, label: FUN_000c1fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000c2270(undefined4 *param_1);
extern void FUN_000c2160(int param_1);
extern void FUN_000c2020(int param_1);
extern void FUN_000c21f0(void);
extern void FUN_000ba730(void);
extern void FUN_000b21f0(undefined4 param_1);

extern uint32_t DAT_00469b58;
void FUN_000c1fd0(undefined4 param_1)

{
  int *piVar1;
  undefined4 in_ECX;
  
  FUN_000c2270(in_ECX);
  piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if (*piVar1 == 0x17506391) {
    FUN_000c2160(in_ECX);
  }
  else {
    FUN_000c2020(in_ECX);
    FUN_000c21f0();
  }
  FUN_000ba730(param_1);
  FUN_000b21f0(param_1);
  return;
}
