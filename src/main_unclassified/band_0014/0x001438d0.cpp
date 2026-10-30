/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C91CC1A5AB026D45EE72EE9D00DC3CA472301107FDCA15AD3B62314BE0672A0
 * Entry: 0x001438d0, Ghidra index: 4145, label: FUN_001438d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c0340;
extern uint32_t _DAT_0040c934;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_001438d0(int param_1,float param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(&DAT_003c0340 + *(int *)(param_1 + 0x5c) * 4);
  if (*(int *)(param_1 + 0x5c) == iVar1) {
    if (iVar1 != 1) {
      fVar3 = _DAT_0040c934 * param_2 +
              *(float *)(*(int *)(param_3 + 4) + *(int *)(&DAT_003c0340 + iVar1 * 4) * 4);
      if (1.0 <= fVar3) {
        fVar3 = 1.0;
      }
      *(float *)(*(int *)(param_3 + 4) + *(int *)(&DAT_003c0340 + iVar1 * 4) * 4) = fVar3;
    }
  }
  else {
    fVar3 = *(float *)(*(int *)(param_3 + 4) + iVar2 * 4) - _DAT_0040c934 * param_2;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    *(float *)(*(int *)(param_3 + 4) + iVar2 * 4) = fVar3;
    if (*(float *)(*(int *)(param_3 + 4) + iVar2 * 4) == 0.0) {
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x58);
    }
  }
  return *(int *)(param_1 + 0x5c) != 1;
}
