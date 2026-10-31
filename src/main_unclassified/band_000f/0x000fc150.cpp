/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B9B024FC45EC1347C8DEF00A37E2C2DAF74FA3281C774474F13EFCDCE85D168
 * Entry: 0x000fc150, Ghidra index: 3150, label: FUN_000fc150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* C++17 source-matched declaration only: FUN_00064490.cpp draft is void(void).
 * Original Xbox register/stack inputs and runtime ABI remain ABI_UNVERIFIED. */
extern void FUN_00064490(void);
void FUN_000fc150(int param_1)

{
  int *piVar1;
  int in_EAX;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = *(int **)(in_EAX + 0x34);
  piVar5 = *(int **)(in_EAX + 0x30);
  do {
    if (piVar5 == piVar1) {
      return;
    }
    piVar2 = *(int **)(param_1 + 0x74);
    if (piVar2 != *(int **)(param_1 + 0x78)) {
      do {
        if (*(int *)(*piVar2 + 0x24) == *piVar5) {
          if (*piVar2 != 0) {
            piVar2 = (int *)piVar5[0x12];
            for (piVar4 = (int *)piVar5[0x11]; piVar4 != piVar2; piVar4 = piVar4 + 2) {
              piVar3 = *(int **)(param_1 + 0x74);
              if (piVar3 != *(int **)(param_1 + 0x78)) {
                do {
                  if (*(int *)(*piVar3 + 0x24) == *piVar4) {
                    if (*piVar3 != 0) {
                      FUN_00064490();
                    }
                    break;
                  }
                  piVar3 = piVar3 + 1;
                } while (piVar3 != *(int **)(param_1 + 0x78));
              }
            }
          }
          break;
        }
        piVar2 = piVar2 + 1;
      } while (piVar2 != *(int **)(param_1 + 0x78));
    }
    piVar5 = piVar5 + 0x14;
  } while( true );
}
