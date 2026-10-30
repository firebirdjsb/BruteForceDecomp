/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7FA6260FD6D38B8987B6A697D78485A47E1CFEB3FA7F800B06C25C09D9C0BF53
 * Entry: 0x00081200, Ghidra index: 1520, label: FUN_00081200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_0017c020(void);

extern uint32_t DAT_0046d064;
extern uint32_t DAT_0046d170;
undefined1 FUN_00081200(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int *piVar2;
  undefined1 uVar3;
  
  if (in_ECX[0x1bb] != DAT_0046d064) {
    return 1;
  }
  uVar3 = 0;
  iVar1 = (**(code **)(*in_ECX + 200))();
  piVar2 = *(int **)(iVar1 + 0xd0);
  iVar1 = (**(code **)(*in_ECX + 200))();
  if (piVar2 != *(int **)(iVar1 + 0xd4)) {
    while (*piVar2 != *param_1) {
      piVar2 = piVar2 + 2;
      if (piVar2 == *(int **)(iVar1 + 0xd4)) {
        return 0;
      }
    }
    FUN_0017c020(&DAT_0046d170);
    uVar3 = 1;
  }
  return uVar3;
}
