/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D41C45463FF254CB37C61E5652DE47BB05954915D3960A2E8B4A733394FD624
 * Entry: 0x0029f440, Ghidra index: 9486, label: FUN_0029f440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_23_23_IAnimatedNamedTexture_004060f4[];
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0029f440(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *unaff_EBX;
  char *in_stack_ffffffd0;
  
  piVar4 = unaff_EBX + 2;
  if ((unaff_EBX[2] == 0) && (unaff_EBX[1] != 0)) {
    piVar5 = (int *)(**(code **)(*(int *)*unaff_EBX + 0x2c))(unaff_EBX + 1);
    if (piVar5 != (int *)0x0) {
      iVar6 = (**(code **)*piVar5)(piVar5,s_23_23_IAnimatedNamedTexture_004060f4);
      piVar2 = (int *)*piVar4;
      if (iVar6 < 0) {
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
          *piVar4 = 0;
        }
        (**(code **)(*piVar5 + 0x30))(piVar5,0,piVar4);
        piVar4 = (int *)unaff_EBX[3];
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 8))(piVar4);
          unaff_EBX[3] = 0;
        }
        unaff_EBX[9] = 1;
      }
      else {
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
          *piVar4 = 0;
        }
        (*pcRam00000030)(&stack0xfffffff8,0,piVar4);
        piVar5 = (int *)unaff_EBX[3];
        puVar3 = (undefined4 *)*piVar4;
        puVar1 = unaff_EBX + 3;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))(piVar5);
          *puVar1 = 0;
        }
        in_stack_ffffffd0 = s_23_23_IAnimatedNamedTexture_004060f4;
        (**(code **)*puVar3)(puVar3,s_23_23_IAnimatedNamedTexture_004060f4,puVar1);
        uVar7 = (**(code **)(*(int *)*puVar1 + 0x8c))((int *)*puVar1);
        unaff_EBX[9] = uVar7;
      }
      if ((int *)in_stack_ffffffd0 != (int *)0x0) {
        (**(code **)(*(int *)in_stack_ffffffd0 + 8))(in_stack_ffffffd0);
      }
    }
    unaff_EBX[8] = 0;
  }
  return 0;
}
