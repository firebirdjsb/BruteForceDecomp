/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BF10BB8C296EA947CCB393F9981A9364CA5FE11A1DECE12B7233D2AFA74B870
 * Entry: 0x000b3ca0, Ghidra index: 2171, label: FUN_000b3ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0040d6d0;
extern uint32_t _DAT_0040d6d4;
extern uint32_t _DAT_0040d6d8;
extern uint32_t _DAT_0040d6dc;
extern uint32_t _DAT_0040d6e0;
extern uint32_t _DAT_0040d6e4;
extern uint32_t _DAT_0040d6e8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b3ca0(float param_1)

{
  short sVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  int in_ECX;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  FUN_000ba730(param_1);
  (**(code **)(**(int **)(in_ECX + 0x28) + 8))();
  fVar5 = (float10)FUN_000bb170();
  *(float *)(in_ECX + 0x38) = (float)fVar5;
  param_1 = param_1 + *(float *)(in_ECX + 0x40);
  *(float *)(in_ECX + 0x40) = param_1;
  if (1.7014117e+38 < param_1) {
    *(undefined4 *)(in_ECX + 0x40) = 0;
  }
  iVar2 = *(int *)(*(int *)(in_ECX + 0x28) + 8);
  fVar4 = _DAT_0040d6dc * *(float *)(in_ECX + 0x40);
  sVar1 = *(short *)(iVar2 + 0x22);
  *(short *)(in_ECX + 8) = *(short *)(iVar2 + 0x20) / 2;
  *(short *)(in_ECX + 10) = sVar1 / 2;
  fVar6 = (float10)FUN_00233150(fVar4);
  fVar3 = (float10)_DAT_0040d6d8;
  fVar7 = (float10)FUN_00233150(_DAT_0040d6e4 * *(float *)(in_ECX + 0x40));
  *(float *)(in_ECX + 0x3c) =
       (float)(((fVar7 * (float10)_DAT_0040d6e0 + (float10)(float)(fVar6 * fVar3)) *
                (float10)_DAT_0040d6d4 + (float10)_DAT_0040d6d0) * (float10)_DAT_0040d6e8 *
              (float10)(float)fVar5);
  return;
}
