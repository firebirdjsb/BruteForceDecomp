/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DEA0B5E0FFE8014A190F81DB223D713F6848C0A3F559A2B53BAAFF86A733B366
 * Entry: 0x00108c60, Ghidra index: 3392, label: FUN_00108c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
/* WARNING: Removing unreachable block (ram,0x00108dbe) */

void FUN_00108c60(undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iStack_178;
  undefined4 auStack_158 [33];
  undefined1 auStack_d4 [16];
  int aiStack_c4 [2];
  float afStack_bc [47];
  
  if ((param_2 != (int *)0x0) && (iVar2 = (**(code **)(*param_2 + 4))(), iVar2 == 1)) {
    FUN_00106660();
    auStack_158[0] = 7;
    cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1d0))(auStack_d4);
    if (cVar1 != '\0') {
      piVar4 = aiStack_c4;
      iStack_178 = 0xc;
      do {
        if (*piVar4 != 0) {
          if (0.0 <= (float)piVar4[2]) {
            if ((char)param_2 != '\0') goto LAB_00108d20;
          }
          else {
            if ((char)param_2 == '\0') {
              uVar3 = FUN_001e97c0();
            }
            else {
LAB_00108d20:
              if ((float)piVar4[2] <= 0.0) goto LAB_00108d83;
              uVar3 = FUN_001e97c0();
            }
            uVar3 = FUN_001e97c0(piVar4[1],uVar3);
            FUN_002ea9a9(auStack_158,0x40,uVar3);
            FUN_002eaa70(auStack_158);
            FUN_0008ed00();
            FUN_000fb6e0(1,10);
          }
        }
LAB_00108d83:
        piVar4 = piVar4 + 4;
        iStack_178 = iStack_178 + -1;
      } while (iStack_178 != 0);
    }
    FUN_0010a7d0();
  }
  return;
}
