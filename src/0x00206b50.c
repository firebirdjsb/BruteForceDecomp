/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF15B2293AD539400E8A05F03B3F87B2033880BB63D333AF4AF8D7779EB071B9
 * Entry: 0x00206b50, Ghidra index: 7304, label: FUN_00206b50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469940;
void FUN_00206b50(void)

{
  int in_EAX;
  int iVar1;
  float unaff_ESI;
  float10 fVar2;
  float local_10;
  undefined1 local_c [12];
  
  if (*(float *)(in_EAX + 0x98) < 0.0 == (*(float *)(in_EAX + 0x98) == 0.0)) {
    local_10 = *(float *)(in_EAX + 0x98);
  }
  else {
    iVar1 = FUN_0017beb0(in_EAX + 0x40);
    local_10 = *(float *)(iVar1 + 0xc);
  }
  if (local_10 <= 0.0) {
    return;
  }
  FUN_00205fb0(local_c,0);
  fVar2 = (float10)(**(code **)(**(int **)(*(int *)(in_EAX + 0x10) + 0xbec) + 0x24))(local_c);
  if (((*(byte *)(in_EAX + 0x8d) & 4) == 0) ||
     ((*(char *)(in_EAX + 0x4c) == '\0' &&
      (*(float *)(in_EAX + 0xa4) < 0.0 != (*(float *)(in_EAX + 0xa4) == 0.0))))) {
    if ((float10)unaff_ESI <= fVar2) {
      return;
    }
    FUN_002062a0(0);
    fVar2 = (float10)FUN_0017e5e0(DAT_00469940,&local_10);
    if ((float10)unaff_ESI <= fVar2) {
      return;
    }
  }
  else {
    if ((float10)unaff_ESI < fVar2) {
      FUN_002063c0(in_EAX,0);
      return;
    }
    fVar2 = (float10)FUN_0017e5e0(DAT_00469940,&local_10);
    if ((float10)unaff_ESI < fVar2) {
      FUN_00206390(0);
      return;
    }
    if (*(int *)(in_EAX + 0x44) != 0) {
      return;
    }
  }
  fVar2 = (float10)FUN_00206250();
  FUN_002060c0((float)fVar2);
  return;
}
