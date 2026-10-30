/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0B38D34198B6FAFFEF1FA53001759238F16D4076B05BDAED1287567B02A7CF1
 * Entry: 0x00225220, Ghidra index: 7629, label: FUN_00225220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_00225220(int *param_1,float param_2)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  float fVar6;
  int *piVar7;
  undefined1 auStack_24 [36];
  
  piVar7 = param_1;
  if ((undefined4 *)param_1[3] == (undefined4 *)0x0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = *(int **)param_1[3];
  }
  piVar3 = (int *)piVar7[3];
  for (piVar5 = param_1; piVar5 != piVar3; piVar5 = (int *)*piVar5) {
    bVar2 = *(byte *)(piVar5 + 2);
    pbVar1 = (byte *)(piVar5 + 2);
    if ((bVar2 & 2) != 0) {
      if ((float)piVar5[0xd] == 0.0) {
        piVar5[0xc] = (int)((float)piVar5[0xc] - param_2);
      }
      else {
        fVar6 = (float)piVar5[0xd] - param_2;
        piVar5[0xd] = (int)fVar6;
        if (fVar6 < 0.0 != (fVar6 == 0.0)) {
          piVar5[0xd] = 0;
        }
      }
      if ((bVar2 & 8) == 0) {
        if ((*(byte *)(*piVar7 + 0xc50) & 0x10) == 0) {
          if ((bVar2 & 1) == 0) {
            if (piVar5[0xf] == 0) {
              FUN_00225440(piVar7,pbVar1,param_2);
            }
            else {
              FUN_00225c90(piVar7);
            }
          }
          else {
            FUN_00225c40(piVar7,param_2);
          }
          piVar4 = (int *)piVar5[0x16];
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 0x38))(piVar5 + 3);
            if ((float)piVar5[8] * (float)piVar5[8] +
                (float)piVar5[7] * (float)piVar5[7] + (float)piVar5[6] * (float)piVar5[6] != 0.0) {
              FUN_0001d0c0();
              (**(code **)(*piVar4 + 0x3c))(auStack_24);
            }
            if (0.0 < (float)piVar5[0xe]) {
              FUN_0021c380((float)piVar5[0xc] / (float)piVar5[0xe]);
            }
          }
          if (piVar5[0x1b] != 0) {
            FUN_00225130(piVar7,pbVar1);
          }
          FUN_00224770(*piVar7,param_2);
        }
        else {
          *pbVar1 = bVar2 | 4;
        }
      }
    }
  }
  do {
    while( true ) {
      piVar5 = param_1;
      if (piVar5 == piVar3) {
        return;
      }
      bVar2 = *(byte *)(piVar5 + 2);
      if ((bVar2 & 2) != 0) break;
LAB_0022541f:
      param_1 = (int *)*piVar5;
    }
    if ((bVar2 & 8) == 0) {
      if ((bVar2 & 4) != 0) {
        FUN_00224950();
        if ((undefined4 *)piVar5[0xf] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)piVar5[0xf])(1);
          piVar5[0xf] = 0;
        }
        if (piVar5[0x1b] != 0) {
          (**(code **)(*DAT_00469940 + 0x20))(piVar5[0x1b],1);
          piVar5[0x1b] = 0;
        }
        *(byte *)(piVar5 + 2) = *(byte *)(piVar5 + 2) & 0xfb | 8;
      }
      goto LAB_0022541f;
    }
    FUN_00224880();
    param_1 = (int *)*piVar5;
    if (piVar5 != (int *)piVar7[3]) {
      *(int **)piVar5[1] = (int *)*piVar5;
      *(int *)(*piVar5 + 4) = piVar5[1];
      FUN_002248e0();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar5);
    }
  } while( true );
}
