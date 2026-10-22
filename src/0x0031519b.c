/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F0DD2A74D32C8A60827D068880DE89AC6EF6CDEE6646008207586947E91D859F
 * Entry: 0x0031519b, Ghidra index: 12099, label: FUN_0031519b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0031cd08;
extern uint32_t DAT_0031cdc0;
void FUN_0031519b(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    fVar1 = *(float *)(param_1 + 0x10);
    if (*(float *)(param_1 + 0x10) < 0.0) {
      fVar1 = -fVar1;
    }
    FUN_00319a67(fVar1);
    fVar1 = *(float *)(param_1 + 0x14);
    if (*(float *)(param_1 + 0x14) < 0.0) {
      fVar1 = -fVar1;
    }
    iVar2 = FUN_00319a67(fVar1);
    if ((extraout_ECX < 0x2d) && (iVar2 < 0x2d)) {
      iVar3 = FUN_00314d1b(*(float *)(&DAT_0031cd08 + extraout_ECX * 4) *
                           *(float *)(&DAT_0031cd08 + iVar2 * 4));
      iVar2 = FUN_00314d1b(1.0 - *(float *)(&DAT_0031cdc0 + extraout_ECX * 4) *
                                 *(float *)(&DAT_0031cdc0 + iVar2 * 4));
      if (iVar2 < -10000) {
        iVar2 = -10000;
      }
      else if (0 < iVar2) {
        iVar2 = 0;
      }
      if (iVar3 < -10000) {
        iVar3 = -10000;
      }
      else if (0 < iVar3) {
        iVar3 = 0;
      }
      goto LAB_0031525d;
    }
  }
  iVar2 = 0;
  iVar3 = -10000;
LAB_0031525d:
  if ((iVar2 != *(int *)(param_1 + 0x30)) || (iVar3 != *(int *)(param_1 + 0x34))) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 8;
    *(int *)(param_1 + 0x30) = iVar2;
    *(int *)(param_1 + 0x34) = iVar3;
  }
  return;
}
