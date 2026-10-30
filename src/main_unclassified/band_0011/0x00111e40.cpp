/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 099C1D83B3E97C4776FF0D099D2E040866743D13961170FA919B5E0449D84D72
 * Entry: 0x00111e40, Ghidra index: 3556, label: FUN_00111e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039ddc8;
extern uint32_t PTR_FUN_0039ddd8;
extern uint32_t PTR_LAB_0039a8c0;
extern uint32_t PTR_LAB_0039dcd0;
extern uint32_t PTR_LAB_0039dcdc;
extern uint32_t PTR_LAB_0039dce8;
extern uint32_t PTR_LAB_0039ddcc;
void FUN_00111e40(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_ECX;
  int iVar5;
  int *unaff_EBX;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uStack_4;
  
  *in_ECX = PTR_FUN_0039ddd8;
  in_ECX[0x12] = PTR_LAB_0039ddcc;
  in_ECX[0x1a] = PTR_LAB_0039a8c0;
  in_ECX[0x6c] = PTR_FUN_0039ddc8;
  in_ECX[0x6d] = PTR_LAB_0039dce8;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x4c + (int)in_ECX) = &PTR_LAB_0039dcdc;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x50 + (int)in_ECX) = &PTR_LAB_0039dcd0;
  *(int *)(*(int *)(in_ECX[0x13] + 4) + 0x48 + (int)in_ECX) = *(int *)(in_ECX[0x13] + 4) + -0x80c;
  FUN_0012bfa0();
  FUN_00074c20();
  if (in_ECX[0x167] != 0) {
    FUN_0005bee0(in_ECX[0x167],in_ECX);
  }
  if (in_ECX[0x20c] != 0) {
    FUN_000de5b0(in_ECX[2],in_ECX,0xffffffff);
    in_ECX[0x20c] = 0;
  }
  iVar8 = in_ECX[0xba];
  if (iVar8 != 0) {
    FUN_0014c880();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar8);
  }
  if (in_ECX[0x168] != 0) {
    FUN_0005b5d0(1);
    in_ECX[0x168] = 0;
  }
  if ((int *)in_ECX[0x141] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x141] + 0x18))(1);
    in_ECX[0x141] = 0;
  }
  FUN_00114540();
  piVar4 = (int *)in_ECX[0x13a];
  if (piVar4 != (int *)in_ECX[0x13b]) {
    do {
      puVar1 = (undefined4 *)*piVar4;
      piVar7 = (int *)((undefined4 *)puVar1[2])[0x1f];
      (*(code *)**(undefined4 **)puVar1[2])(1);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x24))(1);
      }
      iVar8 = *(int *)(in_ECX[2] + 0xa44);
      piVar7 = *(int **)(iVar8 + 0x2c);
      if (piVar7 != *(int **)(iVar8 + 0x30)) {
LAB_00111f80:
        if ((undefined4 *)*piVar7 != puVar1) goto code_r0x00111f84;
        piVar2 = *(int **)(iVar8 + 0x30);
        piVar3 = piVar7 + 1;
        if (piVar3 != piVar2) {
          iVar5 = (int)piVar7 - (int)piVar3;
          do {
            *(int *)(iVar5 + (int)piVar3) = *piVar3;
            piVar3 = piVar3 + 1;
            piVar4 = unaff_EBX;
          } while (piVar3 != piVar2);
        }
        *(int *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) + -4;
      }
