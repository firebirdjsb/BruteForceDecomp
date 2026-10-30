/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C512F2D85C37C09737C6B72F8F8ADD294BB5D6F67798C0996ECF0E98FC345C59
 * Entry: 0x00092d10, Ghidra index: 1800, label: FUN_00092d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_00090930(int *param_1);
extern undefined4 FUN_00220dd0(void);

extern char s_23_23_IAnimatedNamedTexture_004060f4[];
char FUN_00092d10(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  piVar4 = param_1;
  cVar5 = FUN_00090930(param_1);
  if (cVar5 != '\0') {
    puVar6 = *(undefined4 **)(piVar4[2] + 4);
    if (puVar6 != (undefined4 *)0x0) {
      piVar1 = (int *)piVar4[0x26];
      piVar2 = piVar4 + 0x26;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar2 = 0;
      }
      (**(code **)*puVar6)(puVar6,s_23_23_IAnimatedNamedTexture_004060f4,piVar2);
      piVar2 = (int *)*piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x68))(piVar2,piVar4[0xf]);
      }
    }
    puVar6 = *(undefined4 **)(piVar4[2] + 0x10);
    if (puVar6 != (undefined4 *)0x0) {
      piVar1 = (int *)piVar4[0x27];
      piVar2 = piVar4 + 0x27;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar2 = 0;
      }
      (**(code **)*puVar6)(puVar6,s_23_23_IAnimatedNamedTexture_004060f4,piVar2);
      piVar2 = (int *)*piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x68))(piVar2,piVar4[0x18]);
      }
    }
    param_1 = (int *)0xb85cb09;
    puVar6 = (undefined4 *)(**(code **)(*piVar4 + 0x50))(piVar4,&param_1);
    iVar3 = piVar4[3];
    uVar7 = FUN_00220dd0(*puVar6);
    (**(code **)(iVar3 + 0x20))(piVar4 + 3,uVar7);
  }
  return cVar5;
}
