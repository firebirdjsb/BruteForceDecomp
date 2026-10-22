/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 53FBA7DEBC4D3E43432DF9B3B9A9E8E36C7D53602F82332692A475F1187386B4
 * Entry: 0x002dcc60, Ghidra index: 10307, label: FUN_002dcc60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469f24;
extern uint32_t _DAT_00469f30;
extern uint32_t _DAT_00469f34;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002dcc60(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x20);
  while (piVar4 = piVar1, piVar4 != (int *)0x0) {
    piVar1 = (int *)*piVar4;
    if ((_DAT_00469f34 <= (float)piVar4[0x16]) ||
       ((*(uint *)(piVar4[0x10] + 0x4c) & 0x300) == 0x100)) {
      FUN_002c4720(unaff_ESI);
    }
    else if ((_DAT_00469f30 + DAT_00469f24 < (float)piVar4[0x16]) &&
            ((**(uint **)(piVar4[9] + 0x94) & **(uint **)(piVar4[4] + 0x94) & 3) != 0)) {
      piVar2 = (int *)piVar4[1];
      if (piVar1 != (int *)0x0) {
        piVar1[1] = (int)piVar2;
      }
      if (piVar2 == (int *)0x0) {
        *(int **)(unaff_ESI + 0x20) = piVar1;
      }
      else {
        *piVar2 = (int)piVar1;
      }
      *(short *)(unaff_ESI + 0x4a) = *(short *)(unaff_ESI + 0x4a) + -1;
      piVar4[0x1c] = unaff_ESI;
      iVar3 = *(int *)(unaff_ESI + 0x20);
      piVar4[1] = 0;
      *piVar4 = iVar3;
      *(int **)(unaff_ESI + 0x20) = piVar4;
      if (iVar3 != 0) {
        *(int **)(iVar3 + 4) = piVar4;
      }
      *(short *)(unaff_ESI + 0x4a) = *(short *)(unaff_ESI + 0x4a) + 1;
    }
  }
  *(undefined2 *)(unaff_ESI + 0x4c) = 0;
  return;
}
