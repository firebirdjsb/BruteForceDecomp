/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 87E565C413D7E22A3451DC2CE2B9EA484CE84DBD4704ECEAC2431535F1581543
 * Entry: 0x0006bd50, Ghidra index: 1219, label: FUN_0006bd50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint FUN_0006e850(uint param_1);
extern void FUN_001553f0(void);

extern uint32_t PTR_FUN_003a2868;
extern uint32_t PTR_LAB_003a2810;
void FUN_0006bd50(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_003a2868;
  in_ECX[0x12] = PTR_LAB_003a2810;
  if ((in_ECX[0x48] != 0) &&
     (iVar1 = *(int *)(in_ECX[2] + 0xbf0), -1 < (char)(*(char *)(in_ECX + 0x49) << 1))) {
    FUN_0006e850(1);
    *(undefined4 *)(iVar1 + 0x24 + ((int)(char)(*(char *)(in_ECX + 0x49) << 1) >> 1) * 4) = 0;
    in_ECX[0x48] = 0;
    *(byte *)(in_ECX + 0x49) = *(byte *)(in_ECX + 0x49) | 0x7f;
  }
  if ((int *)in_ECX[0x14] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x14] + 0x58))(1);
  }
  FUN_001553f0();
  return;
}