LAB_00111fb4:
      (**(code **)*puVar1)(1);
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)in_ECX[0x13b]);
  }
  if (in_ECX[0x13a] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x13a]);
  }
  in_ECX[0x13a] = 0;
  in_ECX[0x13b] = 0;
  in_ECX[0x13c] = 0;
  piVar4 = (int *)in_ECX[0x14d];
  in_ECX[0x1b] = 0xffffffff;
  if (piVar4 != (int *)in_ECX[0x14e]) {
    do {
      iVar8 = *(int *)(in_ECX[2] + 0xa44);
      piVar3 = piVar4 + 2;
      for (piVar7 = *(int **)(iVar8 + 0x3c); piVar7 != *(int **)(iVar8 + 0x40); piVar7 = piVar7 + 4)
      {
        if (*piVar7 == *piVar4) {
          FUN_00176700(piVar7 + 4,*(undefined4 *)(iVar8 + 0x40),piVar7,piVar3);
          *(int *)(iVar8 + 0x40) = *(int *)(iVar8 + 0x40) + -0x10;
          break;
        }
      }
      puVar1 = (undefined4 *)piVar4[1];
      piVar7 = (int *)puVar1[0x1f];
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      piVar4[1] = 0;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x24))(1);
      }
      piVar4 = piVar3;
    } while (piVar3 != (int *)in_ECX[0x14e]);
  }
  if (in_ECX[0x14d] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x14d]);
  }
  in_ECX[0x14d] = 0;
  in_ECX[0x14e] = 0;
  in_ECX[0x14f] = 0;
  piVar4 = (int *)in_ECX[0x149];
  if (piVar4 != (int *)in_ECX[0x14a]) {
    do {
      iVar8 = *(int *)(in_ECX[2] + 0xa44);
      piVar3 = piVar4 + 2;
      for (piVar7 = *(int **)(iVar8 + 0x3c); piVar7 != *(int **)(iVar8 + 0x40); piVar7 = piVar7 + 4)
      {
        if (*piVar7 == *piVar4) {
          FUN_00176700(piVar7 + 4,*(undefined4 *)(iVar8 + 0x40),piVar7,uStack_4);
          *(int *)(iVar8 + 0x40) = *(int *)(iVar8 + 0x40) + -0x10;
          break;
        }
      }
      puVar1 = (undefined4 *)piVar4[1];
      piVar7 = (int *)0x0;
      if (puVar1 != (undefined4 *)0x0) {
        piVar7 = (int *)puVar1[0x1f];
        (**(code **)*puVar1)(1);
      }
      piVar4[1] = 0;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x24))(1);
      }
      piVar4 = piVar3;
    } while (piVar3 != (int *)in_ECX[0x14a]);
  }
  uVar6 = 0;
  if (in_ECX[0x149] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x149]);
  }
  in_ECX[0x149] = 0;
  in_ECX[0x14a] = 0;
  in_ECX[0x14b] = 0;
  FUN_00129870(*(undefined4 *)(in_ECX[0x15a] + 4));
  *(undefined4 *)(in_ECX[0x15a] + 4) = in_ECX[0x15a];
  in_ECX[0x15b] = 0;
  *(undefined4 *)in_ECX[0x15a] = in_ECX[0x15a];
  *(undefined4 *)(in_ECX[0x15a] + 8) = in_ECX[0x15a];
  if ((undefined4 *)in_ECX[0x157] == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)in_ECX[0x157];
  }
  if (piVar4 != (int *)in_ECX[0x157]) {
    do {
      if ((undefined4 *)piVar4[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar4[2])(1);
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)in_ECX[0x157]);
  }
  puVar1 = (undefined4 *)in_ECX[0x157];
  if (puVar1 != (undefined4 *)0x0) {
    uVar6 = *puVar1;
  }
  FUN_001298b0(&uStack_4,uVar6,puVar1);
  iVar8 = in_ECX[0x16e];
  if (iVar8 != 0) {
    FUN_001434c0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar8);
  }
  iVar8 = in_ECX[0x153];
  if (iVar8 != 0) {
    FUN_00210190();
    FUN_00129ec0(&uStack_4,**(undefined4 **)(iVar8 + 8),*(undefined4 **)(iVar8 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(iVar8 + 8));
  }
  if ((undefined4 *)in_ECX[0x169] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x169])(1);
    in_ECX[0x169] = 0;
  }
  piVar4 = in_ECX + 0x1a9;
  iVar8 = 4;
  do {
    if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*piVar4);
    }
    piVar4 = piVar4 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  piVar4 = in_ECX + 0x1ad;
  iVar8 = 6;
  do {
    if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*piVar4);
    }
    piVar4 = piVar4 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar8 = in_ECX[0x7d];
  if (iVar8 != 0) {
    FUN_0023ccf0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar8);
  }
  FUN_00129be0(&uStack_4,*(undefined4 *)in_ECX[0x1fe],(undefined4 *)in_ECX[0x1fe]);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0x1fe]);
code_r0x00111f84:
  piVar7 = piVar7 + 1;
  if (piVar7 == *(int **)(iVar8 + 0x30)) goto LAB_00111fb4;
  goto LAB_00111f80;
}
