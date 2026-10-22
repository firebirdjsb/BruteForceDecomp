/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE0EB3B90521435127064CFA31327BFF42B0426091163B6433001AB50BE5770C
 * Entry: 0x00058f50, Ghidra index: 888, label: FUN_00058f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004021b4;
float10 FUN_00058f50(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int in_ECX;
  int in_EDX;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = *(float *)(in_EDX + 0x1c) - *(float *)(in_ECX + 0x1c);
  fVar2 = *(float *)(in_EDX + 0x18) - *(float *)(in_ECX + 0x18);
  fVar3 = *(float *)(in_EDX + 0x14) - *(float *)(in_ECX + 0x14);
  fVar5 = (float10)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar5 = fVar5 + fVar5;
  if (((float)DAT_004021b4 != 0.0) &&
     ((iVar4 = *(int *)(in_ECX + 0x24) << 0x12, iVar4 < 0 ||
      ((*(uint *)(in_EDX + 0x24) & 0x2000) != 0)))) {
    fVar6 = (float10)0.25;
    if ((iVar4 < 0) && ((*(uint *)(in_EDX + 0x24) & 0x2000) != 0)) {
      fVar6 = (float10)0.08;
    }
    fVar5 = fVar6 * fVar5;
  }
  return fVar5;
}
