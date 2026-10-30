/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA8E2983703C92DC775641A66D7FB193EEC50A092343133E00A0BBD06905E239
 * Entry: 0x00032fd0, Ghidra index: 332, label: FUN_00032fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_00020100(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern uint FUN_000594a0(int param_1,undefined4 *param_2,int param_3);
extern void FUN_0011dfa0(void);
extern char FUN_000416a0(int param_1,uint param_2);

extern uint32_t PTR_FUN_003a400c;
undefined4 FUN_00032fd0(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined **ppuStack_150;
  undefined1 *puStack_14c;
  undefined4 uStack_148;
  undefined1 auStack_130 [304];
  
  piVar2 = (int *)FUN_000120f0();
  (**(code **)(*piVar2 + 0x40))();
  FUN_00020100(0,0x41f00000,0x7f7fffff);
  puStack_14c = auStack_130;
  ppuStack_150 = &PTR_FUN_003a400c;
  uStack_148 = 6;
  piVar2[0x94] = piVar2[0x94] | 1;
  iVar3 = FUN_000594a0(piVar2[0x93],&ppuStack_150,0);
  if (iVar3 != 0) {
    FUN_000120f0();
    FUN_0011dfa0();
    cVar1 = FUN_000416a0(param_1,1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}
