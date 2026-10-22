/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F20539206871A434236DF1582387F223CB4F2BED3C17E6A578CF43904D614881
 * Entry: 0x0010c9e0, Ghidra index: 3473, label: FUN_0010c9e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469950;
extern uint32_t _DAT_004a5b94;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010c9e0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *in_EAX;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 in_EDX;
  int unaff_EBX;
  int *piVar6;
  int *piVar7;
  
  *(undefined4 *)(unaff_EBX + 0x78) = *in_EAX;
  piVar7 = *(int **)(unaff_EBX + 100);
  *(undefined4 *)(unaff_EBX + 0x7c) = in_EDX;
  piVar5 = DAT_00469950;
  if (piVar7 != *(int **)(unaff_EBX + 0x68)) {
    do {
      iVar1 = *piVar7;
      if (iVar1 != 0) {
        iVar3 = *(int *)(unaff_EBX + 0x78);
        iVar2 = *(int *)(unaff_EBX + 0x7c);
        if (iVar3 != 0) {
          *(int *)(iVar1 + 0x98) = iVar3;
        }
        if (iVar2 == 0) {
          if (iVar3 == 0) goto LAB_0010ca75;
        }
        else {
          *(int *)(iVar1 + 0x9c) = iVar2;
        }
        piVar6 = piVar5;
        if (*(int *)(iVar1 + 0x9c) != 0) {
          piVar4 = piVar5 + 0xb0;
          iVar3 = 0;
          if (0 < *piVar4) {
            do {
              if ((piVar5[1] == *(int *)(iVar1 + 0x9c)) && (*piVar5 == *(int *)(iVar1 + 0x98))) {
                piVar4 = DAT_00469950 + iVar3 * 0xb;
                piVar5 = DAT_00469950;
                goto LAB_0010ca6b;
              }
              iVar3 = iVar3 + 1;
              piVar5 = piVar5 + 0xb;
              piVar6 = DAT_00469950;
            } while (iVar3 < *piVar4);
          }
        }
        _DAT_004a5b94 = _DAT_004a5b94 + 1;
        piVar4 = (int *)0x0;
        piVar5 = piVar6;
LAB_0010ca6b:
        *(int **)(iVar1 + 0xf0) = piVar4;
      }
LAB_0010ca75:
      piVar7 = piVar7 + 1;
    } while (piVar7 != *(int **)(unaff_EBX + 0x68));
  }
  return;
}
