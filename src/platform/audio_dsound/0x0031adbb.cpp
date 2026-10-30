/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3468E8FC4BD8AE5D8B42D224437A671ACA03750F52528F55E9C320710FF3D235
 * Entry: 0x0031adbb, Ghidra index: 12280, label: FUN_0031adbb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0032ff08;
uint FUN_0031adbb(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *in_ECX;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)0x0;
  FUN_003118f0();
  uVar4 = param_1 + 0x17U & 0xfffffff8;
  if ((in_ECX[6] != 0) && (uVar4 <= *(uint *)(in_ECX[6] + 8))) {
    piVar2 = in_ECX + 4;
    piVar1 = (int *)*piVar2;
    if (piVar1 != piVar2) {
      do {
        if (((piVar1[3] == 0) && (uVar4 <= (uint)piVar1[2])) &&
           ((piVar3 == (int *)0x0 || ((uint)piVar1[2] < (uint)piVar3[2])))) {
          piVar3 = piVar1;
        }
        piVar1 = (int *)*piVar1;
      } while (piVar1 != piVar2);
      if (piVar3 != (int *)0x0) {
        if (uVar4 + 0x50 < (uint)piVar3[2]) {
          FUN_0031aa47((int)piVar3 + uVar4,piVar3[2] - uVar4,piVar3);
          piVar3[2] = uVar4;
        }
        piVar3[3] = 0x706f6c73;
        if (piVar3 == (int *)in_ECX[6]) {
          in_ECX[6] = 0;
          for (piVar2 = (int *)in_ECX[4]; piVar2 != in_ECX + 4; piVar2 = (int *)*piVar2) {
            if ((piVar2[3] == 0) &&
               ((in_ECX[6] == 0 || (*(uint *)(in_ECX[6] + 8) < (uint)piVar2[2])))) {
              in_ECX[6] = (int)piVar2;
            }
          }
        }
        *DAT_0032ff08 = *DAT_0032ff08 + piVar3[2];
        (**(code **)(*in_ECX + 4))();
      }
    }
  }
  FUN_00311923();
  return -(uint)(piVar3 != (int *)0x0) & (uint)(piVar3 + 4);
}
