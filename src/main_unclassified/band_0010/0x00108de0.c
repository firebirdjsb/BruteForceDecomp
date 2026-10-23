/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AC1312D5E0A777A410B234C215503AC053B166AA588225F685498D9D6B1642FF
 * Entry: 0x00108de0, Ghidra index: 3393, label: FUN_00108de0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040ccfc;
extern uint32_t DAT_0040cd04;
extern uint32_t DAT_00469b58;
/* WARNING: Removing unreachable block (ram,0x00108f72) */

void FUN_00108de0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iStack_144;
  int *apiStack_118 [17];
  undefined1 auStack_d4 [16];
  float afStack_c4 [49];
  
  if (((param_2 != (int *)0x0) && (iVar2 = (**(code **)(*param_2 + 4))(), iVar2 == 1)) &&
     (apiStack_118[0] = param_2, param_2 != (int *)0x0)) {
    FUN_00106660();
    cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1d0))(auStack_d4);
    if (cVar1 != '\0') {
      pfVar4 = afStack_c4 + 2;
      iStack_144 = 0xc;
      do {
        if (pfVar4[-2] != 0.0) {
          if (0.0 <= *pfVar4) {
            if ((char)param_2 != '\0') goto LAB_00108ebc;
          }
          else {
            if ((char)param_2 == '\0') {
              FUN_002eaa70(&DAT_0040cd04);
              FUN_0008ed00();
              iVar2 = -(int)*pfVar4;
            }
            else {
LAB_00108ebc:
              if (*pfVar4 <= 0.0) goto LAB_00108f38;
              FUN_002eaa70(&DAT_0040ccfc);
              FUN_0008ed00();
              iVar2 = (int)*pfVar4;
            }
            uVar3 = FUN_001e97c0(iVar2);
            FUN_002ea9a9(apiStack_118,0x20,uVar3);
            FUN_002eaa70(apiStack_118);
            FUN_0008ed00();
            FUN_000fb6e0(1,10);
          }
        }
LAB_00108f38:
        pfVar4 = pfVar4 + 4;
        iStack_144 = iStack_144 + -1;
      } while (iStack_144 != 0);
    }
    FUN_0010a7d0();
  }
  return;
}
