/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20A4CD32292DA7CEFE92E48AFC95063F3696F6B2A6C664A7CC542D4492B123A6
 * Entry: 0x000ef410, Ghidra index: 2975, label: FUN_000ef410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing 0x002EA01D allocation boundary takes one guest32 size and
 * returns guest32 EAX. No host allocation/pointer ABI is established. */
#include "bf_002ea01d_allocator_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
extern uint32_t PTR_LAB_0039e00c;
undefined4 FUN_000ef410(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int unaff_EDI;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  
  iVar2 = (**(code **)(*DAT_00469b54 + 0x48))();
  piVar4 = *(int **)(iVar2 + 0x568);
  if (piVar4 != *(int **)(iVar2 + 0x56c)) {
    do {
      if (*piVar4 == *param_1) {
        if (piVar4 == (int *)0x0) {
          return 0;
        }
        iVar2 = *(int *)(unaff_EDI + 4);
        if (iVar2 == 0) {
          fStack_10 = 0.0;
          fStack_c = 0.0;
        }
        else {
          fStack_c = *(float *)(iVar2 + 0x10);
          fStack_10 = *(float *)(iVar2 + 0xc);
        }
        if ((char)piVar4[1] == '\0') {
          fStack_18 = (float)piVar4[2] - fStack_10;
        }
        else {
          fStack_18 = *(float *)(unaff_EDI + 0xc) + (float)piVar4[2];
        }
        if ((char)piVar4[3] == '\0') {
          fVar1 = (float)piVar4[4] - fStack_c;
        }
        else {
          fVar1 = *(float *)(unaff_EDI + 0x10) + (float)piVar4[4];
        }
        if ((char)piVar4[5] == '\0') {
          fStack_10 = (float)piVar4[6];
        }
        else {
          fStack_10 = *(float *)(unaff_EDI + 0xc) + (float)piVar4[6];
        }
        if ((char)piVar4[7] == '\0') {
          fStack_c = (float)piVar4[8];
        }
        else {
          fStack_c = *(float *)(unaff_EDI + 0x10) + (float)piVar4[8];
        }
        puVar3 = (undefined4 *)FUN_002ea01d(0x24);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = &PTR_LAB_0039e00c;
          puVar3[8] = 0;
          puVar3[6] = 0;
          puVar3[5] = 0;
          *(undefined1 *)(puVar3 + 7) = 0;
        }
        iVar2 = piVar4[9];
        puVar3[1] = fStack_18;
        puVar3[2] = fVar1;
        puVar3[4] = fStack_c;
        puVar3[3] = fStack_10;
        puVar3[5] = iVar2;
        puVar3[6] = iVar2;
        puVar3[8] = piVar4[10];
        FUN_001611d0();
        return 1;
      }
      piVar4 = piVar4 + 0xb;
    } while (piVar4 != *(int **)(iVar2 + 0x56c));
  }
  return 0;
}
