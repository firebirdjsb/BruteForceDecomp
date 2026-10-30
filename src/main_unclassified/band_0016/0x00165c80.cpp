/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA916D5213A1A555BB3E148E4475E30A2D229BAABE46770D44BDF2ED8E78F5FF
 * Entry: 0x00165c80, Ghidra index: 4707, label: FUN_00165c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00165c80(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piStack00000008;
  undefined4 *in_stack_000023f4;
  int *in_stack_000023f8;
  int *in_stack_000023fc;
  
  FUN_002ebea0();
  piVar5 = in_stack_000023f8 + (((int)in_stack_000023fc - (int)in_stack_000023f8) / 0xa40) * 0x148;
  FUN_00166180();
  piVar3 = piVar5 + 0x148;
  for (; in_stack_000023f8 < piVar5; piVar5 = piVar5 + -0x148) {
    if ((piVar5[-0x148] < *piVar5) || (*piVar5 < piVar5[-0x148])) break;
  }
  piVar4 = piVar3;
  piStack00000008 = piVar5;
  if (piVar3 < in_stack_000023fc) {
    do {
      piVar4 = piVar3;
      if ((*piVar3 < *piVar5) || (*piVar5 < *piVar3)) break;
      piVar3 = piVar3 + 0x148;
      piVar4 = piVar3;
    } while (piVar3 < in_stack_000023fc);
  }
joined_r0x00165d37:
  do {
    piVar1 = piStack00000008;
    if (in_stack_000023fc <= piVar4) {
joined_r0x00165dc1:
      for (; in_stack_000023f8 < piVar1; piVar1 = piVar1 + -0x148) {
        iVar2 = piStack00000008[-0x148];
        if (*piVar5 <= iVar2) {
          if (*piVar5 < iVar2) break;
          piVar5 = piVar5 + -0x148;
          FUN_001662b0();
          FUN_001666b0();
          FUN_001666b0();
          iVar2 = 0x13;
          do {
            FUN_00068c90();
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        piStack00000008 = piStack00000008 + -0x148;
      }
      if (piVar1 == in_stack_000023f8) {
        if (piVar4 == in_stack_000023fc) {
          *in_stack_000023f4 = piVar5;
          in_stack_000023f4[1] = piVar3;
          return;
        }
        if (piVar3 != piVar4) {
          FUN_001662b0();
          FUN_001666b0();
          FUN_001666b0();
          iVar2 = 0x13;
          do {
            FUN_00068c90();
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        piVar3 = piVar3 + 0x148;
        piVar4 = piVar4 + 0x148;
        piVar5 = piVar5 + 0x148;
        FUN_001662b0();
        FUN_001666b0();
        FUN_001666b0();
        iVar2 = 0x13;
        do {
          FUN_00068c90();
          iVar2 = iVar2 + -1;
          piStack00000008 = piVar1;
        } while (iVar2 != 0);
      }
      else {
        piVar1 = piVar1 + -0x148;
        piStack00000008 = piVar1;
        if (piVar4 == in_stack_000023fc) {
          piVar5 = piVar5 + -0x148;
          if (piVar1 != piVar5) {
            FUN_001662b0();
            FUN_001666b0();
            FUN_001666b0();
            iVar2 = 0x13;
            do {
              FUN_00068c90();
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          piVar3 = piVar3 + -0x148;
          FUN_001662b0();
          FUN_001666b0();
          FUN_001666b0();
          iVar2 = 0x13;
          do {
            FUN_00068c90();
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        else {
          FUN_001662b0();
          FUN_001666b0();
          FUN_001666b0();
          iVar2 = 0x13;
          do {
            FUN_00068c90();
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          piVar4 = piVar4 + 0x148;
        }
      }
      goto joined_r0x00165d37;
    }
    if (*piVar4 <= *piVar5) {
      if (*piVar4 < *piVar5) goto joined_r0x00165dc1;
      piVar3 = piVar3 + 0x148;
      FUN_001662b0();
      FUN_001666b0();
      FUN_001666b0();
      iVar2 = 0x13;
      do {
        FUN_00068c90();
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    piVar4 = piVar4 + 0x148;
  } while( true );
}
