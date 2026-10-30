/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 503AEE4E0E993AA348163E577496EB6D16D8DF2B80E0EE98F4AF40125B845396
 * Entry: 0x000ac370, Ghidra index: 2060, label: FUN_000ac370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
void FUN_000ac370(void)

{
  float fVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  float unaff_retaddr;
  
  iVar2 = *(int *)(*(int *)(in_EAX + 0x28) + 0xe0);
  iVar2 = (**(code **)(**(int **)(*(int *)(iVar2 + 8) + 0xbec) + 0xc))(iVar2);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x24) != 0)) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x24) + 0x24);
    if (iVar2 != 0) {
      if ((iVar2 < 0) || (0x18 < iVar2)) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(DAT_00469948 + 0x250 + iVar2 * 4);
      }
      if ((iVar2 != 0) && (iVar3 = FUN_000ba320(), iVar3 != 0)) {
        if (((*(float *)(iVar2 + 0x78) <= 0.5) ||
            (*(float *)(iVar2 + 0x78) <= ABS(*(float *)(iVar2 + 0x7c)))) &&
           ((-0.5 <= *(float *)(iVar2 + 0x7c) ||
            (-ABS(*(float *)(iVar2 + 0x78)) <= *(float *)(iVar2 + 0x7c))))) {
          if (((*(float *)(iVar2 + 0x78) < -0.5) &&
              (*(float *)(iVar2 + 0x78) < -ABS(*(float *)(iVar2 + 0x7c)))) ||
             ((0.5 < *(float *)(iVar2 + 0x7c) &&
              (ABS(*(float *)(iVar2 + 0x78)) < *(float *)(iVar2 + 0x7c))))) {
            if (0.0 <= *(float *)(in_EAX + 0x78)) {
              FUN_000ac020();
              *(undefined4 *)(in_EAX + 0x78) = 0;
            }
            fVar1 = *(float *)(in_EAX + 0x78) - unaff_retaddr * 4.0;
            *(float *)(in_EAX + 0x78) = fVar1;
            if (-1.0 <= fVar1) {
              return;
            }
          }
          *(undefined4 *)(in_EAX + 0x78) = 0;
          return;
        }
        if (*(float *)(in_EAX + 0x78) < 0.0 != (*(float *)(in_EAX + 0x78) == 0.0)) {
          FUN_000abfc0();
          *(undefined4 *)(in_EAX + 0x78) = 0;
        }
        fVar1 = unaff_retaddr * 4.0 + *(float *)(in_EAX + 0x78);
        *(float *)(in_EAX + 0x78) = fVar1;
        if (fVar1 <= 1.0) {
          return;
        }
        *(undefined4 *)(in_EAX + 0x78) = 0;
        return;
      }
    }
  }
  FUN_000ac160();
  return;
}
