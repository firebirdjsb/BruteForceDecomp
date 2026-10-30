/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F83F813B924D97BDF3CC2EFD1CD0221A068E32AA421D566B8E443C8E4F212457
 * Entry: 0x00024ae0, Ghidra index: 255, label: FUN_00024ae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
float10 FUN_00024ae0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar3 = FUN_000120f0();
  if ((*(char *)(iVar3 + 0x498) == '\0') || (fVar1 = (float)*(int *)(iVar3 + 0x49c), fVar1 < 0.0)) {
    iVar4 = (**(code **)(*(int *)(iVar3 + 0x1b4) + 8))();
    fVar1 = *(float *)(iVar4 + 0x7c);
  }
  fVar1 = fVar1 * 0.01;
  iVar3 = *(int *)(iVar3 + 0x59c);
  if ((iVar3 != 0) &&
     (iVar3 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x24) + 0xbec) + 0x7c))(iVar3), iVar3 != 0))
  {
    return (float10)fVar1;
  }
  iVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x234))();
  fVar2 = (float)iVar3 * 0.05;
  if (0.0 < fVar2) {
    fVar2 = fVar2 * 0.5;
  }
  fVar5 = fVar2 + fVar1;
  if (fVar2 + fVar1 <= fVar1 * 0.5) {
    fVar5 = fVar1 * 0.5;
  }
  if (fVar1 * 1.5 <= fVar5) {
    fVar5 = fVar1 * 1.5;
  }
  if (1.0 <= fVar5) {
    fVar5 = 1.0;
  }
  return (float10)fVar5;
}
